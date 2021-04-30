#ifndef __ST7032_H__
#define __ST7032_H__

#include <stdint.h>
#include "driver/i2c.h"

enum st7032_status {
    ST7032_ERROR = -1,
    ST7032_SUCCESS,
};

int8_t st7032_init(void);
int8_t st7032_exit(void);
int8_t st7032_set_cursor(uint8_t col, uint8_t row);
int8_t st7032_write_char(int8_t letter);
int8_t st7032_erase_char();
int8_t st7032_clear(void);

#endif /* __ST7032_H__ */
