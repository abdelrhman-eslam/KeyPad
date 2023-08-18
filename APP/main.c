/*
 * main.c
 *
 *  Created on: Aug 13, 2023
 *      Author: ENG.AbdelrhmanEslam
 */


#include "../MCAL/DIO/DIO.h"
#include "../HAL/KeyPad/KPD_int.h"
#include "../HAL/7_segment/7_segment_int.h"

void main() {

HKPD_voidInit();
HSSD_voidInit(PORTB);

u8 L_Number=10;
while(1){

	L_Number = HKPD_u8GetPressedKey();
	HSSD_VoidDisplayNumber(PORTB , L_Number-'0');

	//0 ->48		1->49


}

}
