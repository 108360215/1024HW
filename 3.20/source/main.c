#include<stdio.h>
#include<stdlib.h>
float  b;
int a;
int main() {
	while (1) {
		if (a > 40) {
			printf("Enter # of hours worked (-1 to end):");
			scanf_s("%d", &a);
			if (a == -1)break;
			printf("Enter hourly rate of the worker:");
			scanf_s("%f", &b);
			b = ((a-40)*1.5+40)* b;
			printf("Salary is $:%.2f\n", b);
		}
		else
		{


			printf("Enter # of hours worked (-1 to end):");
			scanf_s("%d", &a);
			if (a == -1)break;
			printf("Enter hourly rate of the worker:");
			scanf_s("%f", &b);
			b = a * b;
			printf("Salary is $:%.2f\n", b);

		}

	}
	system("pause");
}