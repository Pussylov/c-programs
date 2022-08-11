#include<stdio.h>
int main()
{
    int var = 10;
    int *ptr = &var;
    int **ptrl = &ptr;
    printf("value of var = %d \n",*ptr);
    printf("address of var = %p\n",ptr);
    printf("\n address of pointer variable ptr = %p\n",ptrl);
    return 0;

    }