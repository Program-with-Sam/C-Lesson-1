// C-Lesson-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
	// Declare the char array
	char str[100];
	// Output a prompt
	printf("What is your name?: ");
	// Get the user input
	gets_s(str);
	// Print a response
	printf("\nOh! Your name is ");
	// Output the user input
	puts(str);
	// Return
	return 0;
}

