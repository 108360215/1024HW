#include<stdio.h>
#include<stdlib.h>

int main() {
		printf("(A)\n");
		for(int i=0;i<10;i++)
		{
			for (int j = 0; j < i; j++)
			{
				printf("*");
			}
			printf("*\n");
		}
		printf("(B)\n");
		for (int i = 10; i >-1; i--)
		{
			for (int j = 0; j < i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("(C)\n");

		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (j - i >= 0)printf("*");
				else printf(" ");
			}
			printf("\n");
		}

		printf("(D)\n");

		for (int i = 10; i >= 0; i--)
		{
			for (int j = 0; j < 10; j++)
			{
				if (j - i >= 0)printf("*");
				else printf(" ");
			}
			printf("\n");
		}

	system("pause");
}