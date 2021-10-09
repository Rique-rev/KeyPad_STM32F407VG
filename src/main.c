#include <stdio.h>
#include <stdint.h>

#include "Driver/HAL_GPIOx.h"
#include "Driver/HAL_KeyPad_4x4.h"
#include "Driver/stm32f407_mmp.h"

/*
    Leitura de teclado membrana 4x4

    GPIOs colunas (Input Mode):
        - PE0
        - PE2
        - PE4
        - PE6
    
    GPIOs linhas (Output Mode):
        - PA7
        - PA5
        - PA3
        - PA1
*/

// ###################### GLOBAL VARIABLES

// RCC
#define RCC_AHB1ENR_ADDR (uint32_t) ((0x40023800) + (0x30))

RCC_AHB1ENR_t *rccAHB1ENR = (RCC_AHB1ENR_t*) RCC_AHB1ENR_ADDR;

char key_matrix[4][4] = {
    {'1','2','3','A'},
    {'4','5','6','B'},
    {'7','8','9','C'},
    {'*','0','#','D'}
};

// ###################### MAIN
int main()
{   
    // Enable GPIOA Clock
    rccAHB1ENR->gpioa_en = ENABLE;

    // Enable GPIOE Clock
    rccAHB1ENR->gpioe_en = ENABLE;

    // Setting Input pins (columns)

    // PE0
    GPIOx_t pe0 = GPIOx_Init(GPIOE, PIN0);
    GPIOx_PinMode(&pe0, GPIOx_INPUT);
    GPIOx_SetPUPDR(&pe0, GPIOx_PULLUP);

    // PE2
    GPIOx_t pe2 = GPIOx_Init(GPIOE, PIN2);
    GPIOx_PinMode(&pe2, GPIOx_INPUT);
    GPIOx_SetPUPDR(&pe2, GPIOx_PULLUP);
    
    // PE4
    GPIOx_t pe4 = GPIOx_Init(GPIOE, PIN4);
    GPIOx_PinMode(&pe4, GPIOx_INPUT);
    GPIOx_SetPUPDR(&pe4, GPIOx_PULLUP);
    
    // PE6
    GPIOx_t pe6 = GPIOx_Init(GPIOE, PIN6);
    GPIOx_PinMode(&pe6, GPIOx_INPUT);
    GPIOx_SetPUPDR(&pe6, GPIOx_PULLUP);


    // Setting Output pins (lines)

    // PA7
    GPIOx_t pa7 = GPIOx_Init(GPIOA, PIN7);
    GPIOx_PinMode(&pa7, GPIOx_OUTPUT);

    // PA5
    GPIOx_t pa5 = GPIOx_Init(GPIOA, PIN5);
    GPIOx_PinMode(&pa5, GPIOx_OUTPUT);
    
    // PA3
    GPIOx_t pa3 = GPIOx_Init(GPIOA, PIN3);
    GPIOx_PinMode(&pa3, GPIOx_OUTPUT);
    
    // PA1
    GPIOx_t pa1 = GPIOx_Init(GPIOA, PIN1);
    GPIOx_PinMode(&pa1, GPIOx_OUTPUT);

    // Creating a Key Pad 4x4
    GPIOx_t pin_lines[4] = {pa1, pa3, pa5, pa7};
    GPIOx_t pin_cols[4] = {pe6, pe4, pe2, pe0};

    KEY_PAD_4x4_t keypad = KEY_PAD_Init(pin_cols, pin_lines, key_matrix);

    char key;

    while (1)
    {
        key = KEY_PAD_GetKey(&keypad);
        
        printf("%c\n", key);
    }

    return 0;
}
