#include <stdio.h>
#include <stdlib.h>

#define _GNU_SOURCE
#define BUFFER_SIZE (1024)

int main(void)
{  
    int charsize = 128;
    char textinput[BUFFER_SIZE] = {0};

    printf("input string\n");
    fgets(textinput,charsize,stdin);
    for(int i = 0; i <= BUFFER_SIZE; i++)
    {
        if(textinput[i] == '\n')
        {
            textinput[i] = '\0';
        }
    }
    return 0;
}