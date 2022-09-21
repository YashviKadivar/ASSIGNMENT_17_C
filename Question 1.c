/* Write a program to calculate the length of the string. (without using built-in method)   */

#include<stdio.h>

int main()
{
    char a[]="hello";
    int i=0,count=0;;

    while(a[i] != '\0')
   {
       i++;
       count++;
   }

   printf("\n %d",count);
    return 0;
}
