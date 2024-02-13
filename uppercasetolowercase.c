// write a program to convert upper case to lowercase data by using bitwise operator

#include <stdio.h>
char *lowerc(char *a);
int b = 32;

int main()
{
    char str[99];
    int c;
    printf("Enter string: ");
    scanf("%s", &str);
    printf("%s", lowerc(str));
    return 0;
    
} 

char *lowerc(char *a)  
{  
    for (int i=0; a[i]!='\0'; i++)  
        a[i] = a[i] | b;  
  
    return a;  
}
 
