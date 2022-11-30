#include "gpio.h"
#include "led.h"    

/*#define GREEN_LED               uint8_t 12
#define ORANGE_LED              uint8_t 13
#define RED_LED                 uint8_t 14
#define BLUE_LED                uint8_t 15*/




void InputOutputConfig(uint32_t *GPIOx,uint8_t Pin,uint8_t Mode)
{
  // EMB_ASSERT(Led == GREEN_LED || Led == ORANGE_LED || Led == RED_LED || Led == BLUE_LED );
  GPIO_Clock_Enable(GPIOx);
  GPIO_Config(GPIOx, Pin, Mode,OUTPUT_PUSH_PULL,MEDIUM_SPEED);
  
}


void ButtonToggleLed()
{
  uint8_t previous_state = 0;
  uint8_t present_state = 0;
  uint8_t led_state =0;
  GPIO_Write_Pin(GPIOD,PIN15,SET);
  GPIO_Write_Pin(GPIOD,PIN12,SET);
  present_state = GPIO_Read_Pin(GPIOA,PIN0);
  led_state = 1;
  while(1)
  {
    previous_state = present_state;
    present_state = GPIO_Read_Pin(GPIOA,PIN0);
    if(previous_state == 1 && present_state == 0)
    {
      GPIO_Write_Pin(GPIOD,PIN12,!led_state);
      led_state = !led_state;
      for(int i=0; i<5000;i++)
      {
        __asm("NOP");
      }
    }
  
  }
}