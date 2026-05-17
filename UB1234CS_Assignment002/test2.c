#include <stdio.h>
#include <math.h>

// ==========================================
// TASK 4 FUNCTIONS (Declared at the top)
// ==========================================

// Q8: Functions for Circle Area and Circumference
float circleArea(float r) {
    return 3.14159 * r * r;
}

float circleCircumference(float r) {
    return 2 * 3.14159 * r;
}

// Q9: Function to check if a number is a palindrome
int isPalindrome(int n) {
    int original = n;
    int reversed = 0;
    int remainder;
    
    // Handle negative numbers by taking the absolute value
    if (n < 0) {
        n = -n;
        original = n;
    }

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    if (original == reversed) {
        return 1; // True
    } else {
        return 0; // False
    }
}


// ==========================================
// QUESTION SOLVER FUNCTIONS
// ==========================================

void runQ1() {
    float c, f;
    printf("\n--- Q1: Celsius to Fahrenheit ---\n");
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9.0 / 5.0) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit\n", c, f);
}

void runQ2() {
    int a, b;
    printf("\n--- Q2: Swap Without Third Variable ---\n");
    printf("Enter two integers (A and B): ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: A = %d, B = %d\n", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("After swapping: A = %d, B = %d\n", a, b);
}

void runQ3() {
    int year;
    printf("\n--- Q3: Leap Year Checker ---\n");
    printf("Enter a year: ");
    scanf("%d", &year);
    
    // Divisible by 400 OR divisible by 4 but not 100
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is NOT a Leap Year.\n", year);
    }
}

void runQ4() {
    float num1, num2;
    char op;
    printf("\n--- Q4: Simple Calculator ---\n");
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op); // Space before %c catches stray newlines
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    switch(op) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }
}

void runQ5() {
    int n, isPrime = 1;
    printf("\n--- Q5: Prime Number Checker ---\n");
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    if (n <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    
    if (isPrime) {
        printf("%d is a Prime Number.\n", n);
    } else {
        printf("%d is NOT a Prime Number.\n", n);
    }
}

void runQ6() {
    int n, t1 = 0, t2 = 1, nextTerm;
    printf("\n--- Q6: Fibonacci Series ---\n");
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", t1);
            continue;
        }
        if (i == 2) {
            printf("%d ", t2);
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%d ", nextTerm);
    }
    printf("\n");
}

void runQ7() {
    int n, reversed = 0, remainder, original;
    printf("\n--- Q7: Reverse a Number ---\n");
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;
    
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    printf("The reverse of %d is %d\n", original, reversed);
}

void runQ8() {
    float radius;
    printf("\n--- Q8: Circle Area and Circumference ---\n");
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    printf("Area = %.2f\n", circleArea(radius));
    printf("Circumference = %.2f\n", circleCircumference(radius));
}

void runQ9() {
    int n;
    printf("\n--- Q9: Palindrome Checker ---\n");
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    if (isPalindrome(n)) {
        printf("%d is a Palindrome.\n", n);
    } else {
        printf("%d is NOT a Palindrome.\n", n);
    }
}


// ==========================================
// MAIN FUNCTION (MENU)
// ==========================================

int main() {
    int choice;
    
    do {
        printf("\n==============================================\n");
        printf("    COMPUTER PROGRAMMING ASSESSMENT MENU      \n");
        printf("==============================================\n");
        printf(" TASK 1: Variables, Data Types & Operators\n");
        printf("   1. Q1: Celsius to Fahrenheit\n");
        printf("   2. Q2: Swap Without Third Variable\n");
        printf(" TASK 2: Statements\n");
        printf("   3. Q3: Leap Year Checker\n");
        printf("   4. Q4: Simple Calculator\n");
        printf(" TASK 3: Loops\n");
        printf("   5. Q5: Prime Number Checker\n");
        printf("   6. Q6: Fibonacci Series\n");
        printf("   7. Q7: Reverse a Number\n");
        printf(" TASK 4: Functions\n");
        printf("   8. Q8: Circle Area & Circumference\n");
        printf("   9. Q9: Palindrome Checker\n");
        printf("   0. Exit Program\n");
        printf("==============================================\n");
        printf("Enter your choice (0-9): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: runQ1(); break;
            case 2: runQ2(); break;
            case 3: runQ3(); break;
            case 4: runQ4(); break;
            case 5: runQ5(); break;
            case 6: runQ6(); break;
            case 7: runQ7(); break;
            case 8: runQ8(); break;
            case 9: runQ9(); break;
            case 0: printf("\nExiting program. Goodbye!\n"); break;
            default: printf("\nInvalid choice. Please enter a number between 0 and 9.\n");
        }
        
    } while (choice != 0);

    return 0;
}