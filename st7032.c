#include "st7032.h"
#include "driver/gpio.h"

int8_t st7032_init(void)
{
    return ST7032_SUCCESS;
}

int8_t st7032_exit(void)
{
    /* Do nothing */
    return ST7032_SUCCESS;
}

int8_t st7032_set_cursor(uint8_t col, uint8_t row)
{
    return ST7032_SUCCESS;
}

int8_t st7032_write_char(int8_t letter)
{
    return ST7032_SUCCESS;
}

int8_t st7032_erase_char()
{
    return ST7032_SUCCESS;
}

int8_t st7032_clear(void)
{
    return ST7032_SUCCESS;
}

