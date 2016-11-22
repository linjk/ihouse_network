#include "includes.h"

void main() {   
    //hardware init
    bsp_init();
    
    while (1) {
        GPIO_SetBits(GPIOD, LED_RED);
     }
}
