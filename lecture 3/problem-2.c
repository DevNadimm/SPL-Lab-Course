// 📝 Problem: Check if a given number is a palindrome.

#include <stdio.h>

int main() {
    int number, reversedNum = 0;
    printf("Enter a digit: ");
    scanf("%d", &number);

    int temp = number;

    while (temp){
        int dig = temp % 10;
        reversedNum = (reversedNum * 10) + dig;
        temp /= 10;
    }

    if (number == reversedNum){
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;
}