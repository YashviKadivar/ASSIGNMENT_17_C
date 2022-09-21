/* Write a program to reverse a string. */

#include<stdio.h>

int main()
{

    char a[] = "yashvi",t;
    int i,j=strlen(a)-1;

    while(i<=j)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;
    }

    printf("\n %s",a);

    return 0;
}
