#include<stdio.h>
#include<conio.h>

void main()
{
		int a,b,c;

		printf("Enter the value of A :");
		scanf("%d", &a);
		
		printf("Enter the value of B :");
		scanf("%d", &b);

		printf("Enter the value of C :");
		scanf("%d", &c);

		if(a<b)
		{
			if(a<c)
			{
				printf("A is Minimum !");
			}
			else
				{
					printf("C is Minimum !");
				}
        }
		else
 		{
             	printf("B is Minimum !");
		}
}