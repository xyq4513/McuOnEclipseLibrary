/*
 * Application.h
 *
 *  Created on: 17.02.2018
 *      Author: Erich Styger
 */

#ifndef SOURCES_APPLICATION_H_
#define SOURCES_APPLICATION_H_

/*
 * Used to change the desired position of the wheel. A wheel position corresponds to 2 mm
 */
void APP_ChangeWheelPos(int delta);

/*
 * Initializes APP_Counter and TimeOut
 *
 */
void APP_Init(void);

/*
 * creates APP Task
 */
void APP_Run(void);


#endif /* SOURCES_APPLICATION_H_ */
