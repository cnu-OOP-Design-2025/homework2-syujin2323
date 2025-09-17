#include "homework2-1.h"
#include <iostream>

/* TODO IntClac 네임스페이스 및 함수 정의하기 */
namespace IntCalc
{
    int add(int a, int b)
    {
        return a + b;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }

    int divide(int a, int b)
    {
        if(b == 0)
        {
            return -1;
        }

        return a / b;
    }

}

/* TODO FloatClac 네임스페이스 및 함수 정의하기 */
namespace FloatCalc
{
    float add(float a, float b)
    {
        float n = a + b;
        return n;
    }

    float subtract(float a, float b)
    {
        float n = a - b;
        return n;
    }

    float multiply(float a, float b)
    {
        float n = a * b;
        return n;
    }

    float divide(float a, float b)
    {
        if(b == 0)
        {
            return -1;
        }

        float n = a / b;
        return n;
    }
}