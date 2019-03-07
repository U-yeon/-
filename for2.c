#include <stdio.h>

int main(void)
{
	int num;
	int total;

	printf("정수 입력 : ");
	scanf("%d" , &num);

		for (total = 0; num != 0; num--)
		{
			total *= num;
		}

	printf("주어진 정수의 계승 : %d", total);
	return 0;
}