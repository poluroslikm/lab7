#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int lab7task1()
{
	{

		char c;
		printf("������� ����� ��� �����: ");
		scanf("%c", &c);//���������� � �������
		switch (c)
		{
		case '1':
			printf("������� �����.\n");
			break;
		case '2':
			printf("������� �����.\n");
			break;
		case '3':
			printf("������� �����.\n");
			break;
		case '4':
			printf("������� �����.\n");
			break;
		case '5':
			printf("������� �����.\n");
			break;
		case '6':
			printf("������� �����.\n");
			break;
		case '7':
			printf("������� �����.\n");
			break;
		case '8':
			printf("������� �����.\n");
			break;
		case '9':
			printf("������� �����.\n");
			break;
		case '0':
			printf("������� �����.\n");
			break;
		default:
			printf("������� �����.\n");
		}

		return 0;

	}
}
int lab7task2()
{
	{
		float x, y;
		char c;
		printf("������� x, ��� �������� � y: ");
		scanf(" %f %c %f", &x, &c, &y);
		switch (c)
		{
		case '+':
			printf(" = %f", x + y);
			break;
		case '/':
			printf(" = %f", x / y);
			break;
		case '*':
			printf(" = %f", x * y);
			break;
		case '-':
			printf(" = %f", x - y);
			break;
		default:
			printf("������� �����.\n");
		}

		return 0;

	}
}
int lab7task3()
{
	{

		char c;
		printf("������� ���� ����������: ");
		scanf("%c", &c);//���������� � �������
		switch (c)
		{
		case ',':
			printf("������� �������.\n");
			break;
		case '.':
			printf("������� �����.\n");
			break;
		case ':':
			printf("������� ���������.\n");
			break;
		case ';':
			printf("������� ����� � �������.\n");
			break;
		case '?':
			printf("������ �������������� ����.\n");
			break;
		case '!':
			printf("������ ��������������� ����.\n");
			break;
		case '-':
			printf("������� ����.\n");
			break;
		case '"':
			printf("������� �������.\n");
			break;
		case '\'':
			printf("������� �������.\n");
			break;
		case ')':
			printf("������� ������.\n");
			break;
		case '(':
			printf("������� ������.\n");
			break;
		default:
			printf("������ �� ���� ����������.\n");
		}

		return 0;

	}
}
int main()
{
	setlocale(LC_CTYPE, "RUS");
	//lab7task1();
	//lab7task2();
	lab7task3();
}