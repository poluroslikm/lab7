#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int lab7task1()
{
	{

		char c;
		printf("¬ведите букву или цифру: ");
		scanf("%c", &c);//считывание с консоли
		switch (c)
		{
		case '1':
			printf("¬ведена цифра.\n");
			break;
		case '2':
			printf("¬ведена цифра.\n");
			break;
		case '3':
			printf("¬ведена цифра.\n");
			break;
		case '4':
			printf("¬ведена цифра.\n");
			break;
		case '5':
			printf("¬ведена цифра.\n");
			break;
		case '6':
			printf("¬ведена цифра.\n");
			break;
		case '7':
			printf("¬ведена цифра.\n");
			break;
		case '8':
			printf("¬ведена цифра.\n");
			break;
		case '9':
			printf("¬ведена цифра.\n");
			break;
		case '0':
			printf("¬ведена цифра.\n");
			break;
		default:
			printf("¬ведена буква.\n");
		}

		return 0;

	}
}
int lab7task2()
{
	{
		float x, y;
		char c;
		printf("¬ведите x, вид операции и y: ");
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
			printf("¬ведена буква.\n");
		}

		return 0;

	}
}
int lab7task3()
{
	{

		char c;
		printf("¬ведите знак препинани€: ");
		scanf("%c", &c);//считывание с консоли
		switch (c)
		{
		case ',':
			printf("¬ведена зап€та€.\n");
			break;
		case '.':
			printf("¬ведена точка.\n");
			break;
		case ':':
			printf("¬ведено двоеточие.\n");
			break;
		case ';':
			printf("¬ведена точка с зап€той.\n");
			break;
		case '?':
			printf("¬веден вопросительный знак.\n");
			break;
		case '!':
			printf("¬веден восклицательный знак.\n");
			break;
		case '-':
			printf("¬ведено тире.\n");
			break;
		case '"':
			printf("¬ведены ковычки.\n");
			break;
		case '\'':
			printf("¬ведена ковычка.\n");
			break;
		case ')':
			printf("¬ведена скобка.\n");
			break;
		case '(':
			printf("¬ведена скобка.\n");
			break;
		default:
			printf("¬веден не знак препинани€.\n");
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