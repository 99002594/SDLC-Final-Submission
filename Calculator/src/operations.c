#include <operations.h>
#include <math.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

float power(float operand1, float operand2)
{
    if(operand1==0)
        return 0;
    else 
        return pow(operand1,operand2);
}



float logarithm(float operand1)
{
    if(operand1<=0)
        return 0;
    else
        return log10(operand1);
        
}


float natural_logarithm(float operand1)
{
    if(operand1<=0)
        return 0;
    else
        return log(operand1);
        
}


float sine(float operand1)
{
    return sin(operand1);
}


float cosine(float operand1)
{
    return cos(operand1);
}


float tangent(float operand1)
{
    return tan(operand1);
}


float cotangent(float operand1)
{
    return 1/tan(operand1);
}

