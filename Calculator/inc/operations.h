  
/** 
* @file operations.h
* Calculator with  mathematical operations
*
*/
#ifndef __OPERATIONS_H__
#define __OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <math.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
float add(float operand1, float operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
float subtract(float operand1, float operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
float multiply(float operand1, float operand2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
float divide(float operand1, float operand2);

/**
* powers the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return float value of the operand1**operand2
* @note returns 0 for 0 power 0 error
*/
float power(float operand1, float operand2);

/**
* logarithm to base 10 of operand1 and returns the result 
* @param[in] operand1  
* @return float value of the logarithm of operand1
*/
float logarithm(float operand1);

/**
* logarithm of operand1 and returns the result 
* @param[in] operand1  
* @return float value of the natural logarithm of operand1
* @note returns 0 for natural logarithm of 0 error
*/
float natural_logarithm(float operand1);

/**
* sine of operand1 and returns the result 
* @param[in] operand1  
* @return float value of the sine of operand1
*/
float sine(float operand1);

/**
* cosine of operand1 and returns the result 
* @param[in] operand1  
* @return float value of the cosine of operand1
*/
float cosine(float operand1);

/**
* tangent of operand1 and returns the result 
* @param[in] operand1  
* @return float value of the tan of operand1
*/
float tangent(float operand1);

/**
* cotangent of operand1 and returns the result 
* @param[in] operand1  
* @return float value of the cot of operand1
*/
float cotangent(float operand1);

/**
* square root of operand1 and returns the result 
* @param[in] operand1  
* @return float value of the square root of operand1
* @note returns 0 for square root of less than 0 
*/
float square_root(float operand1);

/**
* cube root of operand1 and returns the result 
* @param[in] operand1  
* @return float value of the square root of operand1
* @note returns 0 for cube root of less than 0 
*/
float cube_root(float operand1);

/**
* roots the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return float value of the operand1 root to operand2
* @note returns 0 for higher root of 0 error
*/
float Higher_root(float operand1, float operand2);

/**
* inverse of operand1 and returns the result 
* @param[in] operand1  
* @return float value of the inverse of operand1
* @note returns 0 for inverse of 0 
*/
float inverse(float operand1);

/**
* degree to radian of operand1 and returns the result 
* @param[in] operand1  
* @return float value of the radian of operand1 
*/
float deg_to_rad(float operand1);

/**
* radian to degree of operand1 and returns the result 
* @param[in] operand1  
* @return float value of the degree of operand1 
*/
float rad_to_deg(float operand1);

/**
* ceil value of operand1 and returns the result 
* @param[in] operand1  
* @return ceil value of operand1 
*/
float ceil_value(float operand1);

/**
* floor value of operand1 and returns the result 
* @param[in] operand1  
* @return floor value of operand1 
*/
float floor_value(float operand1);

/**
* absolute value of operand1 and returns the result 
* @param[in] operand1  
* @return absolute value of operand1 
*/
float absolute_value(float operand1);
#endif  /* #define __OPERATIONS_H__ */
