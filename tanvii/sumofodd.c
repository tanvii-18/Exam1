#include<stdio.h>
#include<conio.h>

void main()
{

	int i=1,n,sum;

		printf("Enter any number :");
		scanf("%d", &n);

		do
		{
			printf("%d ", i);
			i+=2;
		}while(i<=n);
}