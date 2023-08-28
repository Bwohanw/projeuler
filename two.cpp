#include <iostream>
#include "two.h"


/*
By considering the terms in the Fibonacci sequence whose values do not exceed four million,
find the sum of the even-valued terms.*/

int main() {
    std::cout << sum_fib(4000000) << std::endl;
    std::cout << sum_fib_mod(4000000) << std::endl;
    return 0;
}

long sum_fib(long end) {
    long sum = 0;
    long prev = 1;
    long curr = 1;
    int mod_2 = 2; //0 when the fibonacci number will be even, which happens every 3 numbers;
    //start at 2 because it will be an even number the next time
    while (curr < end) {
        //adds if even before incrementing curr (to prevent it from going over end)
        if (mod_2 == 0) {
            sum += curr;
        }
        mod_2 = (mod_2 + 1) % 3;
        long temp = curr;
        curr += prev;
        prev = temp;
    }

    return sum;
}

long sum_fib_mod(long end) {
    long sum = 0;
    long prev = 1;
    long curr = 1;
    while (curr < end) {
        if (curr % 2 == 0) sum += curr;

        long temp = curr;
        curr += prev;
        prev = temp;
    }
    return sum;
}
