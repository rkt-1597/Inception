#include <stdio.h>

int main() {
    // Declaration of variables with different data types
    int a = 10;               // Integer variable
    int b = 5;                // Another integer variable
    float c = 7.5;           // Floating-point variable
    double d = 3.14159;      // Double-precision variable
    char charVar = 'A';       // Character variable
    char stringVar[20] = "Hello"; // String variable

    // Basic arithmetic operations
    int sum = a + b;         // Addition
    int difference = a - b;  // Subtraction
    int product = a * b;     // Multiplication
    float division = a / (float)b; // Division (casting b to float)
    int modulo = a % b;      // Modulus

    // Demonstrating operator precedence
    int precedenceExample = a + b * c - d; // * and / have higher precedence than + and -

    // Printing the values of the variables
    printf("Integer a: %d\n", a);
    printf("Integer b: %d\n", b);
    printf("Float c: %.2f\n", c);
    printf("Double d: %.5f\n", d);
    printf("Character: %c\n", charVar);
    printf("String: %s\n", stringVar);

    // Printing results of arithmetic operations
    printf("\nArithmetic Operations:\n");
    printf("Sum (a + b): %d\n", sum);
    printf("Difference (a - b): %d\n", difference);
    printf("Product (a * b): %d\n", product);
    printf("Division (a / b): %.2f\n", division);
    printf("Modulo (a %% b): %d\n", modulo);
    
    // Showing operator precedence result
    printf("\nOperator Precedence Example (a + b * c - d): %.2f\n", precedenceExample);

    // Modify variables
    a += 5;    // Increase a by 5
    b *= 2;    // Multiply b by 2
    c -= 1.5;  // Decrease c by 1.5
    charVar = 'B'; // Change charVar to 'B'
    sprintf(stringVar, "World"); // Change stringVar to "World"

    // Printing the modified values of the variables
    printf("\nModified Values:\n");
    printf("Integer a: %d\n", a);
    printf("Integer b: %d\n", b);
    printf("Float c: %.2f\n", c);
    printf("Character: %c\n", charVar);
    printf("String: %s\n", stringVar);

    return 0;
}
