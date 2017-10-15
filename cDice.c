#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int roll(int die[]);
void helpPage(void);

/*
 * Test
 * */

int main(int argc, char ** argv)
{
    prinf('hello\n');


	int D4[4] = { 1, 2, 3, 4 };
	int D6[6] = { 1, 2, 3 ,4, 5, 6 };
	int D8[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int D10[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int D12[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int D20[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	int D100[100] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	int *d4 = D4;
	int *d6 = D6;
	int *d8 = D8;
	int *d10 = D10;
	int *d12 = D12;
	int *d20 = D20;
	int *d100 = D100;

	int result;

	if (argc > 1)
	{
		if (strcmp(argv[1], "d4")==0)
		{
			int result = roll(d4);
			printf("%i\n", result);
		}
 		else if (strcmp(argv[1], "d6")==0)
		{
			int result = roll(d6);
			printf("%i\n", result);
		}
 		else if (strcmp(argv[1], "d8")==0)
		{
			int result = roll(d8);
			printf("%i\n", result);
		}
 		else if (strcmp(argv[1], "d10")==0)
		{
			int result = roll(d10);
			printf("%i\n", result);
		}
 		else if (strcmp(argv[1], "d12")==0)
		{
			int result = roll(d12);
			printf("%i\n", result);
		}
 		else if (strcmp(argv[1], "d20")==0)
		{
			int result = roll(d20);
			printf("%i\n", result);
		}
  		else if (strcmp(argv[1], "d100")==0)
		{
			int result = roll(d100);
			printf("%i\n", result);
		}
		else
		{
			helpPage();
		}	
	}
	else
	{
		helpPage();		
	}
}

int roll(int die[])
{
	int i;
	int r;
	int length = sizeof(*die);
	int result;
	srand((unsigned) time(NULL));

	r = rand() % length;
	result = die[r];
	
	return result;
	printf("$i\n", result);
}

void helpPage(void)
{
	printf("It appears something went wrong...\n");
	printf("The corret syntax is ./[COMPILED PROGRAM] [ARGUMENT]\n");

	printf("----------Arguments----------\n");
	printf("-d4\tRolls a d4 die\n");
	printf("-d6\tRolls a d6 die\n");
	printf("-d8\tRolls a d8 die\n");
	printf("-d10\tRolls a d10 die\n");
	printf("-d12\tRolls a d12 die\n");
	printf("-d20\tRolls a d20 die\n");
	printf("-d100\tRolls a d100 die\n");
}
