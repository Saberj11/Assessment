#ifndef __LED_H
#define __LED_H

#include <stdint.h>

#define GREEN_LED               uint8_t 12
#define ORANGE_LED              uint8_t 13
#define RED_LED                 uint8_t 14
#define BLUE_LED                uint8_t 15

#define USER_PUSH_BUTTON        uint8_t 0

void InputOutputConfig(uint32_t *GPIOx, uint8_t Pin, uint8_t Mode);
void ButtonToggleLed();

#endif