#include <stdio.h>
#include <locale.h>
#include<time.h>
#include <string.h>
#include "Header1.h"
#include "Header.h"
#include<iostream>

void main()
{
	srand(time(NULL));
	Gamer *team = createTeam();
	Gamer forvard;
	int max = team[0].countGame;
	for (int i = 0; i < 11; i++)
	{
		if (team[i].countGame > max)
		{
			max = team[0].countGame;
			forvard = team[i];
		}
		
	}
	printf("Best forvard%s\n", forvard.fullName);
	printf("Best forvard 5\n");
	for (int i = 0; i < 11; i++)
	{
		if (team[i].countGame < 5)
		{
			printInfo(&team[i], 1);
		}
	}
}


