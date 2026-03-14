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
    int a = 8;
    int b = 3;
    
    result = add(a, b);
    printf("Result for add is: %d\n", result );
    result = subtract(a, b);
    printf("Result for subtract is: %d\n", result );
    result = multiplication(a, b);
    printf("Result for multiplication is: %d\n", result );
    result = division(a, b);
    printf("Result for division is: %d\n", result );

    
    return 0;
}

