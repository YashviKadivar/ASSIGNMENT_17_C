/* Write a program in C to count the total number of alphabets, digits and special
    characters in a string. */

#include<stdio.h>

int main()
{
   char a[20];
   int digits=0,special_characters=0,alph=0,i;

   fgets(a,20,stdin);

   for(i=0;a[i];i++)
   {
       if(a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122)
            alph++;
       else     if(a[i]>=48 && a[i]<=57)
            digits++;
       else
            special_characters++;
   }

   printf("alphabets->%d\n",alph);
   printf("digits->%d\n",digits);
   printf("special_characters->%d\n",special_characters);

   return 0;
}
