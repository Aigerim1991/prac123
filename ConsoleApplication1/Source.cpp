#include <stdio.h>
#include <locale.h>
#include<time.h>
#include <string.h>
#include "Header1.h"
#include "Header.h"
#include<iostream>

void crateName(char*Name,int len1)
{
	for (int i = 0;i < len1 - 1;i++)
	{
		*(Name + i) = (char)(95 + rand() % 25);
	}
	*(Name + len1) = '\0';
}

void printInfo(Gamer * team, int length)
{
	printf("------Infor about Ordabasy team ---\n");
	for (int i = 0;i < length;i++)
	{
		printf("N%2d %s CountGosl: %d; CounMatch: %d\n", i, team[i].fullName, team[i].countgame, team[i].countGame);
	}
}
Amplua getAmplua()
{
	return (Amplua)(0 + rand() % 2);
}
Gamer * createTeam()
{
	Gamer *team=(Gamer*)calloc(11,sizeof(Gamer));
	if (team != NULL)
	{
		for (int i = 0;i < 11;i++)
	{
		crateName(team[i].fullName, 50);
		team[i].age = 20 + rand() % 20;
		team[i].countgame= 20 + rand() % 20;
		team[i].countGame = 20 + rand() % 20;
		team[i].Amplua = getAmplua();
		printInfo(team, 11);
	}
	}
	
	else {
		printf("Exit\n");

	}
	return team;

}


