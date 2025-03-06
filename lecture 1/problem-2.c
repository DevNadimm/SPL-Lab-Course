// 📝 Problem: Check if a given year is a leap year or not.

// 💡 Leap Year Rules:
// 🔹 A year is a leap year if:
//    - It is divisible by 4 and not divisible by 100, or
//    - It is divisible by 400. 

#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    
    return 0;
}
