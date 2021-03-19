#pragma once

#include <stdint.h>

/* Start 4.36MHz super fast ADC on the selected pin.
 * This uses both ADCs simultaneously to achieve high speed, 
 * in combination with DMA to transfer data with no latency.
 * Note: this only works on certain pins:
 *  on the Teensy 3.2, pins A2, A3, A10, A12, A13 work.
 */
void startDualADC(int pin, uint16_t *buf, uint32_t bufcount);
/* Extract the `count' most recent samples from the current DMA buffer. */
void extractDMASamples(const uint16_t *buf, const int bufcount, uint16_t *out, int count);
