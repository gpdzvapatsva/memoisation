#include <stdio.h> 
#include <time.h>  
int fib(int n, int memo[]) { 
    if (memo[n] != -1) { 
        return memo[n]; 
    } 
 
    if (n == 1 || n == 2) { 
        memo[n] = 1;   

    } else { 
        memo[n] = fib(n - 1, memo) + fib(n - 2, memo);  
    } 
    return memo[n]; 

} 
int main() { 
    int n = 40;  
    int memo[n + 1];    

    for (int i = 0; i <= n; i++) { 
        memo[i] = -1; 
    } 

    // Start the timer 
    clock_t start = clock(); 
    // Calculate Fibonacci 
    int result = fib(n, memo); 
    // Stop the timer 
    clock_t end = clock(); 
    // Calculate duration 
    double duration = (double)(end - start) / CLOCKS_PER_SEC; 
    printf("Fibonacci of %d is %d\n", n, result); 
    printf("Time taken: %.6f seconds\n", duration); 
    return 0; 

} 