#include <stdint.h>
#include <stddef.h>
#include "HAL_GPIOx.h"

GPIOx_t GPIOx_Init(uint16_t port, uint16_t pin)
{
    GPIOx_t gpio;
    
    gpio.pin = pin;
    gpio.port = port;
    
    switch (port)
    {
    case GPIOA:
        gpio._moder_addr = (GPIOx_MODER_t *)(GPIOA_BASE_ADDR + GPIOx_MODER_OFFSET); 
        gpio._pupdr_addr = (GPIOx_PUPDR_t *)(GPIOA_BASE_ADDR + GPIOx_PUPDR_OFFSET);  
        gpio._idr_addr   = (GPIOx_IDR_t *)(GPIOA_BASE_ADDR + GPIOx_IDR_OFFSET);    
        gpio._odr_addr   = (GPIOx_ODR_t *)(GPIOA_BASE_ADDR + GPIOx_ODR_OFFSET);    
        
        break;

    case GPIOB:
        gpio._moder_addr = (GPIOx_MODER_t *)(GPIOB_BASE_ADDR + GPIOx_MODER_OFFSET); 
        gpio._pupdr_addr = (GPIOx_PUPDR_t *)(GPIOB_BASE_ADDR + GPIOx_PUPDR_OFFSET);  
        gpio._idr_addr   = (GPIOx_IDR_t *)(GPIOB_BASE_ADDR + GPIOx_IDR_OFFSET);    
        gpio._odr_addr   = (GPIOx_ODR_t *)(GPIOB_BASE_ADDR + GPIOx_ODR_OFFSET);    

        break;

    case GPIOC:
        gpio._moder_addr = (GPIOx_MODER_t *)(GPIOC_BASE_ADDR + GPIOx_MODER_OFFSET); 
        gpio._pupdr_addr = (GPIOx_PUPDR_t *)(GPIOC_BASE_ADDR + GPIOx_PUPDR_OFFSET);  
        gpio._idr_addr   = (GPIOx_IDR_t *)(GPIOC_BASE_ADDR + GPIOx_IDR_OFFSET);    
        gpio._odr_addr   = (GPIOx_ODR_t *)(GPIOC_BASE_ADDR + GPIOx_ODR_OFFSET); 

        break;

    case GPIOD:
        gpio._moder_addr = (GPIOx_MODER_t *)(GPIOD_BASE_ADDR + GPIOx_MODER_OFFSET); 
        gpio._pupdr_addr = (GPIOx_PUPDR_t *)(GPIOD_BASE_ADDR + GPIOx_PUPDR_OFFSET);  
        gpio._idr_addr   = (GPIOx_IDR_t *)(GPIOD_BASE_ADDR + GPIOx_IDR_OFFSET);    
        gpio._odr_addr   = (GPIOx_ODR_t *)(GPIOD_BASE_ADDR + GPIOx_ODR_OFFSET); 

        break;

    case GPIOE:
        gpio._moder_addr = (GPIOx_MODER_t *)(GPIOE_BASE_ADDR + GPIOx_MODER_OFFSET); 
        gpio._pupdr_addr = (GPIOx_PUPDR_t *)(GPIOE_BASE_ADDR + GPIOx_PUPDR_OFFSET);  
        gpio._idr_addr   = (GPIOx_IDR_t *)(GPIOE_BASE_ADDR + GPIOx_IDR_OFFSET);    
        gpio._odr_addr   = (GPIOx_ODR_t *)(GPIOE_BASE_ADDR + GPIOx_ODR_OFFSET);

        break;

    case GPIOF:
        gpio._moder_addr = (GPIOx_MODER_t *)(GPIOF_BASE_ADDR + GPIOx_MODER_OFFSET); 
        gpio._pupdr_addr = (GPIOx_PUPDR_t *)(GPIOF_BASE_ADDR + GPIOx_PUPDR_OFFSET);  
        gpio._idr_addr   = (GPIOx_IDR_t *)(GPIOF_BASE_ADDR + GPIOx_IDR_OFFSET);    
        gpio._odr_addr   = (GPIOx_ODR_t *)(GPIOF_BASE_ADDR + GPIOx_ODR_OFFSET);

        break;

    case GPIOG:
        gpio._moder_addr = (GPIOx_MODER_t *)(GPIOG_BASE_ADDR + GPIOx_MODER_OFFSET); 
        gpio._pupdr_addr = (GPIOx_PUPDR_t *)(GPIOG_BASE_ADDR + GPIOx_PUPDR_OFFSET);  
        gpio._idr_addr   = (GPIOx_IDR_t *)(GPIOG_BASE_ADDR + GPIOx_IDR_OFFSET);    
        gpio._odr_addr   = (GPIOx_ODR_t *)(GPIOG_BASE_ADDR + GPIOx_ODR_OFFSET);

        break;

    case GPIOH:
        gpio._moder_addr = (GPIOx_MODER_t *)(GPIOH_BASE_ADDR + GPIOx_MODER_OFFSET); 
        gpio._pupdr_addr = (GPIOx_PUPDR_t *)(GPIOH_BASE_ADDR + GPIOx_PUPDR_OFFSET);  
        gpio._idr_addr   = (GPIOx_IDR_t *)(GPIOH_BASE_ADDR + GPIOx_IDR_OFFSET);    
        gpio._odr_addr   = (GPIOx_ODR_t *)(GPIOH_BASE_ADDR + GPIOx_ODR_OFFSET);

        break;

    case GPIOI:
        gpio._moder_addr = (GPIOx_MODER_t *)(GPIOI_BASE_ADDR + GPIOx_MODER_OFFSET); 
        gpio._pupdr_addr = (GPIOx_PUPDR_t *)(GPIOI_BASE_ADDR + GPIOx_PUPDR_OFFSET);  
        gpio._idr_addr   = (GPIOx_IDR_t *)(GPIOI_BASE_ADDR + GPIOx_IDR_OFFSET);    
        gpio._odr_addr   = (GPIOx_ODR_t *)(GPIOI_BASE_ADDR + GPIOx_ODR_OFFSET);

        break;

    case GPIOJ:
        gpio._moder_addr = (GPIOx_MODER_t *)(GPIOJ_BASE_ADDR + GPIOx_MODER_OFFSET); 
        gpio._pupdr_addr = (GPIOx_PUPDR_t *)(GPIOJ_BASE_ADDR + GPIOx_PUPDR_OFFSET);  
        gpio._idr_addr   = (GPIOx_IDR_t *)(GPIOJ_BASE_ADDR + GPIOx_IDR_OFFSET);    
        gpio._odr_addr   = (GPIOx_ODR_t *)(GPIOJ_BASE_ADDR + GPIOx_ODR_OFFSET);

        break;

    case GPIOK:
       
        gpio._moder_addr = (GPIOx_MODER_t *)(GPIOK_BASE_ADDR + GPIOx_MODER_OFFSET); 
        gpio._pupdr_addr = (GPIOx_PUPDR_t *)(GPIOK_BASE_ADDR + GPIOx_PUPDR_OFFSET);  
        gpio._idr_addr   = (GPIOx_IDR_t *)(GPIOK_BASE_ADDR + GPIOx_IDR_OFFSET);    
        gpio._odr_addr   = (GPIOx_ODR_t *)(GPIOK_BASE_ADDR + GPIOx_ODR_OFFSET);

        break;

    }

    return gpio;
}

void GPIOx_PinMode(GPIOx_t *gpio, uint8_t pin_mode)
{
    // TODO Validar : O pin_mode deve ser igual a um dos pin_mode permitidos (GPIOx_INPUT, GPIOx_OUTPUT, GPIOx_ALTERNATE_FUNCTION, GPIOx_ANALOG)
    gpio->pin_mode = pin_mode;

    switch (gpio->pin)
    {
    case PIN0:
        gpio->_moder_addr->pin0 = pin_mode;
        break;

    case PIN1:
        gpio->_moder_addr->pin1 = pin_mode;
        break;

    case PIN2:
        gpio->_moder_addr->pin2 = pin_mode;
        break;

    case PIN3:
        gpio->_moder_addr->pin3 = pin_mode;
        break;

    case PIN4:
        gpio->_moder_addr->pin4 = pin_mode;
        break;

    case PIN5:
        gpio->_moder_addr->pin5 = pin_mode;
        break;

    case PIN6:
        gpio->_moder_addr->pin6 = pin_mode;
        break;
    case PIN7:
        gpio->_moder_addr->pin7 = pin_mode;
        break;

    case PIN8:
        gpio->_moder_addr->pin8 = pin_mode;
        break;
    case PIN9:
        gpio->_moder_addr->pin9 = pin_mode;
        break;

    case PIN10:
        gpio->_moder_addr->pin10 = pin_mode;
        break;
    case PIN11:
        gpio->_moder_addr->pin11 = pin_mode;
        break;

    case PIN12:
        gpio->_moder_addr->pin12 = pin_mode;
        break;

    case PIN13:
        gpio->_moder_addr->pin13 = pin_mode;
        break;

    case PIN14:
        gpio->_moder_addr->pin14 = pin_mode;
        break;

    case PIN15:
        gpio->_moder_addr->pin15 = pin_mode;
        break;

    }
}

void GPIOx_SetPUPDR(GPIOx_t *gpio, uint8_t pupdr_mode)
{

    // TODO Validar : O pupdr_mode deve ser igual a um dos pupdr_mode permitidos 
    // (GPIOx_NO_PULLUP_PULLDOWN, GPIOx_PULLUP, GPIOx_PULLDOWN, GPIOx_RESERVED)
    gpio->pupdr_mode = pupdr_mode;

    switch (gpio->pin)
    {
    case PIN0:
        gpio->_pupdr_addr->pin0 = pupdr_mode;
        break;

    case PIN1:
        gpio->_pupdr_addr->pin1 = pupdr_mode;
        break;

    case PIN2:
        gpio->_pupdr_addr->pin2 = pupdr_mode;
        break;

    case PIN3:
        gpio->_pupdr_addr->pin3 = pupdr_mode;
        break;

    case PIN4:
        gpio->_pupdr_addr->pin4 = pupdr_mode;
        break;

    case PIN5:
        gpio->_pupdr_addr->pin5 = pupdr_mode;
        break;

    case PIN6:
        gpio->_pupdr_addr->pin6 = pupdr_mode;
        break;
    case PIN7:
        gpio->_pupdr_addr->pin7 = pupdr_mode;
        break;

    case PIN8:
        gpio->_pupdr_addr->pin8 = pupdr_mode;
        break;
    case PIN9:
        gpio->_pupdr_addr->pin9 = pupdr_mode;
        break;

    case PIN10:
        gpio->_pupdr_addr->pin10 = pupdr_mode;
        break;
    case PIN11:
        gpio->_pupdr_addr->pin11 = pupdr_mode;
        break;

    case PIN12:
        gpio->_pupdr_addr->pin12 = pupdr_mode;
        break;

    case PIN13:
        gpio->_pupdr_addr->pin13 = pupdr_mode;
        break;

    case PIN14:
        gpio->_pupdr_addr->pin14 = pupdr_mode;
        break;

    case PIN15:
        gpio->_pupdr_addr->pin15 = pupdr_mode;
        break;

    }

}

void GPIOx_DigitalWrite(GPIOx_t *gpio, uint8_t pin_state)
{
    // TODO Validar : O pin_state deve ser igual a um dos pin state permitidos 
    // (HIGH, LOW)
    
    switch (gpio->pin)
    {
    case PIN0:
        gpio->_odr_addr->pin0 = pin_state;
        break;

    case PIN1:
        gpio->_odr_addr->pin1 = pin_state;
        break;

    case PIN2:
        gpio->_odr_addr->pin2 = pin_state;
        break;

    case PIN3:
        gpio->_odr_addr->pin3 = pin_state;
        break;

    case PIN4:
        gpio->_odr_addr->pin4 = pin_state;
        break;

    case PIN5:
        gpio->_odr_addr->pin5 = pin_state;
        break;

    case PIN6:
        gpio->_odr_addr->pin6 = pin_state;
        break;
    case PIN7:
        gpio->_odr_addr->pin7 = pin_state;
        break;

    case PIN8:
        gpio->_odr_addr->pin8 = pin_state;
        break;

    case PIN9:
        gpio->_odr_addr->pin9 = pin_state;
        break;

    case PIN10:
        gpio->_odr_addr->pin10 = pin_state;
        break;
        
    case PIN11:
        gpio->_odr_addr->pin11 = pin_state;
        break;

    case PIN12:
        gpio->_odr_addr->pin12 = pin_state;
        break;

    case PIN13:
        gpio->_odr_addr->pin13 = pin_state;
        break;

    case PIN14:
        gpio->_odr_addr->pin14 = pin_state;
        break;

    case PIN15:
        gpio->_odr_addr->pin15 = pin_state;
        break;

    }
}

uint8_t GPIOx_DigitalRead(GPIOx_t *gpio)
{
    uint8_t pin_state;
    
    switch (gpio->pin)
    {
    case PIN0:
        pin_state = gpio->_idr_addr->pin0;
        break;

    case PIN1:
        pin_state = gpio->_idr_addr->pin1;
        break;

    case PIN2:
        pin_state = gpio->_idr_addr->pin2;
        break;

    case PIN3:
        pin_state = gpio->_idr_addr->pin3;
        break;

    case PIN4:
        pin_state = gpio->_idr_addr->pin4;
        break;

    case PIN5:
        pin_state = gpio->_idr_addr->pin5;
        break;

    case PIN6:
        pin_state = gpio->_idr_addr->pin6;
        break;

    case PIN7:
        pin_state = gpio->_idr_addr->pin7;
        break;

    case PIN8:
        pin_state = gpio->_idr_addr->pin8;
        break;

    case PIN9:
        pin_state = gpio->_idr_addr->pin9;
        break;

    case PIN10:
        pin_state = gpio->_idr_addr->pin10;
        break;

    case PIN11:
        pin_state = gpio->_idr_addr->pin11;
        break;

    case PIN12:
        pin_state = gpio->_idr_addr->pin12;
        break;

    case PIN13:
        pin_state = gpio->_idr_addr->pin13;
        break;

    case PIN14:
        pin_state = gpio->_idr_addr->pin14;
        break;

    case PIN15:
        pin_state = gpio->_idr_addr->pin15;
        break;

    }

    return pin_state;
}