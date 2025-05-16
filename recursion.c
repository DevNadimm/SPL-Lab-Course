#include <stdio.h>

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int sum(int n) {
    if (n <= 0) {
        return 0;
    } else {
        return n + sum(n - 1);
    }
}

int main() {
    int n;

    printf("Enter the position of the Fibonacci sequence (n): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input! Please enter a non-negative integer.\n");
        return 1;
    }

    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));

    return 0;
}