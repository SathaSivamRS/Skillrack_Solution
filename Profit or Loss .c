/*A shop has a maintenance cost MC for N customers on any given day. The value of MC and N for a given day are passed as the input to the program. 
The revenue earned from N customers in that specific day can be calculated as below. 
Each customer from 1 to 5 pays Rs.100 
Each customer from 6 to 50 pays Rs.150 
Each customer from 51 to 500 pays Rs.200 
Each customer from 501 onwards pays Rs.250 
If the total revenue is more than MC, the program must print Profit. Else if the total revenue is less than MC it must print Loss. 
If the total revenue is equal to MC, the program must print BreakEven. 
Example Input/Output 1: 
Input: 
400 5 
Output: 
Profit 
Example Input/Output 2: 
2000 10 
Output: 
Loss*/
#include <stdio.h>

int main() {
    int MC, N;
    printf("Enter maintenance cost (MC): ");
    scanf("%d", &MC);
    printf("Enter the number of customers (N): ");
    scanf("%d", &N);

    int revenue = 0;

    // Calculate revenue based on the number of customers
    if (N >= 1 && N <= 5) {
        revenue = N * 100;
    } else if (N >= 6 && N <= 50) {
        revenue = 5 * 100 + (N - 5) * 150;
    } else if (N >= 51 && N <= 500) {
        revenue = 5 * 100 + 45 * 150 + (N - 50) * 200;
    } else {
        revenue = 5 * 100 + 45 * 150 + 450 * 200 + (N - 500) * 250;
    }

    // Determine if it's Profit, Loss, or BreakEven
    if (revenue > MC) {
        printf("Profit\n");
    } else if (revenue < MC) {
        printf("Loss\n");
    } else {
        printf("BreakEven\n");
    }

    return 0;
}

