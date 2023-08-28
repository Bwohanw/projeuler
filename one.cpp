#include <iostream>
#include "one.h"


/*
Find the sum of all the multiples of 3 or 5 below 1000*/

int main() {
    std::cout << sum_multiples(10000) << std::endl;
    //std::cout << sum_multiples_mod(10000) << std::endl;
    return 0;
}

int sum_multiples(int end) {
    int sum = 0;
    int end_num = 1; //tracks the last digit of the current number
    int mod_3 = 1; //tracks the current number modulus 3
    for (int i = 1; i < end; i++) {
        if (end_num == 0 || mod_3 == 0) {
            sum += i;
        }
        end_num  = end_num == 4 ? 0 : end_num + 1;
        mod_3 = mod_3 == 2 ? 0 : mod_3 + 1;
    }

    return sum;
}


int sum_multiples_mod(int end) {
    int sum = 0;
    for (int i = 1; i < end; i++) {
        if (i % 5 == 0 || i % 3 == 0) {
            sum += i;
        }
    }

    return sum;
}