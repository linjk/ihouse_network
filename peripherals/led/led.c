/**
* File: led.c
* @Description: LED Driver
* @Author: LinJK
* @Date: 2016/11/20
**/
#include <stm32f4xx.h>
#include "led.h"

void LED_Config(void) 
{
    GPIO_InitTypeDef GPIO_InitStructure;
    
    RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);
    
    GPIO_InitStructure.GPIO_Pin   = LED_BLUE | LED_ORANGE | LED_RED | LED_YELLOW;
    GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_OUT;
    GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
    GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_NOPULL;
    
    GPIO_Init(GPIOD, &GPIO_InitStructure);
}
