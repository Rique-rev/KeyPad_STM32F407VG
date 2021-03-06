#ifndef STM32F407_MMP

#include <stdint.h>

#define ENABLE 0x1
#define DISABLE 0x0

typedef struct
{

    uint32_t gpioa_en : 1;
    uint32_t gpiob_en : 1;
    uint32_t gpioc_en : 1;
    uint32_t gpiod_en : 1;
    uint32_t gpioe_en : 1;
    uint32_t gpiof_en : 1;
    uint32_t gpiog_en : 1;
    uint32_t gpioh_en : 1;
    uint32_t gpioi_en : 1;
    uint32_t reserved1 : 3;
    uint32_t crc_en : 1;
    uint32_t reserved2 : 5;
    uint32_t bkprsam_en : 1;
    uint32_t reserved4 : 1;
    uint32_t ccmdataram_en : 1;
    uint32_t dma1_en : 1;
    uint32_t dma2_en : 1;
    uint32_t reserved5 : 2;
    uint32_t ethmac_en : 1;
    uint32_t ethmactx_en : 1;
    uint32_t ethmacrx_en : 1;
    uint32_t ethmacptp_en : 1;
    uint32_t otghs_en : 1;
    uint32_t otghsulpie_en : 1;
    uint32_t reserved6 : 1;

} RCC_AHB1ENR_t;

#endif