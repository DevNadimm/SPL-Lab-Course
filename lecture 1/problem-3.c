// 📝 Problem: Check the type of triangle based on the sides `a`, `b`, and `c`. 

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if((a + b) >= c && (a + c) >= b && (b + c) >= a) {
        if(a == b && b == c) {
            printf("Equilateral");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles");
        } else {
            printf("Scalene");
        }
    } else {
        printf("This is not a triangle");
    }
    
    return 0;
}
