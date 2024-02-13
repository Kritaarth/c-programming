// write a program to take an array of size 'n', print the sum of all the elements in array
#include <stdio.h>

int main()
{
    int a[99], i, n, s;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
    }
    
    for(i=1;i<=n;i++)
    {
        s = s+a[i];
    }
    
    printf("Sum of the all elements in array is: %d", s);
    
    return 0;
    
    
}