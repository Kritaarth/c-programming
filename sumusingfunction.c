// Add 2 numbers by using functions
#include <stdio.h>
#define x 20

int sum(int y);

int main()
{
    int y = 21;
    printf("Sum of x and y is %d", sum(y));
    return 0;
}

int sum(int y){

    return x + y;
}
