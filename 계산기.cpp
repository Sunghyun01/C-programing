
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char operater;
	int val1, val2, val3;
	while (true) {
		printf("ù��° ���� �Է����ּ���>> ");
		scanf_s("%d", &val1);

		printf("�ι�° ���� �Է����ּ��� >> ");
		scanf_s("%d", &val2);

		while (getchar() != '\n'); //���۸� ����ִ� �ڵ�

		printf("�����ڸ� �Է����ּ���>> ");
		scanf_s("%c", &operater);

		if (operater == '+')
			val3 = val1 + val2;
		else if (operater == '-')
			val3 = val1 - val2;
		else if (operater == '*')
			val3 = val1 * val2;
		else if (operater == '/')
			val3 = val1 / val2;

		printf("[%d] %c [%d] = [ [%d] ]\n", val1, operater, val2, val3);
		while (getchar() != '\n'); //���۸� ����ִ� �ڵ�
		printf("����Ϸ��� �ƹ� Ű�� �����ʽÿ�.");
		getchar();
	}
	return 0;
}