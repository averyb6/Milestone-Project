/*Avery Benis
This project was created by myself using the Visual Studio 2019 Software
ITT-310
February 24, 2021
Professor Jackson*/

#include <stdio.h>

int main()
{
	//int value for number 1 of the function
	int num1;
	//int value for number 2 of the function
	int num2;
	//int value for the operator selection
	int selection;
	//character value for the looping function
	char yes;

	//looping function start
	yes = 'y';
	while (yes == 'y' || yes == 'Y')
	{
		//Prompt the user to enter their first number for the equation
		printf("Please enter a number: \n");
		//scan for their answer to the previous question
		scanf_s("%d", &num1);

		//Prompt the user to enter their second number for the equation
		printf("Enter your second number: \n");
		//scan for their answer to the previous question
		scanf_s("%d", &num2);

		//Prompt the user to select an operator for their equation
		printf("Enter '1' for addition, '2' for subtraction, '3' for multiplication, '4' for division: \n");
		//Scan for their selection
		scanf_s("%d", &selection);

		//If statement that will be encountered if the user enters '1'
		if (selection == 1)
		{
			//Print the result of the user's addition problem
			printf("The Addition result is %d\n", num1 + num2);
		}
		//If statement that will be encountered if the user enters '2'
		else if (selection == 2)
		{
			//Print the result of the user's subtraction problem
			printf("The Subtraction result is %d\n", num1 - num2);
		}
		//If statement that will be encountered if the user enters '3'
		else if (selection == 3)
		{
			//Print the result of the user's multiplication problem
			printf("The Multiplication result is %d\n", num1 * num2);
		}
		//If statement that will be encountered if the user enters '4'
		else if (selection == 4)
		{
			//Print the result of the user's division problem
			printf("The Division result is %d\n", num1 / num2);
		}
	}
	//Ask the user if they would like to try another function
	printf("\nWould you like to try another function? (Y/N):");
	//Scan for their response
	scanf_s(" %c", &yes);

	//End of the Program
	return 0;

}

