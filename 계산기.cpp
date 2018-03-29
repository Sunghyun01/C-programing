
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char operater;
	int val1, val2, val3;
	while (true) {
		printf("첫번째 값을 입력해주세요>> ");
		scanf_s("%d", &val1);

		printf("두번째 값을 입력해주세요 >> ");
		scanf_s("%d", &val2);

		while (getchar() != '\n'); //버퍼를 비워주는 코드

		printf("연산자를 입력해주세요>> ");
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
		while (getchar() != '\n'); //버퍼를 비워주는 코드
		printf("계속하려면 아무 키나 누르십시오.");
		getchar();
	}
	return 0;
}