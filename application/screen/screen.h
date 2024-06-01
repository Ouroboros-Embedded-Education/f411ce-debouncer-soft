/*
 * screen.h
 *
 *  Created on: Nov 11, 2023
 *      Author: pablo-jean
 */

#ifndef SCREEN_SCREEN_H_
#define SCREEN_SCREEN_H_

#include <string.h>
#include <stdio.h>

#include "lvgl.h"

lv_group_t* screen_main_init();

void screen_upd_raw(uint32_t Value);

void screen_upd_debounced(uint32_t Value);

#endif /* SCREEN_SCREEN_H_ */
