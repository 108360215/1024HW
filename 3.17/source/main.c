#include<stdio.h>
#include<stdlib.h>



int main()
{
	float b,  c, d, e;
	int a;
	while (1) {
		printf("enter account number(-1 to end):");
		scanf_s("%d", &a);
		if (a == -1)break;
		printf("enter beginning balance:");
		scanf_s("%f", &b);
		printf("enter total charges:");
		scanf_s("%f", &c);
		printf("enter total credits:");
		scanf_s("%f", &d);
		printf("enter credit limit:");
		scanf_s("%f", &e);
		if (b + d > e)
		{
			printf("Account: %d\n", a);
			printf("Credit limit: %f\n", e);
			printf("Balance: %f\n", b + d);
			printf("Credit Limit Exceeded\n");
		}
	}
	system("pause");

}