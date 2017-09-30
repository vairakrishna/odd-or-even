#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("Enter a value upto which the sum is to be calculated");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("%d",sum);
}
