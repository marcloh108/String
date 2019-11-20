#include <stdio.h>
#include <ctype.h>

int main()
{
   char str1[100];
   char newString[10][10];
   int i, j, ctr;
   printf(" Input a string : ");
   fgets(str1, sizeof str1, stdin);

   j=0;ctr=0;
   for(i=0;i<=(strlen(str1));i++)
   {
       if(str1[i]==' ' || str1[i]=='\0')
       {
           newString[ctr][j]='\0';
           ctr++;
           j=0;
       }
       else
       {
           newString[ctr][j]=str1[i];
           j++;
       }
   }
   printf("\n String or words after split by space are: \n");
   for(i=0;i<ctr;i++)
       printf(" %s\n", newString[i]);
   return 0;

}
