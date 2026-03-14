#include <stdlib.h>
#include <stdio.h>

#define _GNU_SOURCE


int add(int a, int b)
{
    int addres = 0;
    addres = a + b;

    return addres;
}

int subtract(int a, int b)
{
    int subresult = 0;
    subresult = a - b;

    return subresult;
}

int multiplication(int a, int b)
{
    int multresult = 0;
    multresult = a * b;

    return multresult;

}

int division(int a, int b)
{
    int divresult = 0;
    divresult = a / b;

    return divresult;

}

int main(void)
{
    int result = 0;
    int a = 1;
    int b = 4;
    
    result = add(a, b);
    printf("Result for add is: %d\n", result );
    
    return 0;
}

