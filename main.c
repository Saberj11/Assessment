/**
  ******************************************************************************
  * @file    main.c
  * @author  Saber Chaabane
  * @brief   GPIO DRIVER 
  * @version V1.0.0
  * @date    16-10-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"
#include "led.h"
/*----------------Private Functions Prototype---------------------------------*/
//static void delay(unsigned int delay);

/* Private define ------------------------------------------------------------*/

/*
Green LED       PD12
Orange LED      PD13
Red LED         PD14
Blue LED        PD15

User Push Button        PA0

*/

/* Private variables ---------------------------------------------------------*/

void main()
{ 
  InputOutputConfig(GPIOD,PIN12,OUTPUT);
  InputOutputConfig(GPIOD,PIN15,OUTPUT);
  InputOutputConfig(GPIOA,PIN0,INPUT);
  ButtonToggleLed();
 
  while(1)
  {
    
  }
}



/**************************************END OF FILE**************************************/
