#include <stdio.h>

int main(void)
{
	/*printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");*/

	// ++
	/*int a = 10;
		printf("a 는 %d\n", a);
		a++;
        printf("a 는 %d\n", a);*/


	//b = b + 1
	/*int b = 20;
	printf("b 는 %d\n", ++b);
	printf("b 는 %d\n", b++);
	printf("b 는 %d\n", b);*/

	/*int i = 1;
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
*/
	//반복문
	// for while do while
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}*/

	//while (조건) {}


	/*int i = 1;
	while (i<=10)
	{
		printf("Hello World %d\n", i++);
	}*/

	//do {} while (조건)
	/*int i = 1;
	do{
printf("Hello World %d\n", i++);
	} while (i <= 10);*/

	//이중 반복문

	/*for (int i = 1; i <= 3; i++)
	{
		printf("첫 번째 반복문 : %d\n" , i);

		for (int j = 1; j <= 5; j++)
		{
			printf("두 번째 반복문 : %d\n" , j);
		}

	}*/

//구구단

	/*for (int i = 2; i <= 9; i++)
	{
		printf("%d단 계산\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf(" %d * %d = %d\n", i, j, i * j);
		}
	}*/

	//별찍기

	/*for ( int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//거꾸로 별

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - 1; j++)
		{
			printf("");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;

}