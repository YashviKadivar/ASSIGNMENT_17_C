/* Write a program to convert a given string into uppercase */

#include<stdio.h>

int main()
{
    int i;
    char a[20];

    printf("\n Enter string->");

    fgets(a,20,stdin);

    for(i=0;a[i];i++)
    {
        if(a[i]>=97 && a[i]<=122)
        {
           a[i]=a[i]-32;
        }
    }

    printf("\n %s",a);
}
