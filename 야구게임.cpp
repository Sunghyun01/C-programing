#pragma warning(disable:4996)
#include <stdio.h>
#include<stdlib.h> 
#include<time.h>
void baseball_rule() {

	printf("*���ӹ��*\n");
	printf("1.��ǻ�Ͱ� 3�ڸ��� �� ���� ����(0������X)\n");
	printf("2.5����ȸ �ȿ� 3�ڸ� �� ���߱�(�����ߺ�X) = 111,222\n");
	printf("3.player�� �Է��� �� ��\n �ڸ����� ���ڰ� �����ϸ� strike\n");
	printf("->���ڸ� �����ϸ� ball\n");
	printf("->���ڰ� ������ out\n\n");
	printf("ex) ��������(123)�̶�� ����");
	printf("player�� 789�Է½� 3 out ���\n");
	printf("player�� 321�Է½� 1strik 2ball ���\n");

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
			printf("���ڸ� ���ڸ� �Է����ּ��� : ");
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
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			printf("���� 0�� �ߺ� ���ڴ� ������� �ʽ��ϴ�.\n");
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
			printf("����� �¸��Ͽ����ϴ�.\n");
			return 1;
		}
		printf("%d ball %d strike %d out\n", result / 100, (result / 10) % 10, result % 10);

	}
	printf("����� �й��Ͽ����ϴ�.\n");
	printf("���� ���� : %d %d %d\n", com1, com2, com3);
	return 0;

}
int human_baseball_game()
{
	int tmp, com1, com2, com3, i, num1, num2, num3, result;

	while (1)
	{
		printf("���� �� ���ڸ� ���ڸ� �Է����ּ��� : ");
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
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
		printf("���� 0�� �ߺ� ���ڴ� ������� �ʽ��ϴ�.\n");
	}
	system("cls");

	for (i = 0; i<5; i++)
	{
		result = 0;
		while (1)
		{
			printf("���ڸ� ���ڸ� �Է����ּ��� : ");
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
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			printf("���� 0�� �ߺ� ���ڴ� ������� �ʽ��ϴ�.\n");
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
			printf("����� �¸��Ͽ����ϴ�.\n");
			return 1;
		}
		printf("%d ball %d strike %d out\n", result / 100, (result / 10) % 10, result % 10);

	}
	printf("����� �й��Ͽ����ϴ�.\n");
	printf("���� ���� : %d %d %d\n", com1, com2, com3);
	return 0;

}
int main()
{
	int input, win = 0, lose = 0;
	while (1)
	{
		printf("BASEBALL GAME\n");
		printf("1. ���� ����\n");
		printf("2. ���� Ȯ��\n");
		printf("3. ���� ����\n");
		printf("4. ���� ����\n");
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
			printf("����� ������ %d�� %d�� �Դϴ�.\n", win, lose);
		}
		else if (input == 3)
		{
			baseball_rule();
		}
		else if (input == 4)
		{
			printf("������ ���� �˴ϴ�.\n");
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
			printf("�߸� �Է� �ϼ̽��ϴ�.\n");
		}

		system("pause");
		system("cls");
	}
	return 0;
}