#include <stdio.h>
int main()
{
 int num,orginal,reversed=0,remainder;
 printf("Enter a number:");
 scanf("%d",&num);
 orginal=num;
 while(num!=0)
{
 remainder=num%10;
 reversed=reversed*10+remainder;
 num=num/10;
}
if(orginal==reversed)
{
 printf("palindrome number");
}
else
{
printf("not a palindrome");
}
return 0;
}
