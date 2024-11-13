#include <stdio.h>
#include <math.h>   // For advanced functions like power and square root

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
int modulus(int a, int b);
float power(float base, float exponent);
float square_root(float num);
void display_menu();

int main() {
    int choice;
    float num1, num2, result;
    int int_num1, int_num2; // For modulus operation

    while (1) {
        // Display the calculator menu
        display_menu();
        printf("Choose an operation: ");
        scanf("%d", &choice);

        if (choice == 8) {
            printf("Exiting...\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = subtract(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = multiply(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if (num2 != 0) {
                    result = divide(num1, num2);
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;
            case 5:
                printf("Enter two integers: ");
                scanf("%d %d", &int_num1, &int_num2);
                if (int_num2 != 0) {
                    result = modulus(int_num1, int_num2);
                    printf("Result: %d\n", (int)result);
                } else {
                    printf("Error: Modulus by zero!\n");
                }
                break;
            case 6:
                printf("Enter base and exponent: ");
                scanf("%f %f", &num1, &num2);
                result = power(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 7:
                printf("Enter a number: ");
                scanf("%f", &num1);
                if (num1 >= 0) {
                    result = square_root(num1);
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Cannot calculate the square root of a negative number!\n");
                }
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function definitions
void display_menu() {
    printf("\n--- Calculator Menu ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Square Root\n");
    printf("8. Exit\n");
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int modulus(int a, int b) {
    return a % b;
}

float power(float base, float exponent) {
    return pow(base, exponent);
}

float square_root(float num) {
    return sqrt(num);
}
