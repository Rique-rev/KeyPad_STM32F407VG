#ifndef HAL_KEYPAD_4x4

#include <stdint.h>

typedef struct
{
    GPIOx_t pin_cols[4];    // These pins must be configured as INPUT pins they must have the PULL UP resistor enabled
    GPIOx_t pin_lines[4];   // These pins must be configured as OUTPUT pins

    char key_matrix[4][4];

}KEY_PAD_4x4_t;

KEY_PAD_4x4_t KEY_PAD_Init(GPIOx_t pin_cols[4], GPIOx_t pin_lines[4], char key_matrix[4][4]);

char KEY_PAD_GetKey(KEY_PAD_4x4_t *keypad);

#endif