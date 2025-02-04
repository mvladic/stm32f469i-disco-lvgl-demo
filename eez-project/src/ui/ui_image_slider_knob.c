#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif
/* LVGLImage.py --ofmt C --cf ARGB8888 */

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_SLIDER_KNOB
#define LV_ATTRIBUTE_IMG_SLIDER_KNOB
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SLIDER_KNOB
uint8_t img_slider_knob_map[] = {

    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xf7,0xef,0xf7,0x1f,0xfe,0xf6,0xfc,0x81,0xfe,0xf5,0xfd,0xc7,0xfe,0xf6,0xfd,0xef,0xfe,0xf6,0xfd,0xfb,0xfe,0xf6,0xfd,0xef,0xfe,0xf5,0xfd,0xc7,0xfe,0xf6,0xfc,0x81,0xf8,0xf0,0xf8,0x20,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xe3,0xe3,0xe3,0x09,0xfe,0xf5,0xfc,0x90,0xfe,0xf6,0xfd,0xfb,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xfe,0xf6,0xfd,0xfb,0xfe,0xf5,0xfc,0x90,0xe3,0xe3,0xe3,0x09,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xf4,0xf4,0xf4,0x17,0xfe,0xf6,0xfd,0xce,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xfe,0xf6,0xfd,0xce,0xf4,0xf4,0xf4,0x17,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xe3,0xe3,0xe3,0x09,0xfe,0xf6,0xfd,0xce,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xfe,0xf6,0xfd,0xcf,0xe3,0xe3,0xe3,0x09,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xfe,0xf5,0xfc,0x90,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xfe,0xf5,0xfc,0x90,0xff,0xff,0xff,0x00,
    0xf8,0xf0,0xf8,0x20,0xfe,0xf6,0xfd,0xfb,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xfe,0xf6,0xfd,0xfb,0xf8,0xf0,0xf8,0x20,
    0xfe,0xf6,0xfc,0x81,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xfe,0xf6,0xfc,0x81,
    0xfe,0xf5,0xfd,0xc6,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xfe,0xf5,0xfd,0xc6,
    0xfe,0xf6,0xfd,0xee,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xfe,0xf6,0xfd,0xee,
    0xfe,0xf6,0xfd,0xfc,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xfe,0xf6,0xfd,0xfc,
    0xfe,0xf6,0xfd,0xee,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xfe,0xf6,0xfd,0xee,
    0xfe,0xf5,0xfd,0xc6,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xfe,0xf5,0xfd,0xc6,
    0xfe,0xf6,0xfc,0x81,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xfe,0xf6,0xfc,0x81,
    0xf8,0xf0,0xf8,0x20,0xfe,0xf6,0xfd,0xfb,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xfe,0xf6,0xfd,0xfb,0xf8,0xf0,0xf8,0x20,
    0xff,0xff,0xff,0x00,0xfe,0xf5,0xfc,0x90,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xfe,0xf5,0xfc,0x90,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xe3,0xe3,0xe3,0x09,0xfe,0xf6,0xfd,0xce,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xfe,0xf6,0xfd,0xcf,0xe3,0xe3,0xe3,0x09,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xf4,0xf4,0xf4,0x17,0xfe,0xf6,0xfd,0xce,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xfe,0xf6,0xfd,0xce,0xf4,0xf4,0xf4,0x17,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xe3,0xe3,0xe3,0x09,0xfe,0xf5,0xfc,0x90,0xfe,0xf6,0xfd,0xfb,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xff,0xf6,0xfd,0xff,0xfe,0xf6,0xfd,0xfb,0xfe,0xf5,0xfc,0x90,0xe3,0xe3,0xe3,0x09,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xf7,0xef,0xf7,0x1f,0xfe,0xf6,0xfc,0x81,0xfe,0xf5,0xfd,0xc7,0xfe,0xf6,0xfd,0xef,0xfe,0xf6,0xfd,0xfb,0xfe,0xf6,0xfd,0xef,0xfe,0xf5,0xfd,0xc7,0xfe,0xf6,0xfc,0x81,0xf8,0xf0,0xf8,0x20,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,

};

const lv_image_dsc_t img_slider_knob = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_ARGB8888,
  .header.flags = 0,
  .header.w = 19,
  .header.h = 19,
  .header.stride = 76,
  .data_size = sizeof(img_slider_knob_map),
  .data = img_slider_knob_map,
};

