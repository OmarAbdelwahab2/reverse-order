#include<stdio.h>
void main(void)
{
	int a[10];
	for(int i = 0; i < 10; i++)
	{
		printf("enter the %dth number \n", i+1);
		scanf_s("%d",&a[i]);
	}
	for (int i = 9; i >= 0; i--)
	{
		printf("after reverse the %dth number will be %d \n",10-i,a[i]);
		
	}
}