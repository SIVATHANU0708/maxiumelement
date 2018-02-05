#include<stdio.h>
int main()
{
int n,array[10],i,maximum;
printf("enter a number:");
scanf("%d",&n);
printf("enter %d integer\n",n);
for(i=0;i<=n;i++)
{
scanf("%d",&array[i]);
}
maximum=array[0];
for(i=0;i<=n;i++)
{
if(array[i]>maximum)
{
maximum=array[i];
}
}
printf("the maximum element in this array %d",maximum);
return 0;
}
