/*
 * 7_segment_int.h
 *
 *  Created on: Aug 13, 2023
 *      Author: ENG.AbdelrhmanEslam
 */

#ifndef HAL_7_SEGMENT_7_SEGMENT_INT_H_
#define HAL_7_SEGMENT_7_SEGMENT_INT_H_

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#define Cathode 1
#define Anode   2

#define SSD_Type	Cathode

/* Following This Table For Common Cathode */
/***********************************************/
/* Decimal | Dot | g | f | e | d | c | b | a | */
/*    0    |  0  | 0 | 1 | 1 | 1 | 1 | 1 | 1 | */
/*    1    |  0  | 0 | 0 | 0 | 0 | 1 | 1 | 0 | */
/*    2    |  0  | 1 | 0 | 1 | 1 | 0 | 1 | 1 | */
/*    3    |  0  | 1 | 0 | 0 | 1 | 1 | 1 | 1 | */
/*    4    |  0  | 1 | 1 | 0 | 0 | 1 | 1 | 0 | */
/*    5    |  0  | 1 | 1 | 0 | 1 | 1 | 0 | 1 | */
/*    6    |  0  | 1 | 1 | 1 | 1 | 1 | 0 | 1 | */
/*    7    |  0  | 0 | 0 | 0 | 0 | 1 | 1 | 1 | */
/*    8    |  0  | 1 | 1 | 1 | 1 | 1 | 1 | 1 | */
/*    9    |  0  | 1 | 1 | 0 | 1 | 1 | 1 | 1 | */
/***********************************************/

#define Zero  0
#define one   1
#define Two   2
#define Three 3
#define Four  4
#define Five  5
#define Six   6
#define Seven 7
#define eight 8
#define Nine  9

void HSSD_voidInit(u8 A_PortNum);
void HSSD_VoidDisplayNumber(u8 A_u8SSD_PORT ,u8 A_u8Num);
void HSSD_voidTurnOff(u8 A_u8SSD_PORT);
void HSSD_voidCountUp(u8 A_u8SSD_PORT,u8 A_u8Num);
void HSSD_voidCountdown(u8 A_u8SSD_PORT,u8 A_u8Num);

#endif /* HAL_7_SEGMENT_7_SEGMENT_INT_H_ */
