#include <stdio.h>
#include <stdlib.h>

int print_title_screen()
{
	system("cls");	// 그 화면 지워주는 거래.. 깔끔하게

	printf("\t#############################\n");
	printf("\t##                         ##\n");
	printf("\t##         Dino Run        ##\n");
	printf("\t##          V.0.1          ##\n");
	printf("\t##                         ##\n");
	printf("\t##  1. Start Game          ##\n");
	printf("\t##  2. How to Play         ##\n");
	printf("\t##  3. Exit                ##\n");
	printf("\t##                         ##\n");
	printf("\t#############################\n");
}

int print_how_to_play_screen()
{
	system("cls");

	printf("\t#############################\n");
	printf("\t##                         ##\n");
	printf("\t##      To Avoid Enemy     ##\n");
	printf("\t##                         ##\n");
	printf("\t##                         ##\n");
	printf("\t##      press space bar    ##\n");
	printf("\t##         to jump         ##\n");
	printf("\t##                         ##\n");
	printf("\t##                         ##\n");
	printf("\t#############################\n");
}


int main()
{
	int key_input = 0;


	print_title_screen();

	while(1)
	{		
		printf("\n\tinput : ");
		scanf("%d", &key_input);

		if(key_input == 1)
		{
			print_title_screen();
		}
		else if(key_input == 2)
		{
			print_how_to_play_screen();
			while(1)
			{
				printf("\n\tReturn to menu? (1.yes 2.no) : ");
				scanf("%d", &key_input);
				if(key_input == 1)
				{
					print_title_screen();
					break;
				}
				else
				{
					print_how_to_play_screen();
				}
			}
		}
		else if(key_input == 3)
		{
			printf("\t          game end       	  \n\n");
			break;
		}
		else
		{
			print_title_screen();
		}
	}
}
