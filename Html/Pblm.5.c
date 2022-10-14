#include<stdio.h>

int decimal_to_binary(int a)
{
    if (a==0);

    else
         return ((a%2)+10*decimal_to_binary(a/2));
}
void main()
{
    int number;
    scanf ("%d", & number);
    printf("%d",decimal_to_binary(number));
    return 0;
}
