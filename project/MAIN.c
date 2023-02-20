/*
 * main.c
 *
 *  Created on: 1 Feb 2023
 *      Author: Ahmed emad
 */

#include "ETC/MACROS.h"
#include "HALL/LCD.h"
#include "MCAL/TIMERS.h"
#include <stdlib.h>

int main() {
	LCD_Init();
	Ti2_Init();
	Ti2_PWM(40);
	ICU_Init();
	Ti2_Start();

	while(1) {}
}
