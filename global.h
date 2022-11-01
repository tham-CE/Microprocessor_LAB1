/*
 * global.h
 *
 *  Created on: Nov 2, 2022
 *      Author: Admin
 */

#ifndef SRC_GLOBAL_H_
#define SRC_GLOBAL_H_
#include "software_timer.h"

extern int hour;
extern int minute;
extern int second;
const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {};
int hour = 15 , minute = 8 , second = 50;
#endif /* SRC_GLOBAL_H_ */
