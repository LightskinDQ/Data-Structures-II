/*
 * mychar.h
 *
 *  Created on: May 15, 2024
 *      Author: dillonquick
 */

#ifndef MYCHAR_H_
#define MYCHAR_H_

/**
 * Determines the type of a char character.
 *
 * @param c - char type
 * @return - 0 if c is a digit
             1 if c is an arithmetic operator
             2 if c is the left parenthsis (
             3 if c is the right parenthsis )
             4 if c is an English letter;
             otherwise -1.
 */
int mytype(char c);

/**
 * Flip the case of an English character.
 *
 * @param c - char type
 * @return -  c's upper/lower case letter if c is a lower/upper case English letter.
 */
char case_flip(char c);

/**
 * Convert digit character to the corresponding integer value.
 *
 * @param c - char type
 * @return  - c's corresponding integer value if c is a digit character.
 */
int digit_char_to_int(char c);




#endif /* MYCHAR_H_ */
