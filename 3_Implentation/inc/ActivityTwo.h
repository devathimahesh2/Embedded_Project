/**
 * @file ActivityTwo.h
 * @author mahesh 
 * @brief 
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY2_H_
#define __ACTIVITY2_H_





#include <avr/io.h>
#include<util/delay.h>
#include <avr/interrupt.h>

void InitADC();

uint16_t ReadADC(uint8_t ch);
#endif /** __ActivityTwo_H_ */
