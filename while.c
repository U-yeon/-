#include <stdio.h>

int main(void)
{
	int num1, num2;
	int total = 0;

	printf("�� ���� ���� �Է� : ");
	scanf("%d %d", &num1, &num2);

	do
	{
		total += num1;
		num1++;
	}while(num1<=num+2)

	printf("�� ������ ������ ������ ���� �� : %d", total);
	return 0;
}