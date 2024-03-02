#pragma once
#include <stdint.h>
#include "esp_err.h"

/**
 * @brief Calculate the effect for a bunch of lines.
 *
 * @param dest Destination for the pixels. Assumed to be LINECT * 320 16-bit pixel values.
 * @param line Starting line of the chunk of lines.
 */
void get_lines(uint16_t *dest, int line, int n);

/**
 * @brief Initialize the effect
 *
 * @return ESP_OK on success, an error from the jpeg decoder otherwise.
 */
esp_err_t load_image(void);
