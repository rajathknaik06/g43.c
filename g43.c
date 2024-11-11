/*Create a program that generates and prints the Fibonacci series up to a specified number 'N'. The Fibonacci series is a sequence of numbers in which each number is the sum of the two preceding numbers, starting with 0 and 1. 



Your program should take an integer input 'N' and display the Fibonacci series up to the Nth term.



Fibonacci series: 0, 1, 1, 2, 3, 5, 8,... 

Input format :
The input consists of a positive integer N.

Output format :
The output displays the Fibonacci series up to the Nth term separated by space.*/


#include <stdio.h>

int main() {
    int N;
    int prev = 0, current = 1, next, i = 1;
    scanf("%d", &N);

    while (i <= N) {
        printf("%d ", prev);
        next = prev + current;
        prev = current;
        current = next;
        i++;
    }
    return 0;
}

