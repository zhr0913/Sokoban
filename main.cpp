#include<iostream>
#include<cstdlib>
#include"Game.h"
#include"Map.h"
int main()
{
	Map GameMap;
	Player player;
	GameMap.Show();
	while (1)
	{
		player.move();
		if (player.IsMove == true)//��⵽�����½���
		{
			system("cls");
			GameMap.Show();
			player.Debug();
			player.IsMove = false;
		}
	}
	system("pause");
	return 0;
}