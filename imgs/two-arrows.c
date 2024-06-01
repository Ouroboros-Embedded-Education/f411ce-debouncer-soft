#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_TWO_ARROWS
#define LV_ATTRIBUTE_IMG_TWO_ARROWS
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_TWO_ARROWS uint8_t two_arrows_map[] = {
  0x00, 0x00, 
  0x00, 0x00, 
  0x00, 0x18, 
  0x00, 0x1c, 
  0x3f, 0xfe, 
  0x3f, 0xfe, 
  0x0f, 0xfc, 
  0x00, 0x18, 
  0x18, 0x00, 
  0x38, 0x00, 
  0x7f, 0xfc, 
  0x7f, 0xfc, 
  0x3f, 0xf0, 
  0x18, 0x00, 
  0x00, 0x00, 
  0x00, 0x00, 
};

const lv_img_dsc_t two_arrows = {
  .header.cf = LV_IMG_CF_ALPHA_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 16,
  .header.h = 16,
  .data_size = 32,
  .data = two_arrows_map,
};
