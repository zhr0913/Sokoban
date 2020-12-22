#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<string>
#include"Game.h"
#include"Map.h"

struct MapLibrary MapLib;

int Global_Map[10][10];//创建全局性地图数组方便各对象调用

Player::Player()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (Global_Map[i][j] == 2)
			{
				m_Player_x = j;
				m_Player_y = i;
			}
		}
	}
}

void Player::Debug()
{
	std::cout << "\nm_Player_x:" << m_Player_x << " m_Player_y:" << m_Player_y;
	std::cout << " y+1:" << Global_Map[m_Player_y + 1][m_Player_x];
	std::cout << " y-1:" << Global_Map[m_Player_y - 1][m_Player_x];
	std::cout << " x+1:" << Global_Map[m_Player_y][m_Player_x + 1];
	std::cout << " x-1:" << Global_Map[m_Player_y][m_Player_x - 1];
}

void Player::move()
{
	char key;
	if (_kbhit())
	{
		key = _getch();
		if (key == 'w')
		{
			if (Global_Map[m_Player_y - 1][m_Player_x] == 0)
			{
				if (Global_Map[m_Player_y][m_Player_x] == 2)
				{
					Global_Map[m_Player_y][m_Player_x] = 0;
				}
				if (Global_Map[m_Player_y][m_Player_x] == 6)
				{
					Global_Map[m_Player_y][m_Player_x] = 4;
				}
				m_Player_y--;
				Global_Map[m_Player_y][m_Player_x] = 2;
				IsMove = true;
			}
			if (Global_Map[m_Player_y - 1][m_Player_x] == 4)
			{
				if (Global_Map[m_Player_y][m_Player_x] == 2)
				{
					Global_Map[m_Player_y][m_Player_x] = 0;
				}
				if (Global_Map[m_Player_y][m_Player_x] == 6)
				{
					Global_Map[m_Player_y][m_Player_x] = 4;
				}
				m_Player_y--;
				Global_Map[m_Player_y][m_Player_x] = 6;
				IsMove = true;
			}
			if (Global_Map[m_Player_y - 1][m_Player_x] == 3)
			{
				if (Global_Map[m_Player_y - 2][m_Player_x] == 0)
				{
					if (Global_Map[m_Player_y][m_Player_x] == 2)
					{
						Global_Map[m_Player_y][m_Player_x] = 0;
					}
					if (Global_Map[m_Player_y][m_Player_x] == 6)
					{
						Global_Map[m_Player_y][m_Player_x] = 4;
					}
					m_Player_y--;
					if (Global_Map[m_Player_y][m_Player_x] == 3)
					{
						Global_Map[m_Player_y][m_Player_x] = 2;
					}
					if (Global_Map[m_Player_y][m_Player_x] == 5)
					{
						Global_Map[m_Player_y][m_Player_x] = 6;
					}
					Global_Map[m_Player_y - 1][m_Player_x] = 3;
					IsMove = true;
				}
				if (Global_Map[m_Player_y - 2][m_Player_x] == 4)
				{
					if (Global_Map[m_Player_y][m_Player_x] == 2)
					{
						Global_Map[m_Player_y][m_Player_x] = 0;
					}
					if (Global_Map[m_Player_y][m_Player_x] == 6)
					{
						Global_Map[m_Player_y][m_Player_x] = 4;
					}
					m_Player_y--;
					if (Global_Map[m_Player_y][m_Player_x] == 3)
					{
						Global_Map[m_Player_y][m_Player_x] = 2;
					}
					if (Global_Map[m_Player_y][m_Player_x] == 4)
					{
						Global_Map[m_Player_y][m_Player_x] = 6;
					}
					Global_Map[m_Player_y - 1][m_Player_x] = 5;
					IsMove = true;
				}
			}
			if (Global_Map[m_Player_y - 1][m_Player_x] == 5 && Global_Map[m_Player_y - 2][m_Player_x] != 1 && Global_Map[m_Player_y - 2][m_Player_x] != 3 && Global_Map[m_Player_y - 2][m_Player_x] != 3 && Global_Map[m_Player_y - 2][m_Player_x] != 5)
			{
				if (Global_Map[m_Player_y][m_Player_x] == 2)
				{
					Global_Map[m_Player_y][m_Player_x] = 0;
				}
				if (Global_Map[m_Player_y][m_Player_x] == 6)
				{
					Global_Map[m_Player_y][m_Player_x] = 4;
				}
				m_Player_y--;
				if (Global_Map[m_Player_y][m_Player_x] == 5)
				{
					Global_Map[m_Player_y][m_Player_x] = 6;
				}
				/*if (Global_Map[m_Player_y][m_Player_x] == 4)
				{
					Global_Map[m_Player_y][m_Player_x] = 6;
				}*/
				Global_Map[m_Player_y - 1][m_Player_x] = 5;
				IsMove = true;
			}
		}
		if (key == 's')
		{
			if (Global_Map[m_Player_y + 1][m_Player_x] == 0)
			{
				if (Global_Map[m_Player_y][m_Player_x] == 2)
				{
					Global_Map[m_Player_y][m_Player_x] = 0;
				}
				if (Global_Map[m_Player_y][m_Player_x] == 6)
				{
					Global_Map[m_Player_y][m_Player_x] = 4;
				}
				m_Player_y++;
				Global_Map[m_Player_y][m_Player_x] = 2;
				IsMove = true;
			}
			if (Global_Map[m_Player_y + 1][m_Player_x] == 4)
			{
				if (Global_Map[m_Player_y][m_Player_x] == 2)
				{
					Global_Map[m_Player_y][m_Player_x] = 0;
				}
				if (Global_Map[m_Player_y][m_Player_x] == 6)
				{
					Global_Map[m_Player_y][m_Player_x] = 4;
				}
				m_Player_y++;
				Global_Map[m_Player_y][m_Player_x] = 6;
				IsMove = true;
			}
			if (Global_Map[m_Player_y + 1][m_Player_x] == 3)
			{
				if (Global_Map[m_Player_y + 2][m_Player_x] == 0)
				{
					if (Global_Map[m_Player_y][m_Player_x] == 2)
					{
						Global_Map[m_Player_y][m_Player_x] = 0;
					}
					if (Global_Map[m_Player_y][m_Player_x] == 6)
					{
						Global_Map[m_Player_y][m_Player_x] = 4;
					}
					m_Player_y++;
					if (Global_Map[m_Player_y][m_Player_x] == 3)
					{
						Global_Map[m_Player_y][m_Player_x] = 2;
					}
					if (Global_Map[m_Player_y][m_Player_x] == 5)
					{
						Global_Map[m_Player_y][m_Player_x] = 6;
					}
					Global_Map[m_Player_y + 1][m_Player_x] = 3;
					IsMove = true;
				}
				if (Global_Map[m_Player_y + 2][m_Player_x] == 4)
				{
					if (Global_Map[m_Player_y][m_Player_x] == 2)
					{
						Global_Map[m_Player_y][m_Player_x] = 0;
					}
					if (Global_Map[m_Player_y][m_Player_x] == 6)
					{
						Global_Map[m_Player_y][m_Player_x] = 4;
					}
					m_Player_y++;
					if (Global_Map[m_Player_y][m_Player_x] == 3)
					{
						Global_Map[m_Player_y][m_Player_x] = 2;
					}
					if (Global_Map[m_Player_y][m_Player_x] == 4)
					{
						Global_Map[m_Player_y][m_Player_x] = 6;
					}
					Global_Map[m_Player_y + 1][m_Player_x] = 5;
					IsMove = true;
				}
			}
			if (Global_Map[m_Player_y + 1][m_Player_x] == 5 && Global_Map[m_Player_y + 2][m_Player_x] != 1 && Global_Map[m_Player_y + 2][m_Player_x] != 3 && Global_Map[m_Player_y + 2][m_Player_x] != 5)
			{
				if (Global_Map[m_Player_y][m_Player_x] == 2)
				{
					Global_Map[m_Player_y][m_Player_x] = 0;
				}
				if (Global_Map[m_Player_y][m_Player_x] == 6)
				{
					Global_Map[m_Player_y][m_Player_x] = 4;
				}
				m_Player_y++;
				if (Global_Map[m_Player_y][m_Player_x] == 5)
				{
					Global_Map[m_Player_y][m_Player_x] = 6;
				}
				/*if (Global_Map[m_Player_y][m_Player_x] == 4)
				{
					Global_Map[m_Player_y][m_Player_x] = 6;
				}*/
				Global_Map[m_Player_y + 1][m_Player_x] = 5;
				IsMove = true;
			}
		}
		if (key == 'a')
		{
			if (Global_Map[m_Player_y][m_Player_x - 1] == 0)
			{
				if (Global_Map[m_Player_y][m_Player_x] == 2)
				{
					Global_Map[m_Player_y][m_Player_x] = 0;
				}
				if (Global_Map[m_Player_y][m_Player_x] == 6)
				{
					Global_Map[m_Player_y][m_Player_x] = 4;
				}
				m_Player_x--;
				Global_Map[m_Player_y][m_Player_x] = 2;
				IsMove = true;
			}
			if (Global_Map[m_Player_y][m_Player_x - 1] == 4)
			{
				if (Global_Map[m_Player_y][m_Player_x] == 2)
				{
					Global_Map[m_Player_y][m_Player_x] = 0;
				}
				if (Global_Map[m_Player_y][m_Player_x] == 6)
				{
					Global_Map[m_Player_y][m_Player_x] = 4;
				}
				m_Player_x--;
				Global_Map[m_Player_y][m_Player_x] = 6;
				IsMove = true;
			}
			if (Global_Map[m_Player_y][m_Player_x - 1] == 3)
			{
				if (Global_Map[m_Player_y][m_Player_x - 2] == 0)
				{
					if (Global_Map[m_Player_y][m_Player_x] == 2)
					{
						Global_Map[m_Player_y][m_Player_x] = 0;
					}
					if (Global_Map[m_Player_y][m_Player_x] == 6)
					{
						Global_Map[m_Player_y][m_Player_x] = 4;
					}
					m_Player_x--;
					if (Global_Map[m_Player_y][m_Player_x] == 3)
					{
						Global_Map[m_Player_y][m_Player_x] = 2;
					}
					if (Global_Map[m_Player_y][m_Player_x] == 5)
					{
						Global_Map[m_Player_y][m_Player_x] = 6;
					}
					Global_Map[m_Player_y][m_Player_x - 1] = 3;
					IsMove = true;
				}
				if (Global_Map[m_Player_y][m_Player_x - 2] == 4)
				{
					if (Global_Map[m_Player_y][m_Player_x] == 2)
					{
						Global_Map[m_Player_y][m_Player_x] = 0;
					}
					if (Global_Map[m_Player_y][m_Player_x] == 6)
					{
						Global_Map[m_Player_y][m_Player_x] = 4;
					}
					m_Player_x--;
					if (Global_Map[m_Player_y][m_Player_x] == 3)
					{
						Global_Map[m_Player_y][m_Player_x] = 2;
					}
					if (Global_Map[m_Player_y][m_Player_x] == 4)
					{
						Global_Map[m_Player_y][m_Player_x] = 6;
					}
					Global_Map[m_Player_y][m_Player_x - 1] = 5;
					IsMove = true;
				}
			}
			if (Global_Map[m_Player_y][m_Player_x - 1] == 5 && Global_Map[m_Player_y][m_Player_x - 2] != 1 && Global_Map[m_Player_y][m_Player_x - 2] != 3 && Global_Map[m_Player_y][m_Player_x - 2] != 5)
			{
				if (Global_Map[m_Player_y][m_Player_x] == 2)
				{
					Global_Map[m_Player_y][m_Player_x] = 0;
				}
				if (Global_Map[m_Player_y][m_Player_x] == 6)
				{
					Global_Map[m_Player_y][m_Player_x] = 4;
				}
				m_Player_x--;
				if (Global_Map[m_Player_y][m_Player_x] == 5)
				{
					Global_Map[m_Player_y][m_Player_x] = 6;
				}
				/*if (Global_Map[m_Player_y][m_Player_x] == 4)
				{
					Global_Map[m_Player_y][m_Player_x] = 6;
				}*/
				Global_Map[m_Player_y][m_Player_x - 1] = 5;
				IsMove = true;
			}
		}
		if (key == 'd')
		{
			if (Global_Map[m_Player_y][m_Player_x + 1] == 0)
			{
				if (Global_Map[m_Player_y][m_Player_x] == 2)
				{
					Global_Map[m_Player_y][m_Player_x] = 0;
				}
				if (Global_Map[m_Player_y][m_Player_x] == 6)
				{
					Global_Map[m_Player_y][m_Player_x] = 4;
				}
				m_Player_x++;
				Global_Map[m_Player_y][m_Player_x] = 2;
				IsMove = true;
			}
			if (Global_Map[m_Player_y][m_Player_x + 1] == 4)
			{
				if (Global_Map[m_Player_y][m_Player_x] == 2)
				{
					Global_Map[m_Player_y][m_Player_x] = 0;
				}
				if (Global_Map[m_Player_y][m_Player_x] == 6)
				{
					Global_Map[m_Player_y][m_Player_x] = 4;
				}
				m_Player_x++;
				Global_Map[m_Player_y][m_Player_x] = 6;
				IsMove = true;
			}
			if (Global_Map[m_Player_y][m_Player_x + 1] == 3)
			{
				if (Global_Map[m_Player_y][m_Player_x + 2] == 0)
				{
					if(Global_Map[m_Player_y][m_Player_x] == 2)
					{
						Global_Map[m_Player_y][m_Player_x] = 0;
					}
					if (Global_Map[m_Player_y][m_Player_x] == 6)
					{
						Global_Map[m_Player_y][m_Player_x] = 4;
					}
					m_Player_x++;
					if (Global_Map[m_Player_y][m_Player_x] == 3)
					{
						Global_Map[m_Player_y][m_Player_x] = 2;
					}
					if (Global_Map[m_Player_y][m_Player_x] == 5)
					{
						Global_Map[m_Player_y][m_Player_x] = 6;
					}
					Global_Map[m_Player_y][m_Player_x + 1] = 3;
					IsMove = true;
				}
				if (Global_Map[m_Player_y][m_Player_x + 2] == 4)
				{
					if (Global_Map[m_Player_y][m_Player_x] == 2)
					{
						Global_Map[m_Player_y][m_Player_x] = 0;
					}
					if (Global_Map[m_Player_y][m_Player_x] == 6)
					{
						Global_Map[m_Player_y][m_Player_x] = 4;
					}
					m_Player_x++;
					if (Global_Map[m_Player_y][m_Player_x] == 3)
					{
						Global_Map[m_Player_y][m_Player_x] = 2;
					}
					if (Global_Map[m_Player_y][m_Player_x] == 4)
					{
						Global_Map[m_Player_y][m_Player_x] = 6;
					}
					Global_Map[m_Player_y][m_Player_x + 1] = 5;
					IsMove = true;
				}
			}
			if (Global_Map[m_Player_y][m_Player_x + 1] == 5 && Global_Map[m_Player_y][m_Player_x + 2] != 1 && Global_Map[m_Player_y][m_Player_x + 2] != 3 && Global_Map[m_Player_y][m_Player_x + 2] != 5)
			{
				if (Global_Map[m_Player_y][m_Player_x] == 2)
				{
					Global_Map[m_Player_y][m_Player_x] = 0;
				}
				if (Global_Map[m_Player_y][m_Player_x] == 6)
				{
					Global_Map[m_Player_y][m_Player_x] = 4;
				}
				m_Player_x++;
				if (Global_Map[m_Player_y][m_Player_x] == 5)
				{
					Global_Map[m_Player_y][m_Player_x] = 6;
				}
				/*if (Global_Map[m_Player_y][m_Player_x] == 4)
				{
					Global_Map[m_Player_y][m_Player_x] = 6;
				}*/
				Global_Map[m_Player_y][m_Player_x + 1] = 5;
				IsMove = true;
			}
		}
	}
}

Map::Map()
{
	//清空m_Map后根据m_Map_level进行地图导入操作
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			Global_Map[i][j] = 0;
		}
	}
	if (m_Map_level == 0)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				Global_Map[i][j] = MapLib.Level1[i][j];
			}
		}
	}
	if (m_Map_level == 1)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				Global_Map[i][j] = MapLib.Level2[i][j];
			}
		}
	}
}

void Map::Show()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (Global_Map[i][j] == 0)
			{
				std::cout << "  ";
			}
			if (Global_Map[i][j] == 1)
			{
				std::cout << "# ";
			}
			if (Global_Map[i][j] == 2)
			{
				std::cout << "P ";
			}
			if (Global_Map[i][j] == 3)
			{
				std::cout << "X ";
			}
			if (Global_Map[i][j] == 4)
			{
				std::cout << "O ";
			}
			if (Global_Map[i][j] == 5)//Box on the destination
			{
				std::cout << "@ ";
			}
			if (Global_Map[i][j] == 6)//Player on the destination
			{
				std::cout << "P ";
			}
		}
		std::cout << std::endl;
	}
}
