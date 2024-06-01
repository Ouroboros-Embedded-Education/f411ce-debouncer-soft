/*******************************************************************************
 * Size: 4 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef UBUNTU_4PX
#define UBUNTU_4PX 1
#endif

#if UBUNTU_4PX

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xc0,

    /* U+0022 "\"" */
    0x80,

    /* U+0023 "#" */
    0x3c,

    /* U+0024 "$" */
    0x64,

    /* U+0025 "%" */
    0x95, 0x80,

    /* U+0026 "&" */
    0x53, 0x0,

    /* U+0027 "'" */
    0x80,

    /* U+0028 "(" */
    0x60,

    /* U+0029 ")" */
    0x60,

    /* U+002A "*" */
    0xa0,

    /* U+002B "+" */
    0x30,

    /* U+002C "," */
    0x80,

    /* U+002D "-" */
    0x80,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x68,

    /* U+0030 "0" */
    0xfc,

    /* U+0031 "1" */
    0xe0,

    /* U+0032 "2" */
    0xd8,

    /* U+0033 "3" */
    0x74,

    /* U+0034 "4" */
    0x7c,

    /* U+0035 "5" */
    0x94,

    /* U+0036 "6" */
    0xac,

    /* U+0037 "7" */
    0x60,

    /* U+0038 "8" */
    0xdc,

    /* U+0039 "9" */
    0xd4,

    /* U+003A ":" */
    0x40,

    /* U+003B ";" */
    0x40,

    /* U+003C "<" */
    0x50,

    /* U+003D "=" */
    0xf0,

    /* U+003E ">" */
    0x60,

    /* U+003F "?" */
    0x0,

    /* U+0040 "@" */
    0xef, 0xa6,

    /* U+0041 "A" */
    0x5b, 0x0,

    /* U+0042 "B" */
    0xfc,

    /* U+0043 "C" */
    0xa8,

    /* U+0044 "D" */
    0xd7, 0x0,

    /* U+0045 "E" */
    0xb8,

    /* U+0046 "F" */
    0xb8,

    /* U+0047 "G" */
    0xa8,

    /* U+0048 "H" */
    0xbe, 0x80,

    /* U+0049 "I" */
    0xe0,

    /* U+004A "J" */
    0x54,

    /* U+004B "K" */
    0xec,

    /* U+004C "L" */
    0xa8,

    /* U+004D "M" */
    0x9f, 0x90,

    /* U+004E "N" */
    0xbe, 0x80,

    /* U+004F "O" */
    0xd7, 0x0,

    /* U+0050 "P" */
    0xf8,

    /* U+0051 "Q" */
    0xd7, 0x0,

    /* U+0052 "R" */
    0xf8,

    /* U+0053 "S" */
    0x94,

    /* U+0054 "T" */
    0x49, 0x0,

    /* U+0055 "U" */
    0xb7, 0x80,

    /* U+0056 "V" */
    0x99, 0x0,

    /* U+0057 "W" */
    0x9e, 0xa0,

    /* U+0058 "X" */
    0x98,

    /* U+0059 "Y" */
    0x9, 0x0,

    /* U+005A "Z" */
    0x68,

    /* U+005B "[" */
    0xf0,

    /* U+005C "\\" */
    0x28,

    /* U+005D "]" */
    0xf0,

    /* U+005E "^" */
    0x40,

    /* U+005F "_" */
    0xc0,

    /* U+0060 "`" */
    0x80,

    /* U+0061 "a" */
    0x70,

    /* U+0062 "b" */
    0xbc,

    /* U+0063 "c" */
    0xa0,

    /* U+0064 "d" */
    0x7c,

    /* U+0065 "e" */
    0xe0,

    /* U+0066 "f" */
    0xa8,

    /* U+0067 "g" */
    0xf4,

    /* U+0068 "h" */
    0xbc,

    /* U+0069 "i" */
    0x60,

    /* U+006A "j" */
    0x70,

    /* U+006B "k" */
    0xac,

    /* U+006C "l" */
    0xe0,

    /* U+006D "m" */
    0xfc,

    /* U+006E "n" */
    0xf0,

    /* U+006F "o" */
    0xf0,

    /* U+0070 "p" */
    0xf8,

    /* U+0071 "q" */
    0xf4,

    /* U+0072 "r" */
    0xa0,

    /* U+0073 "s" */
    0x90,

    /* U+0074 "t" */
    0xa8,

    /* U+0075 "u" */
    0xf0,

    /* U+0076 "v" */
    0xe0,

    /* U+0077 "w" */
    0xd4,

    /* U+0078 "x" */
    0xf0,

    /* U+0079 "y" */
    0xd8,

    /* U+007A "z" */
    0xa0,

    /* U+007B "{" */
    0x70,

    /* U+007C "|" */
    0xf0,

    /* U+007D "}" */
    0x70,

    /* U+007E "~" */
    0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 15, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 18, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 27, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 3, .adv_w = 43, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 55, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 43, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9, .adv_w = 15, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 10, .adv_w = 21, .box_w = 1, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 11, .adv_w = 21, .box_w = 1, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 12, .adv_w = 31, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 13, .adv_w = 36, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 16, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 15, .adv_w = 19, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 16, .adv_w = 16, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 25, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 18, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 36, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 24, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 28, .adv_w = 16, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 16, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 30, .adv_w = 36, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 36, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 36, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 33, .adv_w = 26, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 61, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 36, .adv_w = 42, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 38, .adv_w = 41, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 39, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 46, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 42, .adv_w = 37, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 34, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 44, .adv_w = 43, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 45, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 17, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 49, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 33, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 56, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 47, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 39, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 50, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 60, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 34, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 36, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 44, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 42, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 59, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 38, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 37, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 21, .box_w = 1, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 75, .adv_w = 25, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 76, .adv_w = 21, .box_w = 1, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 77, .adv_w = 36, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 78, .adv_w = 31, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 79, .adv_w = 24, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 80, .adv_w = 33, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 38, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 30, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 38, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 36, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 25, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 37, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 87, .adv_w = 37, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 16, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 89, .adv_w = 16, .box_w = 1, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 90, .adv_w = 33, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 17, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 55, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 37, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 38, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 38, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 96, .adv_w = 38, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 97, .adv_w = 25, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 29, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 26, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 37, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 50, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 33, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 105, .adv_w = 30, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 21, .box_w = 1, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 107, .adv_w = 18, .box_w = 1, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 108, .adv_w = 21, .box_w = 1, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 109, .adv_w = 36, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 0}
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
    0, 0, 0, -5, -2, -2, -8, 0,
    -2, 0, 0, 0, 1, 1, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -2, 0, 0, -2,
    -1, 1, -1, 1, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, -1, -1, -1, 0, -1, -1,
    -2, 0, -2, -1, -2, -3, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, -1, -1, -8, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 2,
    -2, -2, 2, 0, -2, 1, -4, -1,
    -5, -3, 1, -5, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, -3, 0, -1,
    0, -2, -3, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, -2, -2,
    -5, 0, -2, 0, 2, 0, 2, 1,
    1, 2, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, -1, 0,
    0, -1, 0, -5, -1, -1, -1, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -1, -1, -2, 0,
    -1, -1, -3, -1, -2, -1, -2, -3,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, -1, 0, -4, 2, 0, 1, 0,
    0, -1, 2, -1, -1, 2, 0, -1,
    1, -4, -1, -4, -1, 2, -5, 1,
    0, -2, 0, -1, -1, -1, 0, -1,
    0, 0, -1, -1, 1, 0, -1, -1,
    -1, 2, -1, 1, -1, -1, 0, -1,
    -1, -2, -1, -1, 0, -1, -1, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, -1, -1, -2, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, -1, 0, 0, -1,
    0, 0, 1, -2, 0, 0, 1, -1,
    1, -1, -1, 1, 0, -1, 1, 1,
    0, 1, 0, 1, 1, 1, -1, 0,
    0, -1, -1, -1, 0, -1, 0, 0,
    -1, -1, 0, 0, -1, -1, -1, 1,
    -1, 0, -2, 0, -1, -2, -1, -2,
    0, -2, 0, -3, 0, -2, -1, -1,
    0, 0, -2, 0, 0, -1, -2, 0,
    -1, -1, -2, -3, -1, -1, -3, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, -1, -1, 0, -1,
    1, 0, 0, 0, 0, -1, 1, -2,
    -2, 1, 0, -2, 0, 0, -1, 0,
    0, 0, 0, 0, -1, -3, 0, -1,
    -1, -1, 0, -1, 0, 0, -1, -1,
    0, -1, -1, -2, -2, 1, -2, 0,
    -1, -1, -1, 0, -2, 0, 0, -4,
    0, -4, -1, 1, -1, -3, -1, -1,
    -5, 0, -1, 0, 1, 0, 1, 0,
    0, 1, 0, -1, -3, -3, -1, -1,
    -1, 0, -1, 0, -2, -1, -1, 0,
    0, -2, 0, 0, -2, 0, -2, 0,
    0, 0, 0, 0, -1, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, -1, 0, 0, -1,
    0, 0, 0, -1, 0, -1, 0, -2,
    0, 0, 0, -1, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, -1, 0,
    0, -1, 0, -2, 1, -3, 1, 0,
    1, -1, 2, -2, -2, 2, 0, -2,
    0, 1, 0, 1, 1, 2, 1, 1,
    0, -2, 0, -1, -1, -1, 0, -1,
    0, 0, -1, -1, 1, 0, -1, -1,
    -3, 2, -1, 1, -1, 0, 0, -8,
    -1, 0, -9, 1, -4, 1, 0, 0,
    0, 2, -3, -3, 2, 0, -3, 1,
    -7, -1, -6, -3, 1, -7, 1, 0,
    -2, 0, -1, -1, -1, 0, -1, 0,
    0, -1, -1, 0, 0, 0, -3, -2,
    1, -1, 1, -2, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -1, -1, -2,
    0, -2, 0, -3, 0, -2, -1, -1,
    0, 0, -2, 0, 0, -1, -2, 0,
    -1, -1, -2, -3, -1, -1, -3, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -1, 0, -1, -2, 0,
    -6, 0, -4, 0, 0, 0, -3, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, -1, -3, -1, -1,
    -1, -2, 0, -1, 0, 0, -1, -1,
    0, 0, 0, 1, 1, 0, 1, 0,
    0, -2, -1, -1, -1, 0, 0, -2,
    0, 0, 0, -2, -1, -1, 0, 0,
    -2, 0, 0, -1, -2, 0, -1, -1,
    -2, -3, -1, -1, 0, -1, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 1, 0,
    1, 0, -1, -1, 2, -1, -1, 1,
    0, -1, 0, 0, 0, -1, 0, 1,
    -1, 1, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 1, -1, -1,
    0, 0, -2, 1, 0, -5, -3, -6,
    -5, 1, -3, -4, -2, -2, -6, 0,
    -2, 0, 2, 0, 2, 1, 1, 2,
    0, 0, -2, -3, -4, -4, -4, 0,
    -4, 0, -3, -4, -4, -3, 0, -2,
    -1, -5, -1, -1, -2, -2, 0, 0,
    0, -1, 0, 0, -1, 0, -3, -1,
    0, 0, -1, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, -2, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, -1, -1, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, -4, -1, -1, -6, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, -3, -3, -3, 0, -3, 0,
    -2, -3, -3, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, -1,
    0, 0, -2, 0, -3, -1, 1, -1,
    -1, -1, -1, -4, 0, -1, 0, 1,
    0, 1, 1, 1, 2, 0, 0, -2,
    -2, -1, -1, -1, 0, -2, 0, -1,
    -1, -1, -1, 0, -1, 0, 0, 0,
    0, 0, -1, 0, 0, 0, -2, 0,
    -2, 1, -2, 1, 0, 0, -2, 2,
    -2, -2, 1, 0, -2, 0, 1, 0,
    1, 0, 1, 1, 1, 0, -2, 0,
    -1, -1, -1, 0, -1, 0, 0, -1,
    -1, 0, 0, -1, -1, -2, 1, 0,
    0, -2, 0, 0, 0, -3, 1, 0,
    -4, -3, -5, -2, 2, -4, -5, -3,
    -3, -7, -1, -3, 0, 2, 0, 2,
    1, 1, 2, 1, 0, -2, -3, -3,
    -3, -3, 0, -3, 0, -3, -3, -3,
    -1, 0, -2, 0, 0, -1, 0, -2,
    -1, 0, 0, 0, -1, 0, 0, 1,
    -4, 0, 0, 0, -1, 1, -2, -2,
    1, 0, -2, 0, 0, -1, 1, 0,
    0, 1, 0, -1, -3, 0, -1, -1,
    -1, 0, -1, 0, 0, -1, -1, 0,
    -1, -1, -1, -2, 1, -1, 0, -2,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, -3, -3, -2,
    0, -3, -2, -2, -2, -2, -2, -2,
    -2, -3, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -1, 0, 0,
    -1, 0, 0, 0, 0, -1, -1, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, -2, -1, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    -1, 0, -1, 0, 0, -1, 0, -2,
    0, -2, 0, 0, 0, -1, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, -1,
    -1, -1, -1, 0, -1, 0, 0, 0,
    0, 0, 1, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, -1, 0, 0, -1, 0, 0,
    -1, 0, 0, 0, 0, 1, 1, 1,
    1, 0, -1, 0, 0, 0, 0, 2,
    1, -3, -2, -3, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 1, 1, 1,
    0, 0, 2, 0, -2, 0, -2, -1,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, -1, 0, -1, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    1, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, -2, -2, -2,
    0, -2, 0, 0, -2, -2, 0, 0,
    0, 0, 0, 1, 0, 0, -1, 0,
    0, -2, 0, -2, -1, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, -1, 0, -1, 0, 0, -1, 0,
    -2, 0, -2, -1, 0, 0, -1, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    -1, -1, -1, -1, 0, -1, 0, -2,
    0, -2, -1, 0, 0, -1, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, -1,
    -1, -1, -1, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1, -4, -2, -3, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 1, 1, 1, 1,
    0, 0, 0, 0, 0, 0, 0, 0,
    1, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, -1,
    -1, -1, 0, -1, 0, 0, -1, -1,
    0, 0, 0, 0, 0, 1, 0, 0,
    -1, 0, 0, 0, 0, 0, 1, -2,
    0, -2, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, -1, -1,
    -1, 0, -1, 0, 0, -1, -1, 0,
    0, 0, 1, 1, 1, 1, 0, 0,
    0, 0, 0, 0, 0, 1, -2, 0,
    -2, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, -1, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 1, 1, 1, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, -1, -1, -1, 0,
    -1, 0, 0, -1, -1, 0, 0, 0,
    0, 0, 1, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, -1, -1, -1, -1, -1,
    0, 0, -1, -1, 0, -1, -1, 0,
    0, 0, 0, 0, -2, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, -2, -2, -1, 0, -2, -1,
    0, -1, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, -1, 0, 0, -1, -2,
    -1, -2, -1, -2, -2, -2, 0, 0,
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
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR >= 8
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ubuntu_4px = {
#else
lv_font_t ubuntu_4px = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 4,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
    .fallback = NULL,
    .user_data = NULL
};



#endif /*#if UBUNTU_4PX*/

