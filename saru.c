#include<stdio.h>
int main()
{
int side i,j;
printf("Enter side of squre\n");
scanf("%d",&side);
for(i=0;i<side;i++)
{
for(j=0;j<side;j++)
{
printf("*");
}
printf("\n");
}
return 0;
}
