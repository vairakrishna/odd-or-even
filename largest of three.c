#include<stdio.h>
void main()
{
int a, b, c;
printf("Enter three values");
scanf("%d%d%d",&a,&b,&c);
if(a<b)
{
if(b<c)
{
printf("%d is largest",c);
}
else
{
printf("%d is largest",b);
}
}
else
{
if(a>c)
{
printf("%d is largest",a);
}
}
}
