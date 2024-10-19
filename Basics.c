#include <stdio.h>

int main() {
    char name[50]; // For storing the name
    int age;       // For storing age
    char ch;      // For storing a character

    // Get user input for name
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Read string input

    // Get user input for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Clear the input buffer to handle leftover newline character
    getchar(); 

    // Get user input for favorite character
    printf("Enter your favorite character: ");
    ch = getchar(); 

    // Output results
    printf("\nHello %sYou are %d years old.\n", name, age);
    printf("Your favorite character is: ");
    putchar(ch); 
    printf("\n");

    return 0;
}
