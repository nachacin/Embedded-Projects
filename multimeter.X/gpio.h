/* 
 * File: 
 * Course:    ENCM 511
 * Section:   L02 - B04
 * Group:     4
 * Author: Yahia Abrini, Nasih Nazeem, Nestor Chacin
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef GPIO_H
#define	GPIO_H

#include <xc.h>

/* This function is used to initialize all the input and outpin pins. Physical
resistors were used for pull-up and pull-down purposes. 
*/
void io_init(void);
/**
 * Set RB15 to output the system clock for testing purposes
 */
void clock_ref_out(void);

#endif