#include <SPI.h>
#include "AD5930.h"
#include "Wprogram.h"

#define startFreq 40000 
#define EXTERN_CLOCK_FREQ 50000000
#define CTRL_REG_MASK 0x3
#define FSYNC 28
#define CTRL 10 
#define SCLK 13 // MOSI and SCK are pin 11 and 13 on Teensy 3.2
#define SDATA 11

const SPISettings settingsA(40000000, MSBFIRST, SPI_MODE0); 

// For the control register
typedef enum mode{
  SAW_SWEEP=1<<4,
  TRIANGULAR_SWEEP=0
}CTRL_REG_D4;

typedef enum INT_EXT_INCR{
  EXT_INC=1<<5,
  INT_INC=0
}CTRL_REG_D5;

typedef enum INT_EXT_BURST{
  EXT_BUR=1<<6,
  INT_BUR=0
}CTRL_REG_D6;

typedef enum CW_BURST{
  CW=1<<7,
  BURST=0
}CTRL_REG_D7;

typedef enum MSBOUTEN{
  MSBOUT_EN=1<<8,
  MSBOUT_DIS=0
}CTRL_REG_D8;

typedef enum SINE_TRI{
  SINE=1<<9,
  TRI=0
}CTRL_REG_D9;

typedef enum DAC_ENABLE{
  DAC_EN=1<<10,
  DAC_DIS=0
}CTRL_REG_D10;

typedef enum TWICE_ONCE{
  TWICE=1<<11, // two consecutive writes will be performed
  ONCE=0 // one write will be performed
}CTRL_REG_D11;

const uint16_t ctrl_reg_val = CTRL_REG_MASK| // D15 - D12 address of the control register
                                TWICE| // Two write operations (two words) are required to load Fstart and Fdelta
                               DAC_EN| // DAC is enabled
                                 SINE| // Iout and Ioutb output sine waves
                           MSBOUT_DIS| // Disable the MSBOUT pin
                                   CW| // Output each frequency continuously (rather than bursts) to get a fixed-freq signal
                              EXT_BUR| // The frequency burst are triggered externally thorugh the CTRL pin 
                              EXT_INC| // The frequency increments are triggered externally through the CTRL pin
                            SAW_SWEEP; // Saw sweep mode 
                            

AD5930::AD5930(){
}

void AD5930::myBegin(void){

  #if 1
  pinMode(CTRL, OUTPUT);
  pinMode(FSYNC, OUTPUT);
  pinMode(SCLK, OUTPUT);
  pinMode(SDATA, OUTPUT);

  digitalWrite(CTRL, LOW); // should be set after setting output mode
  digitalWrite(FSYNC, HIGH);
  digitalWrite(SCLK, LOW);
  digitalWrite(SDATA, LOW);

  #endif

}

void AD5930::setStartFreq(uint32_t freq){
  if(freq > EXTERN_CLOCK_FREQ/2) return; // Exceed max correct frequency
  uint32_t scaledVal = (freq * 1.0 / EXTERN_CLOCK_FREQ) * 0xffffff;
  uint16_t LSB_MASK = 0xc000;
  uint16_t MSB_MASK = 0xd000;
  uint16_t lsbs = scaledVal & 0xfff;
  uint16_t msbs = (scaledVal >> 12) & 0xfff;

  spiWriteWord(LSB_MASK | lsbs);
  spiWriteWord(MSB_MASK | msbs);
}

void AD5930::setDeltaFreq(long freq){
  if(freq > EXTERN_CLOCK_FREQ/2 || freq < -EXTERN_CLOCK_FREQ/2) return; // Exceed max increcement frequency

  int sign_bit = 0;
  if(freq < 0) sign_bit = 1;
  freq = (freq>0 ? freq : -freq);
  uint32_t scaledVal = (freq * 1.0 / EXTERN_CLOCK_FREQ) * 0xffffff;
  
  uint16_t LSB_MASK = 0x2000;
  uint16_t MSB_MASK = 0x3000;
  
  uint16_t lsbs = scaledVal & 0xfff;
  uint16_t msbs = (scaledVal >> 12) & 0x7ff; 

  msbs = msbs | (sign_bit << 23); // Set the sign bit
  
  spiWriteWord(LSB_MASK | lsbs);
  spiWriteWord(MSB_MASK | msbs);
}

void AD5930::setNumIncr(uint16_t num){
  if(num > 0xfff ) return; // Exceed max number of increcement 
  uint16_t N_MASK = 0x1000;
  spiWriteWord(N_MASK | (num & 0xfff));
}

void AD5930::spiWriteWord(uint16_t val) {
  // Send in the address and value via SPI:
  SPI.transfer((val >> 8) & 0xff);
  SPI.transfer(val & 0xff);
}

void AD5930::configAD5930(){
  SPI.begin();
  SPI.beginTransaction(settingsA);

  // put chip select code here instead of the spiWriteWord
  digitalWrite(FSYNC,LOW); // Take the SS pin low to select the chip:

  spiWriteWord(ctrl_reg_val); //write to ctrl register to reset
  setStartFreq(startFreq); // Set start freqency 
  setDeltaFreq(10000); // Set frequency increment
  setNumIncr(10); // Set number of increments

  delay(1);
  
  spiWriteWord(ctrl_reg_val); //Set Control Reg (configuring control register has to be the last)
  
  digitalWrite(FSYNC,HIGH); // Take the SS pin high to de-select the chip:

  SPI.endTransaction();
  SPI.end();
}

void AD5930::togglePin(int pinNum){
    digitalWrite(pinNum, HIGH);
    delay(30);
    digitalWrite(pinNum, LOW);
}

void AD5930::startEmitting(){
  // triger the signal generating 
  configAD5930();
  delay(100);
  togglePin(CTRL);
  delay(100);
}
