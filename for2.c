#include <stdio.h>

int main(void)
{
	int num;
	int total;

	printf("���� �Է� : ");
	scanf("%d" , &num);

		for (total = 0; num != 0; num--)
		{
			total *= num;
		}

	printf("�־��� ������ ��� : %d", total);
	return 0;
}