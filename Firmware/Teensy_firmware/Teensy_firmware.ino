#include <ADC.h>
#include <SPI.h>
#include <i2c_t3.h>
#include "AD5930.h"
#include "Multiplex_4pole.h"
#include "Multiplex_2pole.h"
#include "fastadc.h"

// ship all measurements including the escape pairs
#define numElectrode 8
#define SAMPLE_SIZE 500 // doubled the sample size for 4MHz ADC sampling 
#define SETTLEDOWM_DELAY 100

// measure on emitting pairs
bool all = false; // send 

// Digital Pot
#define POT_ADDR 0x2E

/* AD5930 */
AD5930 ad5930;

/* for adc */
#define DC_BIAS_12RES 2096


#define NUM_MEAS (numElectrode*numElectrode)
uint32_t abdcPortVectors[NUM_MEAS * 4];

uint16_t input_buffer[SAMPLE_SIZE];

#define ADCBUF_COUNT 4096
static uint16_t read_buf[ADCBUF_COUNT];
const int readPin = A12;

/* for Serial communication */
uint16_t send_buffer[NUM_MEAS];

/* ADC helper inline function */
#define ADC_BITBAND_ADDR(reg, bit) (((uint32_t)(reg) - 0x40000000) * 32 + (bit) * 4 + 0x42000000)

__attribute__((always_inline)) volatile bool getBit(volatile uint32_t* reg, uint8_t bit) {
        return (volatile bool)*(uint32_t*)(ADC_BITBAND_ADDR(reg, bit));
}

void setup() {


  #if 1 // or 0 to use NON_STAF on the pcb to replace digipot
  // reassign pins 29 and 30 to use the ALT2 configuration
  // which makes them  I2C pins - I2C1_SCL (pin29) and I2C1_SDA (pin30)
  CORE_PIN29_CONFIG = PORT_PCR_MUX(2);
  CORE_PIN30_CONFIG = PORT_PCR_MUX(2);
  
  // Initialize digital pot (Using I2C1 rather than I2C0 to avoid using portB)
  Wire1.begin(I2C_MASTER, 0x00, I2C_PINS_29_30, I2C_PULLUP_EXT, I2C_RATE_100); // default clock speed 100KHz
  // command code 0x0 : directly write to the scale register
  // scale can be set from 0x0 to 0x7F (128 possible settings)
  // resistance range is from 0 to 100kOhm
  Wire1.beginTransmission(POT_ADDR);
  Wire1.send(0x00);
  Wire1.send(0x7F); //0x0d roughly 10k ref resistor
  Wire1.endTransmission();
 #endif 

 delay(10);

  // Initialize port vector look up table for multiplexing
  if(all == true){
    if(numElectrode == 32){
    memcpy(abdcPortVectors, abdcPortVectors32all, sizeof(abdcPortVectors32all));
    }else if (numElectrode == 16){
      memcpy(abdcPortVectors, abdcPortVectors16all, sizeof(abdcPortVectors16all));
    }else if (numElectrode == 8){
      memcpy(abdcPortVectors, abdcPortVectors16all, sizeof(abdcPortVectors8all));
    }
  }

  else{
    if(numElectrode == 32){
    memcpy(abdcPortVectors, abdcPortVectors32part, sizeof(abdcPortVectors32part));
    }else if (numElectrode == 16){
      memcpy(abdcPortVectors, abdcPortVectors16part, sizeof(abdcPortVectors16part));
    }else if (numElectrode == 8){
      memcpy(abdcPortVectors, abdcPortVectors8part, sizeof(abdcPortVectors8part));
    }
  }
  
  // Initialize FAST ADC
  Serial.begin(460800);
  pinMode(readPin, INPUT);

  // Initialize multiplexer control pins
  for(int i = 0; i < 20; i++){
    pinMode(pinForMul[i],OUTPUT);
  }
  delay(100);

  // initialize the output pins for AD5930
  ad5930.myBegin();
  delay(10);
  ad5930.startEmitting();

  // initialize dual dma mode adc sampling
  startDualADC(readPin, read_buf, ADCBUF_COUNT);
  memset(input_buffer, 0, sizeof(input_buffer));
}

void loop() {
  
  for(int i = 0; i < NUM_MEAS; i++){

    
    // escape emitting ports
    if(abdcPortVectors[i * 4] == 7 ){
      send_buffer[i] = 2000; // skip emit rece overlapping measurements
    }else{
      switchForMeasure(i);
      
      delayMicroseconds(SETTLEDOWM_DELAY); // should be variated to wait for mul to stable
      
      do_one_sample();
      send_buffer[i] = escapeTerminator(get_rms(input_buffer));
      
    }
  }
  // send measurements 
  #if 1
    Serial.write((uint8_t *)send_buffer, sizeof(send_buffer));
    Serial.write(0x80);
  #endif

  delay(20);
}

/******************/
/* Serial helpers */
/******************/
static inline uint16_t escapeTerminator (uint16_t v){
  if((v & 0xff) == 0x80){
    v++;
  }

  if((v >> 8) == 0x80){
    v += 0x100 - (v & 0xff); 
  }
  return v;
}

/***************/
/* ADC helpers */
/***************/
static void do_one_sample() { 
    extractDMASamples(read_buf, ADCBUF_COUNT, (uint16_t *)input_buffer, SAMPLE_SIZE);
}

static uint16_t get_rms(uint16_t *input_buffer){
  uint32_t rst = 0;
  for(int i = 0; i < SAMPLE_SIZE; i++){
    rst += (DC_BIAS_12RES - input_buffer[i]) * (DC_BIAS_12RES - input_buffer[i]) ;
  }

  rst = sqrt(rst / SAMPLE_SIZE);
  //rst = (rst / SAMPLE_SIZE); // save sqrt for laptop

  if(rst == 2000){ // escape dummy
    rst = 1999;
  }
  
  return (uint16_t)rst;
}

/***************/
/* MUL helpers */
/***************/
static inline void switchForMeasure(int num){ // num is from 0 to 1023
  int base = num * 4;
    GPIOA_PDOR = abdcPortVectors[base];
    GPIOB_PDOR = abdcPortVectors[base + 1];
    GPIOD_PDOR = abdcPortVectors[base + 2];
    GPIOE_PDOR = abdcPortVectors[base + 3];
}
