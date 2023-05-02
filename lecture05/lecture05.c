#include <stdio.h>

int print_title_screen()
{
	printf("#############################\n");
	printf("##                         ##\n");
	printf("##         Dino Run        ##\n");
	printf("##          V.0.1          ##\n");
	printf("##                         ##\n");
	printf("##  1. Start Game          ##\n");
	printf("##  2. How to Play         ##\n");
	printf("##  3. Exit                ##\n");
	printf("##                         ##\n");
	printf("#############################\n");
	
	return 0;
}
int print_how_to_play_screen()
{
	printf("#############################\n");
	printf("##                         ##\n");
	printf("##      To Avoid Enemy     ##\n");
	printf("##                         ##\n");
	printf("##                         ##\n");
	printf("##      press space bar	   ##\n");
	printf("##         to jump         ##\n");
	printf("##                         ##\n");
	printf("##                         ##\n");
	printf("#############################\n");

	return 0;
}


int main()
{
	int key_input = 0;
	print_title_screen();

	return 0;
}
