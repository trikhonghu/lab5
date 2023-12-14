/*
 * softwareTimer.h
 *
 *  Created on: Dec 14, 2023
 *      Author: Windows
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_

extern int timer0_flag;
extern int timer1_flag;

void setTimer0(int duration);
void setTimer1(int duration);
void timer_run();

#endif /* INC_SOFTWARETIMER_H_ */
