/* Write a program to count the occurrence of a given character in a given string.  */

#include<stdio.h>

int main()
{
   char a[20],m;
   int i,count;

   fflush(stdin);
   fgets(a,20,stdin);
   scanf("%c",&m);

   for(i=0;a[i];i++)
   {
       if(a[i]==m)
        count++;
   }

   printf("\n %d",count);

   return 0;
}
