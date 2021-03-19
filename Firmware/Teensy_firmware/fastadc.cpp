#include "fastadc.h"
#include "DMAChannel.h"
#include "ADC.h"

DMAChannel *dma0, *dma1;
ADC adc;

void dma_isr(void) {
  dma0->clearInterrupt();
}

static DMAChannel *configureDMA_DualADC(uint16_t *buf, int bufcount, int which) {
  DMAChannel *dma = new DMAChannel(); // reserve a new DMA channel
  auto TCD = dma->TCD;

  /* TCD setup */
  TCD->NBYTES = 2; // bytes per minor iteration
  TCD->CITER = TCD->BITER = bufcount >> 1;
  TCD->CSR = 0; // no MAJORELINK, no ESG, no DREQ

  // configure source for fixed-address data read
  TCD->SADDR = (which == 0) ? &ADC0_RA : &ADC1_RA;
  TCD->SOFF = 0; // don't increment source
  TCD->ATTR_SRC = 1; // src size = 16 bits
  TCD->SLAST = 0;

  // configure dest for circular buffer write
  TCD->DADDR = &buf[(which == 0) ? 0 : 1];
  TCD->DOFF = 4; // skip every other word
  TCD->ATTR_DST = 1;
  TCD->DLASTSGA = -(TCD->DOFF * TCD->CITER); // reset dest addr on completion

  if(which == 0)
    dma->interruptAtCompletion();
  /* Start channel */
  dma->triggerAtHardwareEvent((which == 0) ? DMAMUX_SOURCE_ADC0 : DMAMUX_SOURCE_ADC1);
  dma->enable();
  if(which == 0)
    dma->attachInterrupt(dma_isr);

  return dma;
}

/* From ADC_Module.h */
#define ADC_BITBAND_ADDR(reg, bit) (((uint32_t)(reg) - 0x40000000) * 32 + (bit) * 4 + 0x42000000)
__attribute__((always_inline)) static void setBit(volatile uint32_t* reg, uint8_t bit) {
    (*(uint32_t *)ADC_BITBAND_ADDR((reg), (bit))) = 1;
}
__attribute__((always_inline)) static void clearBit(volatile uint32_t* reg, uint8_t bit) {
    (*(uint32_t *)ADC_BITBAND_ADDR((reg), (bit))) = 0;
}
__attribute__((always_inline)) static void changeBit(volatile uint32_t* reg, uint8_t bit, bool state) {
    (*(uint32_t *)ADC_BITBAND_ADDR((reg), (bit))) = state;
}
__attribute__((always_inline)) static volatile bool getBit(volatile uint32_t* reg, uint8_t bit) {
    return (volatile bool)*(uint32_t*)(ADC_BITBAND_ADDR(reg, bit));
}

static void configureADC_DualADC(ADC_Module *adc, uint8_t pin) {
  adc->setAveraging(0);
  adc->setResolution(12); // 8, 10, 12, 16
  adc->setConversionSpeed(ADC_CONVERSION_SPEED::VERY_HIGH_SPEED);
  adc->setSamplingSpeed(ADC_SAMPLING_SPEED::VERY_HIGH_SPEED);
  /* Set crazy-fast mode (clock = bus clock w/o division) */
  if(adc->ADC_num == 0) {
    clearBit(&ADC0_CFG1, ADC_CFG1_ADICLK1_BIT);
    clearBit(&ADC0_CFG1, ADC_CFG1_ADICLK0_BIT);
  } else {
    clearBit(&ADC1_CFG1, ADC_CFG1_ADICLK1_BIT);
    clearBit(&ADC1_CFG1, ADC_CFG1_ADICLK0_BIT);
  }

  adc->disablePGA();

  adc->disableInterrupts();
  adc->disableCompare();
  adc->enableDMA();

  adc->continuousMode();
  adc->recalibrate();

  adc->setHardwareTrigger(); // so that writes to SC1A won't kick off the ADC
  adc->startContinuous(pin);
  adc->setSoftwareTrigger();
  // Now, just write SC1A to start the ADC.
}

void startDualADC(int pin, uint16_t *buf, uint32_t bufcount) {
  dma0 = configureDMA_DualADC(buf, bufcount, 0);
  dma1 = configureDMA_DualADC(buf, bufcount, 1);

  configureADC_DualADC(adc.adc0, pin);
  configureADC_DualADC(adc.adc1, pin);

  /* Start the ADCs with a precise delay (off by a half-cycle to get 2x the effective speed) */
  unsigned long a0 = ADC0_SC1A;
  unsigned long a1 = ADC1_SC1A;
  volatile unsigned long *a0p = &ADC0_SC1A;
  volatile unsigned long *a1p = &ADC1_SC1A;

  /* Writing SC1A here starts the ADC */
  #define NOP "nop\n\t"
  __disable_irq();
  asm volatile(
    "str %[a0], [%[a0p]]"   "\n\t"
    /* nops go here */
    NOP NOP NOP NOP
    NOP NOP NOP NOP
    NOP NOP NOP NOP
    NOP NOP NOP NOP
    NOP NOP NOP NOP
    NOP NOP
    "str %[a1], [%[a1p]]"   "\n\t"
    : /* outputs */ [a0p]"+r"(a0p), [a1p]"+r"(a1p)
    : /* inputs */ [a0]"r"(a0), [a1]"r"(a1)
    : /* clobbers */
  );
  __enable_irq();
}

void extractDMASamples(const uint16_t *buf, const int bufcount, uint16_t *out, int n) {
  int cur = (uint16_t *)dma0->TCD->DADDR - buf;
  if(cur > n) {
    memcpy(out, &buf[cur-n], n*sizeof(uint16_t));
  } else {
    /* Copy `n-cur` samples from the end and `cur` samples from the front */
    memcpy(out, &buf[bufcount - (n-cur)], (n-cur)*sizeof(uint16_t));
    memcpy(out+(n-cur), &buf[0], cur*sizeof(uint16_t));
  }
}

