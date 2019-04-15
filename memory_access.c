/*
Goal: To understand how memory works in terms of datatypes
*/
#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t i;

    // Assigning values to 4 contiguous memory locations (since memory is byte addressable)
    uint8_t a[4] = {2, 1, 0, 0};

    for(i=0;i<4;i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    // Telling the compiler to use those 4 bytes to come up with one single integer
    printf("\nThe number is %d\n", *((uint32_t *)a));


    printf("---------------------------------------------\n");

    // Compiler will use 4 contiguous bytes to assign the value 200
    uint32_t n = 260;

    printf("\nThe number is %d\n", n);
    
    // ptr will refer to the address of first byte on n
    uint8_t *ptr = &n;

    // Printing contiguous bytes as a single integer
    for(i=0;i<4;i++)
    {
        printf("a[%d] = %d\n", i, ptr[i]);
    }

}
