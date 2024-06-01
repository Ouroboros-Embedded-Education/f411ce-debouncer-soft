/*******************************************************************************
 * Size: 16 px
 * Bpp: 2
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef UBUNTU_16
#define UBUNTU_16 1
#endif

#if UBUNTU_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0xb0, 0xff, 0xe2, 0x61, 0x23, 0x6, 0xf0, 0x80,

    /* U+0022 "\"" */
    0xe3, 0x83, 0x68, 0x76, 0x14, 0x92,

    /* U+0023 "#" */
    0x9, 0xc0, 0xe1, 0xb0, 0xb0, 0xf2, 0x5, 0x3,
    0xca, 0xf0, 0xe5, 0xa, 0x8b, 0x14, 0x28, 0x8,
    0x48, 0x7f, 0x61, 0x61, 0xb4, 0xf2, 0x78, 0xc7,
    0xc3, 0xe0, 0xb0, 0xa0, 0x91, 0x10, 0xc0,

    /* U+0024 "$" */
    0xd, 0x87, 0xff, 0x5, 0xcf, 0x23, 0x34, 0x51,
    0x92, 0xa0, 0xff, 0x67, 0x6, 0x61, 0xe0, 0x9f,
    0x2a, 0xe, 0x84, 0x3c, 0x82, 0x8a, 0x94, 0x6,
    0x8a, 0x8b, 0xc7, 0x7, 0xf0,

    /* U+0025 "%" */
    0x7, 0xa0, 0xda, 0x16, 0xec, 0x8, 0x43, 0x44,
    0x81, 0x83, 0xfd, 0x8, 0x72, 0x48, 0xc1, 0xd4,
    0xca, 0x8, 0x73, 0xf0, 0xc7, 0xa0, 0xf4, 0x3b,
    0xb0, 0x73, 0x2, 0x24, 0x34, 0x21, 0xfe, 0x70,
    0xa2, 0x42, 0x90, 0xb7, 0x60,

    /* U+0026 "&" */
    0xa, 0xf2, 0x1e, 0x99, 0x83, 0xcc, 0xc2, 0x1f,
    0xfc, 0x46, 0x35, 0x7, 0x46, 0xc1, 0xce, 0x88,
    0x14, 0x9, 0xb3, 0x2c, 0x2c, 0x19, 0x90, 0x7d,
    0x7, 0x32, 0x30, 0x10, 0x4d, 0xd3, 0xa0,

    /* U+0027 "'" */
    0xe0, 0x20, 0xe4,

    /* U+0028 "(" */
    0xf, 0x9c, 0x2a, 0x2, 0x10, 0x28, 0x9, 0x3,
    0xf, 0xfe, 0x66, 0x19, 0xf, 0x41, 0x28, 0x28,
    0x82, 0x83, 0x30,

    /* U+0029 ")" */
    0xd, 0x40, 0x6a, 0x15, 0x83, 0x40, 0x88, 0x58,
    0x14, 0x1f, 0xfc, 0x25, 0x5, 0x88, 0x92, 0x24,
    0x68, 0x28, 0x0,

    /* U+002A "*" */
    0xa, 0x43, 0xc8, 0x76, 0xa2, 0xc0, 0xec, 0x40,
    0xb4, 0x90, 0x34, 0x70, 0x98, 0xa0, 0x0,

    /* U+002B "+" */
    0xc, 0x87, 0xe8, 0x3f, 0xf9, 0x7f, 0x1f, 0x2,
    0xa2, 0xa0, 0x2c, 0x2c, 0x1f, 0xfc, 0x70,

    /* U+002C "," */
    0x2c, 0x42, 0x41, 0x10,

    /* U+002D "-" */
    0xe, 0xbe, 0x6b, 0x20,

    /* U+002E "." */
    0xe, 0xf0, 0x70,

    /* U+002F "/" */
    0xf, 0x21, 0xe6, 0xf, 0x61, 0xf2, 0x83, 0x92,
    0xe, 0xc3, 0xe5, 0x7, 0x24, 0x1d, 0x87, 0xca,
    0xe, 0x4c, 0x3b, 0x10, 0xe5, 0x7, 0xd8, 0x74,
    0x21, 0xca, 0xf, 0xb0, 0xe0,

    /* U+0030 "0" */
    0x3, 0xf2, 0x1a, 0x22, 0xa, 0x37, 0x20, 0x28,
    0x25, 0x5, 0x85, 0x87, 0xff, 0x4f, 0xb, 0x9,
    0x41, 0x28, 0x11, 0xb9, 0x5, 0x11, 0x0,

    /* U+0031 "1" */
    0xa, 0xc1, 0x23, 0xa0, 0x6d, 0x2, 0x1f, 0xfd,
    0xa0,

    /* U+0032 "2" */
    0x5, 0xe8, 0x2d, 0xa3, 0x83, 0xca, 0x84, 0x39,
    0xf, 0x91, 0xe, 0x90, 0xec, 0x83, 0x66, 0x1a,
    0x30, 0xca, 0x83, 0xb0, 0x2e, 0x12, 0xb8,

    /* U+0033 "3" */
    0x1b, 0xd0, 0x59, 0x2b, 0x5, 0x1a, 0x7, 0xff,
    0xe, 0xe, 0xf1, 0x86, 0xa1, 0x86, 0x56, 0x41,
    0xf2, 0x1f, 0x25, 0x15, 0x90, 0x1a, 0x38,

    /* U+0034 "4" */
    0xe, 0xf0, 0x7a, 0xf, 0x96, 0xf, 0x53, 0xe,
    0x84, 0x3c, 0xc1, 0xe8, 0x43, 0xcc, 0x1e, 0x4b,
    0xd1, 0xab, 0xf2, 0x48, 0x76, 0x21, 0xfe,

    /* U+0035 "5" */
    0x3f, 0x90, 0x35, 0x20, 0xd6, 0xf, 0xf6, 0x87,
    0x37, 0x3, 0xe5, 0x83, 0x46, 0x1c, 0xa0, 0xe5,
    0x51, 0x59, 0xd, 0x18,

    /* U+0036 "6" */
    0x9, 0xb4, 0x2e, 0x24, 0x19, 0xc8, 0x12, 0xe,
    0xc4, 0x39, 0x3e, 0x83, 0x54, 0xc0, 0x5f, 0x7,
    0xb0, 0x28, 0x2c, 0x11, 0x32, 0x81, 0x33, 0x40,

    /* U+0037 "7" */
    0x3f, 0xe0, 0x57, 0x6, 0x5c, 0xc, 0x3d, 0x21,
    0xe4, 0x83, 0xd2, 0x1f, 0xb0, 0xf2, 0x21, 0xe9,
    0xf, 0xfe, 0x2e, 0x1e, 0x44, 0x30,

    /* U+0038 "8" */
    0x3, 0xf2, 0x13, 0x33, 0x20, 0xc9, 0x88, 0xa,
    0x9, 0x9, 0x60, 0x30, 0x26, 0x9a, 0x82, 0x50,
    0x10, 0xb2, 0x99, 0x85, 0x5, 0x6, 0xc2, 0xc2,
    0x54, 0xca, 0x4, 0xa9, 0x50,

    /* U+0039 "9" */
    0x3, 0xf2, 0x13, 0x31, 0x5, 0x33, 0x90, 0x58,
    0x4a, 0xf, 0xfe, 0x4, 0x87, 0xb2, 0xf2, 0x1b,
    0xf0, 0x87, 0x93, 0xf, 0x42, 0x13, 0x66, 0x15,
    0x1b, 0x8,

    /* U+003A ":" */
    0x3c, 0x1e, 0xf0, 0x7f, 0xf1, 0xbc, 0x1c,

    /* U+003B ";" */
    0x3c, 0x1e, 0xf0, 0x7f, 0xf1, 0xac, 0xa, 0xf,
    0xa0, 0x60,

    /* U+003C "<" */
    0xf, 0xa0, 0xe7, 0xc8, 0x4f, 0x3e, 0x7, 0x3c,
    0x1f, 0xfc, 0x1e, 0x79, 0xc, 0xf1, 0x61, 0xcd,
    0xa0,

    /* U+003D "=" */
    0xf, 0xf7, 0xfc, 0xa, 0xf8, 0xb, 0xf0, 0x7f,
    0xdf, 0xf0, 0x2b, 0xe0,

    /* U+003E ">" */
    0x24, 0x3e, 0x6d, 0xe, 0xf3, 0x68, 0x75, 0xb6,
    0x1f, 0xfc, 0x6, 0xdb, 0x7, 0x16, 0x85, 0x72,
    0x18,

    /* U+003F "?" */
    0x7e, 0x82, 0x68, 0xc3, 0x2e, 0xf, 0xf9, 0x50,
    0x6a, 0x21, 0x6a, 0xe, 0xc3, 0xb4, 0x3f, 0xe7,
    0x83, 0x21, 0xc0,

    /* U+0040 "@" */
    0xd, 0x7d, 0x21, 0xeb, 0x2a, 0x2c, 0x34, 0xd1,
    0x6b, 0x30, 0x99, 0x2f, 0x9c, 0x48, 0x4d, 0xa1,
    0x8c, 0x28, 0x4d, 0x41, 0x61, 0x66, 0x1f, 0x21,
    0xff, 0xc1, 0x42, 0xcc, 0x3e, 0xc0, 0xa1, 0x20,
    0xe5, 0x18, 0x93, 0xe1, 0xc8, 0x48, 0x7f, 0xe0,
    0xb3, 0x83, 0xfe, 0xe7, 0xf2, 0x1f, 0x3f, 0xc8,
    0x60,

    /* U+0041 "A" */
    0xd, 0x61, 0xfc, 0x90, 0x7c, 0x8a, 0xf, 0xa6,
    0x10, 0xfb, 0x4, 0x1d, 0x9, 0x7, 0x94, 0x4,
    0x82, 0x4c, 0x32, 0x16, 0x5f, 0x1, 0x2, 0xab,
    0x8c, 0x4d, 0x78, 0x4c, 0x43, 0xa1,

    /* U+0042 "B" */
    0x7f, 0x48, 0x32, 0xa6, 0x42, 0x5b, 0x20, 0xff,
    0xe1, 0xc4, 0x17, 0xc8, 0x85, 0x52, 0x61, 0x2d,
    0x41, 0xf, 0x21, 0xf9, 0xc, 0xb5, 0x4, 0x15,
    0x36, 0x0,

    /* U+0043 "C" */
    0xd, 0x7d, 0x4, 0xea, 0x94, 0x14, 0xf3, 0x60,
    0x88, 0x3e, 0x43, 0xfc, 0x87, 0xff, 0x1d, 0xf,
    0xc8, 0x7f, 0x64, 0x1f, 0x2d, 0xcd, 0xa0, 0xa0,
    0xcb, 0x0,

    /* U+0044 "D" */
    0xbf, 0x48, 0x75, 0x4d, 0x3, 0x2d, 0xcc, 0x1f,
    0x2c, 0x1f, 0xb1, 0xf, 0x90, 0xff, 0xe3, 0xa1,
    0xfd, 0x88, 0x79, 0x60, 0x96, 0xe6, 0xa, 0xa6,
    0x80,

    /* U+0045 "E" */
    0xbf, 0xc1, 0x57, 0x4, 0xbc, 0x1f, 0xfc, 0x7f,
    0xd0, 0x55, 0xc1, 0x2e, 0xf, 0xfe, 0x42, 0xf0,
    0x55, 0xe0,

    /* U+0046 "F" */
    0xbf, 0xc1, 0x57, 0x4, 0xbc, 0x1f, 0xfc, 0x7f,
    0xc8, 0x55, 0x90, 0x97, 0x7, 0xff, 0x58,

    /* U+0047 "G" */
    0xd, 0x7d, 0x4, 0xea, 0x96, 0x4, 0x73, 0x69,
    0x18, 0x7c, 0x87, 0xf9, 0xf, 0xfe, 0x1f, 0x1,
    0xf, 0xc8, 0x7f, 0x64, 0x1f, 0x2d, 0xcc, 0x1a,
    0x83, 0x26,

    /* U+0048 "H" */
    0xb0, 0xeb, 0xf, 0xfe, 0xd7, 0xf2, 0x15, 0x72,
    0x12, 0xf0, 0x7f, 0xf6, 0x80,

    /* U+0049 "I" */
    0xb0, 0xff, 0xe5, 0x0,

    /* U+004A "J" */
    0xe, 0xe0, 0xff, 0xf9, 0xdb, 0x65, 0x92, 0x60,

    /* U+004B "K" */
    0xb0, 0xd6, 0x1e, 0x98, 0x39, 0x52, 0x19, 0x94,
    0x19, 0x98, 0x3a, 0x20, 0xf2, 0x41, 0xe9, 0x50,
    0x7a, 0x58, 0x3d, 0x32, 0x1e, 0x88, 0x3e, 0xc8,

    /* U+004C "L" */
    0xb0, 0xff, 0xff, 0x87, 0x2f, 0x5, 0x5c, 0x0,

    /* U+004D "M" */
    0x38, 0x3d, 0x62, 0x21, 0xe4, 0x39, 0xd, 0x1,
    0x3, 0x6, 0x50, 0x32, 0x10, 0x24, 0x1c, 0xc0,
    0x90, 0x61, 0x40, 0x48, 0x3f, 0x5a, 0x19, 0x40,
    0x95, 0x87, 0xe4, 0x8, 0x10, 0xf7, 0x83, 0x21,
    0xff, 0xc0,

    /* U+004E "N" */
    0xb0, 0xe7, 0x41, 0x87, 0xfa, 0xf, 0xd2, 0x83,
    0xe5, 0x41, 0xfa, 0x20, 0xfd, 0x28, 0x3e, 0x54,
    0x1f, 0xa2, 0xf, 0xd0, 0x7f, 0x21, 0xfe, 0x80,

    /* U+004F "O" */
    0xd, 0x7c, 0x87, 0x3a, 0xa6, 0xc3, 0x4f, 0x34,
    0x20, 0x44, 0x19, 0x60, 0x21, 0xf6, 0x20, 0x43,
    0xc8, 0x7f, 0xf1, 0x10, 0xf2, 0x12, 0x1f, 0x62,
    0x44, 0x19, 0x60, 0xa7, 0x9a, 0x10, 0x4c, 0xa9,
    0x58, 0x0,

    /* U+0050 "P" */
    0xbf, 0x48, 0x6a, 0x99, 0x9, 0x6c, 0x83, 0xe4,
    0x3f, 0xf8, 0x92, 0x82, 0xf9, 0x50, 0x57, 0xd0,
    0x64, 0x3f, 0xfa, 0xa0,

    /* U+0051 "Q" */
    0xd, 0x7c, 0x87, 0x3a, 0xa6, 0xc3, 0x4f, 0x34,
    0x20, 0x44, 0x19, 0x60, 0x21, 0xf6, 0x20, 0x43,
    0xc8, 0x7f, 0xf1, 0x10, 0xf2, 0x12, 0x1f, 0x62,
    0x44, 0x19, 0x60, 0xa7, 0x55, 0x8, 0x26, 0x28,
    0xac, 0x39, 0xf0, 0xc1, 0xfd, 0x3c, 0x87, 0xce,
    0xa0, 0x0,

    /* U+0052 "R" */
    0xbf, 0x48, 0x6a, 0x99, 0x9, 0x6c, 0x83, 0xe4,
    0x3f, 0xf8, 0x92, 0x82, 0xf9, 0x50, 0x54, 0x48,
    0x32, 0xa3, 0xf, 0xa1, 0xf, 0x2a, 0xf, 0xa2,

    /* U+0053 "S" */
    0x5, 0xf4, 0x14, 0xa9, 0x60, 0x2a, 0x6d, 0xf,
    0xfe, 0x2, 0x83, 0xd9, 0x68, 0x77, 0x16, 0x1c,
    0xf1, 0x7, 0x96, 0xf, 0x90, 0xb9, 0x50, 0x81,
    0x54, 0x68, 0x0,

    /* U+0054 "T" */
    0xff, 0xea, 0x91, 0xa9, 0x6c, 0xd6, 0xf, 0xff,
    0xf8, 0x78,

    /* U+0055 "U" */
    0xb0, 0xee, 0xf, 0xff, 0xe6, 0x21, 0x26, 0x94,
    0x68, 0x26, 0xa9, 0x58,

    /* U+0056 "V" */
    0xb0, 0xf3, 0x98, 0x87, 0x40, 0x4c, 0x3c, 0x81,
    0x41, 0x92, 0x6, 0x21, 0x41, 0x93, 0xd, 0x6,
    0x50, 0x11, 0xd, 0x89, 0x7, 0x93, 0x4, 0x1e,
    0x98, 0x43, 0xc8, 0xa0, 0xfc, 0x90, 0x60,

    /* U+0057 "W" */
    0x70, 0xff, 0x3a, 0x4, 0x34, 0x1e, 0x50, 0x74,
    0xa0, 0xb0, 0xd8, 0x49, 0x4, 0x84, 0xa0, 0xc8,
    0x72, 0x1e, 0x48, 0x42, 0xc1, 0x89, 0x20, 0xc4,
    0x40, 0x86, 0xc9, 0x30, 0xf6, 0x88, 0x8b, 0x6,
    0x54, 0x86, 0x8c, 0x36, 0xc, 0x28, 0x8, 0x64,
    0x8, 0x48, 0x70,

    /* U+0058 "X" */
    0x38, 0x35, 0x81, 0x41, 0x94, 0x8, 0xc1, 0x90,
    0x50, 0xa2, 0xc, 0xaa, 0x28, 0x3a, 0x4, 0x1e,
    0x41, 0x7, 0xa5, 0x83, 0xa2, 0x86, 0x12, 0xa0,
    0x42, 0x8, 0x40, 0xa8, 0x48, 0x34, 0x40,

    /* U+0059 "Y" */
    0xb0, 0xe7, 0x22, 0xd, 0x20, 0x50, 0x49, 0x2,
    0x20, 0x48, 0x65, 0x11, 0x6, 0x8d, 0x41, 0xe8,
    0x10, 0x79, 0x10, 0xff, 0xf0, 0x0,

    /* U+005A "Z" */
    0x3f, 0xe4, 0xae, 0x2, 0x2e, 0x4, 0x1e, 0x94,
    0x1d, 0x10, 0x72, 0xa0, 0xf4, 0xa0, 0xe8, 0x83,
    0xca, 0xf, 0x44, 0x1c, 0xbf, 0x82, 0x6b, 0xc0,

    /* U+005B "[" */
    0xe, 0x7e, 0xb, 0xc1, 0xff, 0xf8, 0xf0,

    /* U+005C "\\" */
    0x20, 0xf9, 0x41, 0xe6, 0xf, 0x61, 0xf2, 0x21,
    0xf4, 0x1e, 0x83, 0xe4, 0x43, 0xec, 0x3d, 0x21,
    0xe4, 0x43, 0xec, 0x3d, 0x21, 0xe4, 0x43, 0xec,
    0x3d, 0x21, 0xe4, 0x40,

    /* U+005D "]" */
    0xd, 0xf5, 0xe4, 0x3f, 0xfd, 0x3e, 0x40,

    /* U+005E "^" */
    0x9, 0xd0, 0xf4, 0x41, 0xc9, 0x90, 0x69, 0x24,
    0x28, 0x84, 0x80, 0xc1, 0x48, 0x34, 0x27, 0x0,

    /* U+005F "_" */
    0xf, 0xf7, 0xfe, 0x2b, 0xec,

    /* U+0060 "`" */
    0xe, 0x90, 0x70, 0x1b, 0x3, 0x80,

    /* U+0061 "a" */
    0x1f, 0xa0, 0x95, 0x2b, 0xa, 0x64, 0x3e, 0xc2,
    0x7e, 0x82, 0x8b, 0x40, 0x92, 0x60, 0x49, 0x58,
    0x51, 0x44, 0x0,

    /* U+0062 "b" */
    0xf, 0xd6, 0x1f, 0xfd, 0x4b, 0xd0, 0x74, 0xa8,
    0x29, 0xa2, 0x1e, 0x44, 0x3e, 0xc3, 0xff, 0x83,
    0x10, 0x15, 0x28, 0xca, 0x34, 0x0,

    /* U+0063 "c" */
    0xb, 0xe8, 0x2c, 0xa6, 0xc, 0xd6, 0x9, 0xf,
    0xb0, 0xff, 0xe1, 0xc1, 0xe8, 0xd5, 0x1, 0x8a,
    0x20,

    /* U+0064 "d" */
    0xf, 0xfe, 0x1b, 0x87, 0xff, 0x49, 0xfc, 0x13,
    0x12, 0x82, 0x8d, 0xa0, 0x68, 0x3f, 0xf8, 0xb8,
    0x7e, 0x43, 0xec, 0xd5, 0x86, 0xda, 0x28,

    /* U+0065 "e" */
    0x3, 0xf2, 0x13, 0x13, 0x20, 0x8d, 0x88, 0x24,
    0x24, 0x33, 0xf2, 0x19, 0xfe, 0x9, 0xf, 0xa3,
    0x54, 0x13, 0x14, 0x50,

    /* U+0066 "f" */
    0x1f, 0x86, 0x68, 0x64, 0xa0, 0xfe, 0xf8, 0x2a,
    0x82, 0x58, 0x3f, 0xfb, 0x20,

    /* U+0067 "g" */
    0xb, 0xf4, 0xc, 0xa0, 0x99, 0xac, 0x12, 0x1f,
    0x61, 0xff, 0xc3, 0x83, 0xd1, 0x32, 0x6, 0x64,
    0x33, 0xf2, 0x5, 0xd3, 0x2, 0xa6, 0x40,

    /* U+0068 "h" */
    0xf, 0xac, 0x3f, 0xfa, 0x1f, 0x41, 0x51, 0x60,
    0x2a, 0x20, 0xe4, 0x3d, 0x87, 0xff, 0x44,

    /* U+0069 "i" */
    0xb4, 0xf0, 0x2c, 0x3f, 0xf8, 0x80,

    /* U+006A "j" */
    0xa, 0xc2, 0x43, 0x78, 0x3f, 0x58, 0x7f, 0xf7,
    0xd4, 0x31, 0x92, 0xc0,

    /* U+006B "k" */
    0xf, 0xd6, 0x1f, 0xfd, 0x67, 0x43, 0xa5, 0x6,
    0xd8, 0x36, 0xc1, 0xff, 0xc1, 0x98, 0x39, 0x94,
    0x1c, 0xa8, 0x3d, 0x18,

    /* U+006C "l" */
    0xa, 0x82, 0x1f, 0xfc, 0xe5, 0x4, 0xc4,

    /* U+006D "m" */
    0x7f, 0x2b, 0xe4, 0xca, 0x14, 0x62, 0x9, 0x58,
    0xce, 0x21, 0xff, 0x61, 0xff, 0xf0,

    /* U+006E "n" */
    0x7f, 0x46, 0x51, 0x60, 0x2a, 0x20, 0xe4, 0x3d,
    0x87, 0xff, 0x44,

    /* U+006F "o" */
    0x3, 0xf4, 0x1a, 0x25, 0x40, 0xcd, 0xa2, 0x12,
    0x12, 0x40, 0xc3, 0xf6, 0x1f, 0x90, 0x92, 0x33,
    0x68, 0x85, 0x12, 0xa0,

    /* U+0070 "p" */
    0x7f, 0x20, 0xca, 0x34, 0x9, 0x52, 0x83, 0xd1,
    0x7, 0xff, 0xf, 0xe, 0x44, 0x13, 0x44, 0x34,
    0xa8, 0x2b, 0xd0, 0x7f, 0xf1, 0x80,

    /* U+0071 "q" */
    0xa, 0xfa, 0x3, 0xaa, 0x50, 0x23, 0x9c, 0x32,
    0x1f, 0xb0, 0xff, 0xe2, 0xc1, 0xf4, 0x6d, 0x2,
    0x62, 0x50, 0x67, 0xf0, 0x7f, 0xf2, 0x0,

    /* U+0072 "r" */
    0x7f, 0x19, 0x50, 0x4b, 0x7, 0xff, 0x64,

    /* U+0073 "s" */
    0x7, 0xe0, 0x65, 0x10, 0xa5, 0x41, 0x48, 0x6d,
    0xb4, 0x2b, 0x60, 0xe8, 0x49, 0x50, 0x4d, 0x19,

    /* U+0074 "t" */
    0x50, 0x6b, 0xf, 0xf9, 0xf8, 0x2a, 0x80, 0xb8,
    0x3f, 0xf8, 0xea, 0xd, 0x93, 0xb, 0x48,

    /* U+0075 "u" */
    0xe0, 0xac, 0x3f, 0xfa, 0xea, 0xe, 0x8d, 0x60,
    0x45, 0x4,

    /* U+0076 "v" */
    0xb0, 0xdd, 0x87, 0xb4, 0x80, 0x88, 0xa0, 0x68,
    0x30, 0x9c, 0x8, 0xa1, 0x9, 0xb4, 0x36, 0x38,
    0x64, 0x8, 0x0,

    /* U+0077 "w" */
    0xb0, 0x9c, 0x2b, 0x30, 0xd8, 0x7c, 0x88, 0x11,
    0x2, 0x82, 0xc2, 0x70, 0xa0, 0x28, 0x56, 0x90,
    0x68, 0x7c, 0x81, 0x41, 0xda, 0x81, 0x18, 0x65,
    0x5, 0x22, 0x1a, 0x10, 0x22, 0x10,

    /* U+0078 "x" */
    0x74, 0xe, 0xb4, 0x9, 0x44, 0x50, 0x82, 0x95,
    0x6, 0x40, 0x86, 0x81, 0x84, 0xaf, 0x8, 0x24,
    0xc, 0x24, 0x8, 0x80,

    /* U+0079 "y" */
    0xb0, 0xdd, 0x87, 0xb4, 0x80, 0x88, 0xa0, 0x68,
    0x30, 0x9c, 0x9, 0x22, 0x14, 0xe1, 0xc8, 0xc1,
    0xc8, 0x87, 0x90, 0x95, 0x30, 0x54, 0x70, 0xc0,

    /* U+007A "z" */
    0x3f, 0xc5, 0x48, 0x8b, 0x88, 0x28, 0xc2, 0x54,
    0x1a, 0x50, 0x51, 0x6, 0x5f, 0x86, 0xb0,

    /* U+007B "{" */
    0xf, 0xeb, 0xa, 0x60, 0x96, 0xf, 0xfe, 0x26,
    0x12, 0x19, 0x94, 0x5, 0x83, 0x42, 0x1f, 0xf6,
    0x1f, 0xfc, 0x45, 0x82, 0x98,

    /* U+007C "|" */
    0x15, 0x7, 0xff, 0x48,

    /* U+007D "}" */
    0xe, 0xf2, 0xd, 0x82, 0x83, 0xff, 0x93, 0x5,
    0x30, 0x22, 0xa, 0xc, 0x87, 0xff, 0x16, 0xb,
    0x70, 0x0,

    /* U+007E "~" */
    0xf, 0xf5, 0xe9, 0x30, 0x3e, 0x2d, 0x6, 0xb,
    0xd0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 59, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 71, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 107, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 14, .adv_w = 171, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 144, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 74, .adv_w = 220, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 170, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 62, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 145, .adv_w = 83, .box_w = 5, .box_h = 18, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 164, .adv_w = 83, .box_w = 4, .box_h = 18, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 183, .adv_w = 123, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 198, .adv_w = 144, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 213, .adv_w = 63, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 217, .adv_w = 77, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 221, .adv_w = 63, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 98, .box_w = 8, .box_h = 17, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 253, .adv_w = 144, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 144, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 144, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 144, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 144, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 144, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 144, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 475, .adv_w = 63, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 482, .adv_w = 63, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 492, .adv_w = 144, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 509, .adv_w = 144, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 521, .adv_w = 144, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 538, .adv_w = 103, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 557, .adv_w = 243, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 606, .adv_w = 170, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 636, .adv_w = 165, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 662, .adv_w = 159, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 688, .adv_w = 183, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 713, .adv_w = 146, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 731, .adv_w = 137, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 746, .adv_w = 172, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 772, .adv_w = 180, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 785, .adv_w = 69, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 789, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 797, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 821, .adv_w = 133, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 829, .adv_w = 223, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 863, .adv_w = 186, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 887, .adv_w = 199, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 921, .adv_w = 156, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 941, .adv_w = 199, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 983, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1007, .adv_w = 136, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1034, .adv_w = 145, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1044, .adv_w = 176, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1056, .adv_w = 168, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1087, .adv_w = 238, .box_w = 15, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1130, .adv_w = 162, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1161, .adv_w = 153, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1183, .adv_w = 147, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1207, .adv_w = 84, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1214, .adv_w = 98, .box_w = 8, .box_h = 17, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 1242, .adv_w = 84, .box_w = 4, .box_h = 17, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1249, .adv_w = 144, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1265, .adv_w = 126, .box_w = 9, .box_h = 3, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 1270, .adv_w = 96, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 1276, .adv_w = 134, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1295, .adv_w = 151, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1317, .adv_w = 119, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1334, .adv_w = 151, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1357, .adv_w = 143, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1377, .adv_w = 99, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1390, .adv_w = 148, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1413, .adv_w = 146, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1428, .adv_w = 65, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1434, .adv_w = 65, .box_w = 5, .box_h = 16, .ofs_x = -2, .ofs_y = -3},
    {.bitmap_index = 1446, .adv_w = 134, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1466, .adv_w = 70, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1473, .adv_w = 220, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1487, .adv_w = 147, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1498, .adv_w = 151, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1518, .adv_w = 151, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1540, .adv_w = 151, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1563, .adv_w = 99, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1570, .adv_w = 114, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1586, .adv_w = 103, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1601, .adv_w = 147, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1611, .adv_w = 129, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1630, .adv_w = 199, .box_w = 13, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1660, .adv_w = 131, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1680, .adv_w = 127, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1704, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1719, .adv_w = 85, .box_w = 6, .box_h = 17, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1740, .adv_w = 71, .box_w = 2, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1744, .adv_w = 85, .box_w = 5, .box_h = 17, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1762, .adv_w = 144, .box_w = 9, .box_h = 4, .ofs_x = 0, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 0,
    1, 2, 3, 4, 0, 5, 6, 5,
    7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 8, 0, 0, 0,
    0, 9, 10, 11, 12, 13, 14, 15,
    16, 0, 0, 17, 18, 19, 20, 0,
    21, 22, 23, 24, 0, 25, 26, 27,
    28, 29, 30, 31, 32, 0, 33, 0,
    0, 0, 34, 35, 36, 0, 0, 37,
    0, 38, 0, 39, 40, 0, 41, 41,
    42, 43, 44, 45, 0, 46, 0, 47,
    48, 49, 0, 50, 51, 0, 52, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 0, 0, 0, 0,
    2, 3, 4, 5, 0, 6, 7, 6,
    8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 9, 9, 0, 0, 0,
    10, 11, 12, 0, 13, 0, 0, 0,
    14, 0, 0, 15, 0, 0, 16, 0,
    17, 0, 17, 0, 18, 19, 20, 21,
    22, 23, 24, 25, 26, 0, 27, 0,
    0, 0, 28, 0, 29, 30, 31, 32,
    33, 0, 0, 34, 0, 0, 35, 35,
    36, 35, 37, 35, 38, 39, 40, 41,
    42, 43, 44, 45, 46, 0, 47, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -20, -6, -6, -31, 0,
    -6, 0, 0, 0, 3, 3, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 20, 0, 0, 0, 0, 0,
    0, 0, 0, -8, -8, 0, 0, -8,
    -5, 3, -3, 4, 0, 0, 4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, -3, -3, -3, 0, -3, -3,
    -7, 0, -9, -5, -7, -11, -6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -16, -3, -3, -31, 0, 0, 0, 0,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 6,
    -7, -7, 7, 0, -8, 4, -18, -6,
    -20, -10, 3, -20, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, 0, 0, -13, 0, -3,
    0, -8, -13, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -13, -7, -7,
    -18, 0, -7, 0, 7, 0, 8, 6,
    5, 9, 2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, -3, 0,
    0, -3, 0, -22, -3, -5, -3, 0,
    -10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, -3, -3, -7, 0,
    -3, -5, -11, -3, -9, -6, -10, -14,
    -9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -20, -5, 0, -16, 7, 0, 4, 0,
    0, -4, 8, -5, -5, 7, 0, -5,
    4, -16, -3, -16, -5, 6, -20, 5,
    0, -7, 0, -3, -3, -3, 0, -4,
    0, 0, -3, -3, 3, 0, -4, -5,
    -5, 7, -4, 4, -5, -3, 0, -3,
    -3, -6, -3, -3, 0, -5, -3, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -5, -3, -5, -6, 0, 0,
    -9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, -6, 0, 0, -6,
    0, 0, 6, -8, 0, 0, 4, -4,
    6, -5, -5, 6, 0, -5, 3, 4,
    0, 4, 0, 3, 4, 3, -3, 0,
    0, -4, -4, -4, 0, -4, 0, 0,
    -4, -4, 0, 0, -5, -4, -4, 4,
    -4, 0, -7, 0, -4, -7, -3, -8,
    0, -8, 0, -11, 0, -10, -3, -5,
    0, 0, -6, 0, 0, -3, -7, 0,
    -4, -4, -6, -10, -4, -3, -11, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, 0, -4, -5, 0, -3,
    3, 0, 0, 0, 0, -4, 4, -7,
    -7, 4, 0, -7, 0, 0, -6, 0,
    0, 0, 0, 0, -4, -11, 0, -4,
    -4, -4, 0, -6, 0, 0, -4, -4,
    0, -4, -5, -6, -6, 2, -6, 0,
    -5, -6, -3, 0, -6, 0, 0, -17,
    0, -15, -5, 3, -5, -12, -3, -3,
    -20, 0, -3, 0, 4, 0, 5, 0,
    0, 5, 0, -4, -10, -13, -4, -4,
    -4, 0, -4, 0, -7, -4, -4, 0,
    0, -6, 0, 0, -9, 0, -7, 0,
    0, 0, 0, 0, -3, -6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, -5, 0, 0, -3,
    0, 0, 0, -3, 0, -3, 0, -9,
    0, 0, 0, -3, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, -9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, 0, -5, 0,
    0, -5, 0, -8, 4, -12, 5, 0,
    3, -5, 9, -9, -9, 7, 0, -9,
    0, 4, 0, 5, 3, 7, 6, 5,
    0, -7, 0, -5, -5, -5, 0, -5,
    0, 0, -5, -5, 4, 0, -3, -4,
    -12, 7, -3, 4, -5, 0, 0, -32,
    -3, 0, -36, 6, -18, 3, 0, 0,
    0, 7, -12, -12, 7, 0, -12, 4,
    -29, -5, -26, -12, 5, -29, 4, 0,
    -8, 0, -3, -3, -3, 0, -3, 0,
    0, -3, -3, 0, 0, 0, -10, -9,
    5, -5, 3, -6, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, -6, -3, -7,
    0, -8, 0, -11, 0, -9, -3, -5,
    0, 0, -6, 0, 0, -3, -7, 0,
    -4, -4, -6, -10, -4, -3, -11, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, -3, 0, -3, -6, 0,
    -23, 0, -16, 0, 0, 0, -13, 0,
    0, -24, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, -4, -10, -5, -5,
    -5, -8, 0, -5, 0, 0, -5, -3,
    0, 0, 0, 3, 2, 0, 3, 0,
    0, -6, -4, -6, -3, 0, 0, -8,
    0, 0, 0, -9, -3, -5, 0, 0,
    -6, 0, 0, -3, -7, 0, -4, -4,
    -6, -10, -4, -3, 0, -4, 0, 0,
    0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 4, 0,
    3, 0, -3, -4, 7, -3, -3, 6,
    0, -3, 0, 0, 0, -3, 0, 5,
    -5, 4, 0, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 0, 2, -4, -4,
    0, 0, -7, 3, 0, -19, -13, -22,
    -22, 6, -13, -16, -7, -7, -23, 0,
    -7, 0, 6, 0, 7, 4, 4, 7,
    0, 0, -8, -12, -14, -14, -14, 0,
    -14, 0, -10, -14, -14, -12, 0, -9,
    -6, -21, -5, -6, -8, -6, 0, 0,
    0, -3, 0, 0, -3, 0, -10, -3,
    0, 0, -3, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, -9, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, -3, -6, 0, 0,
    0, 0, 0, -19, 0, 0, 0, 0,
    0, -16, -4, -4, -24, -2, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, -12, -12, -12, 0, -12, 0,
    -8, -12, -12, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 3, -4,
    0, 0, -9, 0, -12, -3, 4, -5,
    -5, -4, -4, -15, 0, -4, 0, 5,
    0, 6, 3, 3, 6, 0, 0, -9,
    -7, -6, -6, -6, 0, -7, 0, -5,
    -6, -6, -4, 0, -5, 0, 0, 0,
    0, 0, -4, 0, 0, 0, -6, 0,
    -7, 3, -7, 3, 0, 0, -7, 7,
    -6, -6, 5, 0, -6, 0, 3, 0,
    4, 0, 5, 5, 3, 0, -9, 0,
    -5, -5, -5, 0, -5, 0, 0, -5,
    -5, 0, 0, -3, -3, -9, 5, -2,
    0, -7, 0, 0, 0, -11, 5, 0,
    -17, -13, -21, -10, 6, -15, -20, -10,
    -10, -29, -2, -10, 0, 8, 0, 8,
    6, 5, 9, 3, 0, -7, -10, -13,
    -13, -13, 0, -13, 0, -10, -13, -13,
    -5, 0, -9, 0, 0, -4, 0, -7,
    -6, 0, 0, 0, -5, 0, 0, 3,
    -15, 0, 0, 0, -4, 4, -9, -9,
    4, 0, -9, 0, 0, -4, 3, 0,
    0, 3, 0, -4, -11, 0, -4, -4,
    -4, 0, -6, 0, 0, -4, -4, 0,
    -3, -5, -6, -6, 2, -6, 0, -9,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -7, -11, -11, -7,
    0, -11, -7, -8, -10, -7, -9, -9,
    -7, -10, 0, 20, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, -3, 0, 0,
    -3, 0, 0, 0, 0, -3, -3, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, -6, -5, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    -3, 0, -4, 0, 0, -5, 0, -9,
    0, -7, 0, 0, 0, -6, 0, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, -3,
    -4, -3, -5, 0, -5, 0, 0, 0,
    0, 0, 3, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, 0, -3, 0, 0, -4, 0, 0,
    -3, 0, 0, 0, 0, 3, 3, 4,
    3, 0, -5, 0, 0, 0, 0, 10,
    3, -13, -9, -11, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 5, 4, 5,
    0, 0, 10, 0, -9, 0, -6, -5,
    0, 0, 0, 0, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, -3, 0, -4, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    3, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, -7, -7, -7,
    0, -7, 0, 0, -7, -7, 0, 0,
    0, 0, 0, 5, 0, 0, -5, 0,
    0, -8, 0, -6, -6, 0, 0, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, -4, 0, -5, 0, 0, -5, 0,
    -8, 0, -7, -5, 0, 0, -6, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    -3, -4, -4, -5, 0, -5, 0, -8,
    0, -7, -5, 0, 0, -6, 0, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, -3,
    -4, -4, -5, 0, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    3, -14, -8, -12, 0, -11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 5, 5, 4, 5,
    0, 0, 0, 0, 0, 0, 0, 0,
    3, -10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -7, 0, -3,
    -4, -3, 0, -3, 0, 0, -4, -3,
    0, 0, 0, 0, 0, 4, 0, 0,
    -5, 0, 0, 0, 0, 0, 2, -9,
    0, -8, 0, -10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -7, 0, -4, -4,
    -4, 0, -3, 0, 0, -4, -4, 0,
    0, 0, 5, 4, 4, 5, 0, 0,
    0, 0, 0, 0, 0, 2, -8, 0,
    -7, 0, -9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, -3, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 5, 4, 4, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, 0, -5, -5, -5, 0,
    -5, 0, 0, -5, -5, 0, 0, 0,
    0, 0, 4, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -9, 0, -5, -5, -5, -3, -6,
    0, 0, -5, -5, 0, -3, -3, 0,
    0, 0, 0, 0, -7, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, -7, -8, -3, 0, -8, -5,
    0, -6, 0, 0, 0, 0, -5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, -5, 0, 0, -5, -6,
    -3, -6, -5, -7, -6, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 52,
    .right_class_cnt     = 47,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR >= 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 1,
    .bitmap_format = 1,
#if LVGL_VERSION_MAJOR >= 8
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ubuntu_16 = {
#else
lv_font_t ubuntu_16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
    .fallback = NULL,
    .user_data = NULL
};



#endif /*#if UBUNTU_16*/

