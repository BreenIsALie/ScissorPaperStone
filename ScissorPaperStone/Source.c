/*Scissor Paper Stone game
Mathias Jönsson*/

/*Note on logic
Scissor > Paper
Paper > Stone
Stone > Scissor*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int PC, PCScore=0, CPUScore=0;		/*PC=Player Character, CPU = Computer Choice*/
	srand(time(NULL));
	int CPU = rand() % 4;

	printf("\nWelcome to Scissor, Paper, Stone. Pick your weapon:");
	printf("\n1: Scissor\n2: Paper\n3: Stone\n4: Exit");
	scanf_s("%d", &PC);

	while (PCScore < 10 || CPUScore < 10 || PC==4);
	{
	
		if (PC == CPU)
		{
			printf("\nMAD has struck again");			
		}

		else if (PC == 1 && CPU == 2 || PC == 2 && CPU == 3 || PC == 3 && CPU == 1)
		{
			printf("\nCONGRATULATIONS: The foe has been defeated");
		}
		else if (PC == 2 && CPU == 1 || PC == 3 && CPU == 2 || PC == 1 && CPU == 3)
		{
			printf("\nBITTER DEFEAT: You have been vanquished by the foe");
		}
	}

	printf("\n1: Scissor\n2: Paper\n3: Stone\n4: Exit");
	scanf_s("%d", &PC);

}