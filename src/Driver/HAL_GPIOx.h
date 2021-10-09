#ifndef HAL_GPIOX

#include <stdint.h>

/* ---------------------- GPIO PERIPHERAL MEMORY MAP ------------- */

// GPIOx Base Addresses
#define GPIOK_BASE_ADDR     (uint32_t)(0x40022800)
#define GPIOJ_BASE_ADDR     (uint32_t)(0x40022400)
#define GPIOI_BASE_ADDR     (uint32_t)(0x40022000)
#define GPIOH_BASE_ADDR     (uint32_t)(0x40021C00)
#define GPIOG_BASE_ADDR     (uint32_t)(0x40021800)
#define GPIOF_BASE_ADDR     (uint32_t)(0x40021400)
#define GPIOE_BASE_ADDR     (uint32_t)(0x40021000)
#define GPIOD_BASE_ADDR     (uint32_t)(0x40020C00)
#define GPIOC_BASE_ADDR     (uint32_t)(0x40020800)
#define GPIOB_BASE_ADDR     (uint32_t)(0x40020400)
#define GPIOA_BASE_ADDR     (uint32_t)(0x40020000)

// GPIOx Registers Offset
#define GPIOx_MODER_OFFSET      (uint32_t)(0x00)
#define GPIOx_OTYPER_OFFSET     (uint32_t)(0x04)
#define GPIOx_OSPEEDR_OFFSET    (uint32_t)(0x08)
#define GPIOx_PUPDR_OFFSET      (uint32_t)(0x0C)
#define GPIOx_IDR_OFFSET        (uint32_t)(0x10)
#define GPIOx_ODR_OFFSET        (uint32_t)(0x14)
#define GPIOx_BSRR_OFFSET       (uint32_t)(0x18)
#define GPIOx_LCKR_OFFSET       (uint32_t)(0x1C)
#define GPIOx_AFRL_OFFSET       (uint32_t)(0x20)
#define GPIOx_AFRH_OFFSET       (uint32_t)(0x24)


// GPIOx Registers
typedef struct
{
    uint32_t pin0   : 2;
    uint32_t pin1   : 2;
    uint32_t pin2   : 2;
    uint32_t pin3   : 2;
    uint32_t pin4   : 2;
    uint32_t pin5   : 2;
    uint32_t pin6   : 2;
    uint32_t pin7   : 2;
    uint32_t pin8   : 2;
    uint32_t pin9   : 2;
    uint32_t pin10  : 2;
    uint32_t pin11  : 2;
    uint32_t pin12  : 2;
    uint32_t pin13  : 2;
    uint32_t pin14  : 2;
    uint32_t pin15  : 2;

} GPIOx_MODER_t;

typedef struct
{
    uint32_t pin0   : 2;
    uint32_t pin1   : 2;
    uint32_t pin2   : 2;
    uint32_t pin3   : 2;
    uint32_t pin4   : 2;
    uint32_t pin5   : 2;
    uint32_t pin6   : 2;
    uint32_t pin7   : 2;
    uint32_t pin8   : 2;
    uint32_t pin9   : 2;
    uint32_t pin10  : 2;
    uint32_t pin11  : 2;
    uint32_t pin12  : 2;
    uint32_t pin13  : 2;
    uint32_t pin14  : 2;
    uint32_t pin15  : 2;

} GPIOx_PUPDR_t;

typedef struct
{
    uint32_t pin0       : 1;
    uint32_t pin1       : 1;
    uint32_t pin2       : 1;
    uint32_t pin3       : 1;
    uint32_t pin4       : 1;
    uint32_t pin5       : 1;
    uint32_t pin6       : 1;
    uint32_t pin7       : 1;
    uint32_t pin8       : 1;
    uint32_t pin9       : 1;
    uint32_t pin10      : 1;
    uint32_t pin11      : 1;
    uint32_t pin12      : 1;
    uint32_t pin13      : 1;
    uint32_t pin14      : 1;
    uint32_t pin15      : 1;
    uint32_t reserved   : 16;

} GPIOx_IDR_t;

typedef struct
{
    uint32_t pin0       : 1;
    uint32_t pin1       : 1;
    uint32_t pin2       : 1;
    uint32_t pin3       : 1;
    uint32_t pin4       : 1;
    uint32_t pin5       : 1;
    uint32_t pin6       : 1;
    uint32_t pin7       : 1;
    uint32_t pin8       : 1;
    uint32_t pin9       : 1;
    uint32_t pin10      : 1;
    uint32_t pin11      : 1;
    uint32_t pin12      : 1;
    uint32_t pin13      : 1;
    uint32_t pin14      : 1;
    uint32_t pin15      : 1;
    uint32_t reserved   : 16;

} GPIOx_ODR_t;


/* ---------------------- GPIO CONFIGURATION ------------------ */

// MODER
#define GPIOx_INPUT              (uint8_t)(0x0)
#define GPIOx_OUTPUT             (uint8_t)(0x1)
#define GPIOx_ALTERNATE_FUNCTION (uint8_t)(0x2)
#define GPIOx_ANALOG             (uint8_t)(0x3)

// PUPDR
#define GPIOx_NO_PULLUP_PULLDOWN (uint8_t)(0x0)
#define GPIOx_PULLUP             (uint8_t)(0x1)
#define GPIOx_PULLDOWN           (uint8_t)(0x2)
#define GPIOx_RESERVED           (uint8_t)(0x3)


/* ---------------------- PIN DEFINITIONS ----------------------- */

#define PIN0    0
#define PIN1    1
#define PIN2    2
#define PIN3    3
#define PIN4    4
#define PIN5    5
#define PIN6    6
#define PIN7    7
#define PIN8    8
#define PIN9    9
#define PIN10   10
#define PIN11   11
#define PIN12   12
#define PIN13   13
#define PIN14   14
#define PIN15   15

/* ---------------------- PIN STATES --------------------------- */

#define HIGH    1
#define LOW     0

/* ---------------------- PORT DEFINITIONS --------------------- */

#define GPIOA 0
#define GPIOB 2
#define GPIOC 3
#define GPIOD 4
#define GPIOE 5
#define GPIOF 6
#define GPIOG 7
#define GPIOH 8
#define GPIOI 9
#define GPIOJ 10
#define GPIOK 11

/* ---------------------- USER FUNCTIONS ----------------------- */

// GPIOx Class
typedef struct
{
    uint8_t port;
    uint8_t pin;
    uint8_t pin_mode;
    uint8_t pupdr_mode;

    GPIOx_MODER_t volatile *_moder_addr;    // private
    GPIOx_PUPDR_t volatile *_pupdr_addr;    // private
    GPIOx_IDR_t   volatile *_idr_addr;      // private
    GPIOx_ODR_t   volatile *_odr_addr;      // private


}GPIOx_t;

// Constructor
GPIOx_t GPIOx_Init(uint16_t port, uint16_t pin);

// Methods
void GPIOx_PinMode(GPIOx_t *gpio, uint8_t pin_mode);
void GPIOx_SetPUPDR(GPIOx_t *gpio, uint8_t pupdr_mode);
void GPIOx_DigitalWrite(GPIOx_t *gpio, uint8_t pin_state);
uint8_t GPIOx_DigitalRead(GPIOx_t *gpio);

#endif