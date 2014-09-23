/*Scissor Paper Stone game
Mathias Jönsson*/

/*Notes:

Scissor > Paper
Paper > Stone
Stone > Scissor

CPU = The program that plays against the player. Named CPU due to it being shorter. Think CPU players in Smash Bros or something*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ChoiceInput();							/*Player input function*/
int CPUscoreUp();							/*CPU score function*/
int PlayerScoreUp();						/*Player score function*/
int Random1();


int main(void)
{

	int Player, PlayerScore=0, CPUscore=0;			/*Declaration for player choice and score counters*/
	int CPU;

	while (CPUscore < 10 && PlayerScore < 10)		/*Run loop until ether player or computer reaches 10 points*/
	{
		Player = ChoiceInput();
		CPU = Random1();
		
		if (Player == CPU)							/*If Player and CPU are matched*/
		{
			printf("MAD has struck again and you are matched. Pick a new weapon:");
			printf("\nPlayer Score: %d", PlayerScore);
			printf("\nComputer Score: %d", CPUscore);
		}
		else if (Player == 1 && CPU == 2 || Player == 2 && CPU == 3 || Player == 3 && CPU == 1)		 /*If player has better then the computer*/
		{
			PlayerScore++;
			printf("\nCONGRATULATIONS: The foe has been defeated");
			printf("\nPlayer Score: %d", PlayerScore);
			printf("\nComputer Score: %d", CPUscore);
		}
		else if (Player == 2 && CPU == 1 || Player == 3 && CPU == 2 || Player == 1 && CPU == 3)		/*If CPU has better then Player*/
		{
			CPUscore++;
			printf("\nBITTER DEFEAT: You have been vanquished by the foe");
			printf("\nPlayer Score: %d", PlayerScore);
			printf("\nComputer Score: %d", CPUscore);
		}
		else if (Player == 4)		/*If player picks 4 to exit, Break loop and go to exit*/
		{
			break;
		}
		else						/*If Player picks a number not in the list*/
		{
			printf("HOLD IT ! No house rules or improvised weapons. Pick one from the list");
		}
	}
	fflush(stdin);
	printf("\n\n\nGame has ended\nPlayer Score: %d", PlayerScore);
	printf("\nComputer Score: %d", CPUscore);
	printf("\n\nPress any key to exit");
	getchar();
	return 0;
}	

int ChoiceInput()				/*Function to present user with choice prompt*/
{
	int Player=0;
	printf("\nPick your weapon\n1: Scissor\n2: Paper\n3: Stone\n4: Exit\n");
	scanf_s("%d", &Player);
	return Player;
}
int Random1()
{
	unsigned Seed;
	Seed = (unsigned)time(NULL);
	srand(Seed);
	int CPU = (1 + (rand() % 3));
	return CPU;
}
