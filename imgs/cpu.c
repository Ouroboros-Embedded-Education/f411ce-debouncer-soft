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

#ifndef LV_ATTRIBUTE_IMG_CPU
#define LV_ATTRIBUTE_IMG_CPU
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_CPU uint8_t cpu_map[] = {
  0x09, 0x90, 
  0x0d, 0xb0, 
  0x3f, 0xfc, 
  0x20, 0x04, 
  0xe0, 0x07, 
  0x67, 0xe6, 
  0x27, 0xe4, 
  0xe7, 0xe7, 
  0xe7, 0xe7, 
  0x27, 0xe4, 
  0x67, 0xe6, 
  0xe0, 0x07, 
  0x20, 0x04, 
  0x3f, 0xfc, 
  0x0d, 0xb0, 
  0x09, 0x90, 
};

const lv_img_dsc_t cpu = {
  .header.cf = LV_IMG_CF_ALPHA_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 16,
  .header.h = 16,
  .data_size = 32,
  .data = cpu_map,
};
