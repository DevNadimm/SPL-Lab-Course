// 📝 Problem: Calculate the sum of all integers from 0 to `n`.

// 🔄 Using while loop
#include <stdio.h>

int main() {
    int n, i = 0, sum = 0;
    scanf("%d", &n);

    while(i <= n){
        sum += i;
        i++;
    }

    printf("%d", sum);
    return 0;
}

// --------------------------------------------------------------

// 🔄 Using for loop
// #include <stdio.h>

// int main() {
//     int n, sum = 0;
//     scanf("%d", &n);

//     for(int i = 0; i <= n; i++){
//         sum += i;
//     }

//     printf("%d", sum);
//     return 0;
// }

// --------------------------------------------------------------

// 🚀 Optimized formula (time and space complexity))
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     printf("%d", (n * (n + 1)) / 2);
//     return 0;
// }