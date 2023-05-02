#include <stdio.h>
#include <stdlib.h>

void print_title_screen()
{
	system("cls");

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
	printf("\t##      press space bar	   ##\n");
	printf("\t##         to jump         ##\n");
	printf("\t##                         ##\n");
	printf("\t##                         ##\n");
	printf("\t#############################\n");
}


void main()
{
	int top_loop , sub_loop = 1;
	int key_input = '0';


	print_title_screen();

	while(top_loop)
	{		
		printf("\n\tinput : ");
		scanf("%d", &key_input);
		switch(key_input)
		{
			case 1: 
				break;
				
			case 2: 
					print_how_to_play_screen();
					sub_loop = 1;

					while(sub_loop)
					{
						printf("\n\tReturn to menu? (1.yes 2.no) : ");
						scanf("%d", &key_input);
						switch(key_input)
						{
							case 1: 
									print_title_screen();
									sub_loop = 0;
								break;
								
							case 2: 
									print_how_to_play_screen();
								break;
						}
					}
				break;

			case 3: 
				printf("\t          game end       	  \n");
				top_loop = 0;
			
				break;
		}
	}
	
}
