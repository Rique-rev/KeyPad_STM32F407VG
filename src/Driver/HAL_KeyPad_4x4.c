#ifndef HAL_GPIOX

#include "HAL_GPIOx.h"

#endif

#include <stdint.h>
#include "HAL_KeyPad_4x4.h"

KEY_PAD_4x4_t KEY_PAD_Init(GPIOx_t pin_cols[4], GPIOx_t pin_lines[4], char key_matrix[4][4])
{
    KEY_PAD_4x4_t keypad;

    for(uint8_t i = 0; i < 4; i++)
    {
        keypad.pin_cols[i] = pin_cols[i];
        keypad.pin_lines[i] = pin_lines[i];
    }

    for(uint8_t matrix_line = 0; matrix_line < 4; matrix_line++)
    {
        for(uint8_t matrix_column = 0; matrix_column < 4; matrix_column++)
        {
            keypad.key_matrix[matrix_line][matrix_column] = key_matrix[matrix_line][matrix_column];
        }
    }
    
    // Putting all pin_lines in HIGH state
    GPIOx_t gpio_line;
    for(int line_idx = 0; line_idx < 4; line_idx++)
    {
        gpio_line = keypad.pin_lines[line_idx];
        GPIOx_DigitalWrite(&gpio_line, HIGH);
    }

    return keypad;
}

char KEY_PAD_GetKey(KEY_PAD_4x4_t *keypad)
{
    char key_pressed = 0;
    GPIOx_t gpio_line;
    GPIOx_t gpio_column;

    for(int line_idx = 0; line_idx < 4; line_idx++)
    {
        
        gpio_line = keypad->pin_lines[line_idx];
        GPIOx_DigitalWrite(&gpio_line, LOW);

        for(int column_idx = 0; column_idx < 4; column_idx++)
        {
            gpio_column = (GPIOx_t) keypad->pin_cols[column_idx];

            // key pressed
            if(!GPIOx_DigitalRead(&gpio_column))
            {
                while(!GPIOx_DigitalRead(&gpio_column)); // Wait user release key

                key_pressed = keypad->key_matrix[line_idx][column_idx];
                return key_pressed;
            }
        }

        GPIOx_DigitalWrite(&gpio_line, HIGH);
    }

    return key_pressed;
}