/*
 * screen_main.c
 *
 *  Created on: Nov 11, 2023
 *      Author: pablo-jean
 */


#include "screen.h"


static lv_obj_t *screen;

static lv_obj_t *labelTitle, *labelRawVal, *labelDebVal, *labelStatus;

LV_IMG_DECLARE(cpu);
LV_IMG_DECLARE(two_arrows);

// custom fonts
extern lv_font_t ubuntu_4px;
extern lv_font_t ubuntu_24px;
extern lv_font_t ubuntu_16;
extern lv_font_t ubuntu_8px;

/* Callbacks */

uint32_t Minutes, Seconds, Mils;
uint8_t Couting = 0;

/* Initialize functions */

void _init_text(){
	labelTitle = lv_label_create(lv_scr_act());
	lv_obj_align(labelTitle, LV_ALIGN_TOP_MID, 0, 3);
	lv_label_set_text(labelTitle, "Debouncer");
	lv_obj_set_style_text_font(labelTitle, &lv_font_unscii_8, _LV_STYLE_STATE_CMP_SAME);

	labelRawVal = lv_label_create(lv_scr_act());
	lv_obj_align(labelRawVal, LV_ALIGN_TOP_LEFT, 4, 20);
	lv_label_set_text(labelRawVal, "Raw 00000");
	lv_obj_set_style_text_font(labelRawVal, &lv_font_unscii_8, _LV_STYLE_STATE_CMP_SAME);

	labelDebVal = lv_label_create(lv_scr_act());
	lv_obj_align(labelDebVal, LV_ALIGN_TOP_LEFT, 4, 35);
	lv_label_set_text(labelDebVal, "Deb 00000");
	lv_obj_set_style_text_font(labelDebVal, &lv_font_unscii_8, _LV_STYLE_STATE_CMP_SAME);

}

void _init_imgs(){

}


lv_group_t* screen_main_init(){
	lv_group_t *group;

	screen = lv_disp_get_scr_act(NULL);
	lv_scr_load(screen);

	_init_text();
	_init_imgs();

	group = lv_group_create();

	return group;
}

void screen_upd_raw(uint32_t Value){
	char Text[10];

	sprintf(Text, "Raw %05lu", Value);
	lv_label_set_text(labelRawVal, Text);
}

void screen_upd_debounced(uint32_t Value){
	char Text[10];

	sprintf(Text, "Deb %05lu", Value);
	lv_label_set_text(labelDebVal, Text);
}
