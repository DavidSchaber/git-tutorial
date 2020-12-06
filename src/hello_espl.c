#include <stdio.h>
#include <espl_lib.h>

int main()
{
	int running = 1;
	int test; 
	int number;
	char* x;
	while (running != 0)
	{
		
		printf("Enter your number of wish below!\n");
		
		scanf("%d", &number);

		x = num_to_words(number);
		
		printf("This is the converted Number you wrote: %s\n", x);

		printf("If you wish to continue enter 1 (or any other number except 0) or if you wish to exit enter 0\n");
		scanf("%i", &test);
		if (test == 0)
		{
			running = 0;
		}
		

	}
	printf("Thank you for working with this programm\n");
	return 0;
}