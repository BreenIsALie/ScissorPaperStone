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

int main(void)
{
	int Player=0, PlayerScore = 0, CPUscore = 0;	/*Declaration for player choice and score counters*/
	srand(time(NULL));
	int CPU = 1 + (rand() % 4);					/*CPU randomizes choice and set it to random number between 1 - 3 */
	int ChoiceInput(void);						/*Player input function*/
	int CPUscoreUp(void);						/*CPU score function*/
	int PlayerScoreUp(void);					/*Player score function*/

	ChoiceInput();

	while (CPUscore < 10 && PlayerScore < 10)	/*Run loop until ether player or computer reaches 10 points*/
	{

		if (Player == CPU)						/*If Player and CPU are matched*/
		{
			printf("MAD has struck again and you are matched. Pick a new weapon:");
			ChoiceInput();
		}
		else if (Player == 1 && CPU == 2 || Player == 2 && CPU == 3 || Player == 3 && CPU == 1) /*If player has better then the computer*/
		{
			PlayerScoreUp();
			printf("\nCONGRATULATIONS: The foe has been defeated");
			ChoiceInput();
		}
		else if (Player == 2 && CPU == 1 || Player == 3 && CPU == 2 || Player == 1 && CPU == 3) /*If CPU has better then Player*/
		{
			CPUscoreUp();
			printf("\nBITTER DEFEAT: You have been vanquished by the foe");
			ChoiceInput();
		}
		else if (Player == 4)		/*If player picks 4 to exit, Break loop and go to exit*/
		{
			break;
		}
		else						/*If Player picks a number not in the list*/
		{
			printf("HOLD IT ! No house rules or improvised weapons. Pick one from the list");
			ChoiceInput();
		}
	}

	printf("\nGame has ended. You got", PlayerScore, "and the computer got", CPUscore);
	printf("\n\nPress any key to exit");
	getchar();
	return 0;
}	

int ChoiceInput()	/*Function to present user with choice prompt*/
{
	int Player;
	printf("\nPick your weapon\n1: Scissor\n2: Paper\n3: Stone\n4: Exit\n");
	scanf_s("%d", &Player);
}

int PlayerScoreUp()	/*Function to add to the players score if he wins a round*/
{
	int PlayerScore=0;
	PlayerScore++;
}

int CPUscoreUp()	/*Function to add to the computers score if it wins a round*/
{
	int CPUscore=0;
	CPUscore++;
}


