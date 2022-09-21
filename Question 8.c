/* Write a program in C to copy one string to another string.   */

#include<stdio.h>

int main()
{
    int i;
    char a[20];
    char copy[20];

    fgets(a,20,stdin);

    for(i=0;a[i];i++)
    {
        copy[i]=a[i];
    }

    printf("\n coppied string->%s",copy);
    printf("\n orignal string->%s",a);

    return 0;
}
