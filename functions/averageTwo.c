#include <stdio.h>

/* Declaring the function */
float averageTwo(float a, float b);

int main()
{
	float num1, num2, average;

	// Take two  float inputs from the user
	printf("Enter the first number: ");
	scanf("%f", &num1);

	printf("Enter the second number: ");
	scanf("%f", &num2);

	// Call the function to store the average and calculate the result
	average = averageTwo(a, b);

	// print the average
	printf("The average is %.2f\n", average);

	return 0;
}

/* Define the function */
float averageTwo(float a, float b){
	float sum = a + b;
	return sum/2.0;
}
