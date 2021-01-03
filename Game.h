#pragma once
#include<iostream>
#include<cstdlib>
#include<string>
//#include"Map.h"

class Player
{
public:
	Player();
	Player(const Player&) = delete;
	void move();
	bool IsMove;
	void Debug();
	void Update();
private:
	int m_Player_x;
	int m_Player_y;
};
/*class Box
{
public:
	Box();
	Box(const Box&) = delete;
private:
	
};*/
class Map
{
public:
	Map();
	Map(const Map&) = delete;
	void Show();
	void Update();
private:
	int m_Map_level = 0;
};
