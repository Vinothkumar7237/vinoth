#include<stdio.h>
int main()
{
int num,num1;
printf("Enter the number to check:");
scanf("%d",&num);
  num1=num%2;
if (num1=0)
  {
   printf("The number is even");
   }
else if (num1=1)
   {
   printf("The number is odd0");
   }
else
{
printf("The number is ZERO");
}
getch();
return 0;
}
