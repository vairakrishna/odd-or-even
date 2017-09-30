#include<stdio.h>
void main()
{
int year;
printf("Enter a year");
scanf("%d",&year);
if(year%4==0)
{
printf("Given year is a leap year");
}
else
{
printf("Given year is not a leap year");
}
}
