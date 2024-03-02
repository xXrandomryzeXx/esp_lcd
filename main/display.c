#include <math.h>
#include "display.h"
#include "sdkconfig.h"
#include "decode_image.h"

uint16_t *pixels;

//Grab a rgb16 pixel from the esp32_tiles image
static inline uint16_t get_pixel(int x, int y)
{
    //Get color of the pixel on x,y coords
    return (uint16_t) * (pixels + (y * IMAGE_W) + x);
}

void get_lines(uint16_t *dest, int line, int n)
{
    for (int y = line; y < line + n; y++) {
        for (int x = 0; x < 320; x++) {
            *dest++ = get_pixel(x, y);
        }
    }
}

esp_err_t load_image(void)
{
    return decode_image(&pixels);
}
