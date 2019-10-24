#include<stdio.h>
#include<stdlib.h>

int main() {
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if ((i < 4 && j < 4&&i+j<4) || (i < 4 && j > 4 && j-i>4) ||
				(i > 4 && j < 4&&i-j>4) || (i > 4 && j > 4&&i+j>12))
				printf(" ");
			else
				printf("*");


		}
		printf("\n");


	}
	system("pause");
}