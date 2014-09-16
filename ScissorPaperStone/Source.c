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
	srand(time(0));
	int CPU = rand("%d") %4 +1;

	printf("\nWelcome to Scissor, Paper, Stone. Pick your weapon:");
	printf("\n1: Scissor\n2: Paper\n3: Stone\n4: Exit\n");
	scanf_s("%d", &PC);

	while (PCScore < 10 && CPUScore < 10)
	{
		if (PC == CPU)		/*If PC and CPU are matched*/
		{
			printf("\nMAD has struck again\nPick a new weapon");	
			printf("\n1: Scissor\n2: Paper\n3: Stone\n4: Exit\n");
			scanf_s("%d", &PC);
		}

		else if (PC == 1 && CPU == 2 || PC == 2 && CPU == 3 || PC == 3 && CPU == 1) /*If PC has better then CPU*/
		{
			printf("Your score: %d", PCScore++);
			printf("CPU score: %d", CPUScore);
			printf("\nCONGRATULATIONS: The foe has been defeated");
			printf("\n1: Scissor\n2: Paper\n3: Stone\n4: Exit\n");
			scanf_s("%d", &PC);
		}
		else if (PC == 2 && CPU == 1 || PC == 3 && CPU == 2 || PC == 1 && CPU == 3) /*If CPU has better then PC*/
		{
			printf("Your score: %d", PCScore);
			printf("CPU score: %d", CPUScore++);
			printf("\nBITTER DEFEAT: You have been vanquished by the foe");
			printf("\n1: Scissor\n2: Paper\n3: Stone\n4: Exit\n");
			scanf_s("%d", &PC);
		}
		else if (PC == 4)	/*Exit condition*/
		{
			break;
		}		
	}
	printf("\nPress any key to exit\n");
	getchar();
	return 0;
}