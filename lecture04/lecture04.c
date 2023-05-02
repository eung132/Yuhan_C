#include <stdio.h>
int main()
{
	int game = 0;

	printf("주인공의 공격력을 입력하세요 : ");
	scanf("%d",&game);
	
	printf("주인공은 공격력이 %d입니다.\n",game);
	printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n\n",game);

	int a =30;
	a = a-game;
	if(a>0)
	{
		printf("적의 잔여 HP : %d \n\n",a);
		printf("적이 주인공을 공격하여 주인공이 뒤졌습니다.\n");
		printf("Game Over");
	}
	 else
	{
		printf("적의 잔여 HP : 0 \n\n");
		printf("적을 물리쳤습니다!\n");
		printf("Happy End");
	}
	return 0;
}
