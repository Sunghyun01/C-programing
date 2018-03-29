#pragma warning(disable:4996)
#include <stdio.h>
#include<stdlib.h> 
#include<time.h>
void baseball_rule() {

	printf("*게임방법*\n");
	printf("1.컴퓨터가 3자리의 수 랜덤 생성(0은포함X)\n");
	printf("2.5번기회 안에 3자리 수 맞추기(숫자중복X) = 111,222\n");
	printf("3.player가 입력한 수 가\n 자릿수와 숫자가 동일하면 strike\n");
	printf("->숫자만 동일하면 ball\n");
	printf("->숫자가 없으면 out\n\n");
	printf("ex) 랜덤수가(123)이라고 가정");
	printf("player가 789입력시 3 out 출력\n");
	printf("player가 321입력시 1strik 2ball 출력\n");

}
int baseball_game()
{
	int tmp, com1, com2, com3, i, num1, num2, num3, result;

	srand(time(NULL));
	com1 = rand() % 9 + 1;
	while (1)
	{
		com2 = rand() % 9 + 1;
		if (com1 != com2)
		{
			break;
		}
	}
	while (1)
	{
		com3 = rand() % 9 + 1;
		if (com1 != com3 && com2 != com3)
		{
			break;
		}
	}
	for (i = 0; i<5; i++)
	{
		result = 0;
		while (1)
		{
			printf("세자리 숫자를 입력해주세요 : ");
			scanf_s("%d", &tmp);
			num1 = tmp / 100;
			num2 = (tmp / 10) % 10;
			num3 = tmp % 10;
			if (tmp >= 123 && tmp <= 987)
			{
				if (num1 != num2 && num1 != num3 && num2 != num3)
				{
					break;
				}
			}
			printf("잘못 입력하셨습니다.\n");
			printf("숫자 0과 중복 숫자는 허용하지 않습니다.\n");
		}
		if (num1 == com1)
		{
			result += 10;
		}
		else if (num1 == com2 || num1 == com3)
		{
			result += 100;
		}
		else
		{
			result += 1;
		}
		if (num2 == com2)
		{
			result += 10;
		}
		else if (num2 == com1 || num2 == com3)
		{
			result += 100;
		}
		else
		{
			result += 1;
		}
		if (num3 == com3)
		{
			result += 10;
		}
		else if (num3 == com1 || num3 == com2)
		{
			result += 100;
		}
		else
		{
			result += 1;
		}
		if ((result / 10) % 10 == 3)
		{
			printf("당신이 승리하였습니다.\n");
			return 1;
		}
		printf("%d ball %d strike %d out\n", result / 100, (result / 10) % 10, result % 10);

	}
	printf("당신이 패배하였습니다.\n");
	printf("정답 숫자 : %d %d %d\n", com1, com2, com3);
	return 0;

}
int human_baseball_game()
{
	int tmp, com1, com2, com3, i, num1, num2, num3, result;

	while (1)
	{
		printf("문제 낼 세자리 숫자를 입력해주세요 : ");
		scanf_s("%d", &tmp);
		com1 = tmp / 100;
		com2 = (tmp / 10) % 10;
		com3 = tmp % 10;
		if (tmp >= 123 && tmp <= 987)
		{
			if (com1 != com2 && com1 != com3 && com2 != com3)
			{
				break;
			}
		}
		printf("잘못 입력하셨습니다.\n");
		printf("숫자 0과 중복 숫자는 허용하지 않습니다.\n");
	}
	system("cls");

	for (i = 0; i<5; i++)
	{
		result = 0;
		while (1)
		{
			printf("세자리 숫자를 입력해주세요 : ");
			scanf_s("%d", &tmp);
			num1 = tmp / 100;
			num2 = (tmp / 10) % 10;
			num3 = tmp % 10;
			if (tmp >= 123 && tmp <= 987)
			{
				if (num1 != num2 && num1 != num3 && num2 != num3)
				{
					break;
				}
			}
			printf("잘못 입력하셨습니다.\n");
			printf("숫자 0과 중복 숫자는 허용하지 않습니다.\n");
		}
		if (num1 == com1)
		{
			result += 10;
		}
		else if (num1 == com2 || num1 == com3)
		{
			result += 100;
		}
		else
		{
			result += 1;
		}
		if (num2 == com2)
		{
			result += 10;
		}
		else if (num2 == com1 || num2 == com3)
		{
			result += 100;
		}
		else
		{
			result += 1;
		}
		if (num3 == com3)
		{
			result += 10;
		}
		else if (num3 == com1 || num3 == com2)
		{
			result += 100;
		}
		else
		{
			result += 1;
		}
		if ((result / 10) % 10 == 3)
		{
			printf("당신이 승리하였습니다.\n");
			return 1;
		}
		printf("%d ball %d strike %d out\n", result / 100, (result / 10) % 10, result % 10);

	}
	printf("당신이 패배하였습니다.\n");
	printf("정답 숫자 : %d %d %d\n", com1, com2, com3);
	return 0;

}
int main()
{
	int input, win = 0, lose = 0;
	while (1)
	{
		printf("BASEBALL GAME\n");
		printf("1. 게임 시작\n");
		printf("2. 전적 확인\n");
		printf("3. 게임 설명\n");
		printf("4. 게임 종료\n");
		printf("5. PVP\n");
		printf("->");
		scanf_s("%d", &input);
		if (input == 1)
		{
			if (baseball_game())
			{
				win++;
			}
			else
			{
				lose++;
			}
		}
		else if (input == 2)
		{
			printf("당신의 전적은 %d승 %d패 입니다.\n", win, lose);
		}
		else if (input == 3)
		{
			baseball_rule();
		}
		else if (input == 4)
		{
			printf("게임이 종료 됩니다.\n");
			return 0;
		}
		else if (input == 5)
		{
			if (human_baseball_game())
			{
				win++;
			}
			else
			{
				lose++;
			}
		}
		else
		{
			printf("잘못 입력 하셨습니다.\n");
		}

		system("pause");
		system("cls");
	}
	return 0;
}