#include <iostream>
#include "invaders.h"
#include <string>
#include "fastinvader.h"
#include "fatinvader.h"
#include "player.h"

int main()
{
	Invaders crab[20];


	fastInvader octopus[20];
	

	fatInvader squid[20];



	
	for (int i = 0; i < 20; i++)
	{
		if (crab[i].health > 0)
		{
			std::cout << "c";
		}
		else
		{
			std::cout << " ";
		}
		if (i == 9)
		{
			std::cout << std::endl;
		}
		
	}
	std::cout << std::endl;

	for (int i = 0; i < 20; i++)
	{
		if (octopus[i].health > 0)
		{
			std::cout << "o";
		}
		else
		{
			std::cout << " ";
		}
		if (i == 9)
		{
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;

	for (int i = 0; i < 20; i++)
	{
		if (squid[i].health > 0)
		{
			std::cout << "s";
		}
		else
		{
			std::cout << " ";
		}
		if (i == 9)
		{
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;

	return 0;
}





	