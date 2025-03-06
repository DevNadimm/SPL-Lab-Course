// 📝 Problem: Perform basic arithmetic operations based on the input operator.

#include <stdio.h>

int main() {
    int a, b;
    char c;

    scanf("%d %c %d", &a, &c, &b);
    switch (c) {
    case '+': 
        printf("%d %c %d = %d", a, c, b, a + b);
        break;
    case '-': 
        printf("%d %c %d = %d", a, c, b, a - b);
        break;
    case '/': 
        if (b == 0) {
            printf("Error: Division by zero is not allowed.");
        } else {
            printf("%d %c %d = %d", a, c, b, a / b);
        }
        break;
    case '*': 
        printf("%d %c %d = %d", a, c, b, a * b);
        break;
    default:
        printf("Your character is not valid!");
        break;
    }
    return 0;
}
