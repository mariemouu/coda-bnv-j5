#include "operations.h"

int add(int nb1, int nb2)
{
    int result = nb1 + nb2;
    return(result);
}

int subtract(int nb1, int nb2)
{
    int result = nb1 - nb2;
    return(result);
}

int multiply(int nb1, int nb2)
{
    int result = nb1 * nb2;
    return(result);
}

float divide(int nb1, int nb2)
{
    float result = (float)nb1 / nb2;
    return(result);
}

int modulo(int nb1, int nb2)
{
    int result = nb1 % nb2;
    return(result);
}
