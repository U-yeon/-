#include <stdio.h>

int main(void)
{
	int num1, num2;
	int total = 0;

	printf("두 개의 정수 입력 : ");
	scanf("%d %d", &num1, &num2);

	while(num1<num2+1)
	{
		total += num1;
		num1++;
	}

	printf("두 정수를 포함한 사이의 수의 합 : %d", total);
	return 0;
}