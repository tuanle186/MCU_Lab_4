/*
 * timer.h
 *
 *  Created on: Nov 13, 2023
 *      Author: lequo
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer0_flag;
extern int timer1_flag;

void setTimer0();
void setTimer1();

void timer_run();

#endif /* INC_TIMER_H_ */
