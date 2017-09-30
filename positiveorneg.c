#include<stdio.h>
void main()
{
signed int a;
printf("Entert a value bt. - to +");
scanf("%d", &a);
if(a!=0)
{
if(a==-(-a))
{
printf("Enterted value is +ve");
}
else
{
printf("Entered value is -ve");
}
}
else
{
printf("entered value is 0");
}
}
