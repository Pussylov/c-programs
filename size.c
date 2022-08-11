#include <stdio.h>

int main()
{
    int intType;
    float floatType;
    long int longType;
    char charType;
    double doubleType;
    printf("int : %zu\n",sizeof(intType));
    printf("float : %zu\n", sizeof(floatType) );
    printf("long int: %zu\n",sizeof(longType));
    printf("char: %zu\n",sizeof(charType));
    printf("double : %zu\n",sizeof(doubleType));



    return 0;
}