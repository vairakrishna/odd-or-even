#include<stdio.h>
void main()
{
int n,rem,rev=0,org;
printf("Enter a number");
scanf("%d",&n);
org=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(org==rev)
{
printf("Entered numner is a palindrome");
}
else
{
printf("Entered number is not a palindrome");
}
}
