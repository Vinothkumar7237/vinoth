#include<stdio.h>
int main()
{
char a;
printf( "enter the character\n");
scanf("%c",&a);
if ((a>='a' && a<='z') || (a>='A' && a<'z'))
{
printf("alphabet");
}
else
{
printf("no");
}
return 0;
}
