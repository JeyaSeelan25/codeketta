#include<stdio.h>
#include<ctype.h>
int main()
{
char cha;
scanf("%c",&cha);
if(isalpha(cha))
{
  printf("Alphabet");
}
 else
 {
   printf("Not a Alphabet");
 }
   return 0;
   }
