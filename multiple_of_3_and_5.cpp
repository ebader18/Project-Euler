/*
Problem
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>

class Solution {
public:
    int compute_multiple_of_3_and_5(int max) {
        int multiple_of_3 = (max - 1) / 3;
        std::cout << "multiple_of_3 = " << multiple_of_3 << std::endl;

        int multiple_of_5 = (max - 1) / 5;
        std::cout << "multiple_of_5 = " << multiple_of_5 << std::endl;

        int multiple_of_15 = (max - 1) / 15;
        std::cout << "multiple_of_15 = " << multiple_of_15 << std::endl;

        int multiple_of_3_and_5 = multiple_of_3 + multiple_of_5 - multiple_of_15;
        std::cout << "multiple_of_3_and_5 = " << multiple_of_3_and_5 << std::endl;

        int sum_of_multiples_of_3 = 3 * multiple_of_3 * (multiple_of_3 + 1) / 2;
        std::cout << "sum_of_multiples_of_3 = " << sum_of_multiples_of_3 << std::endl;

        int sum_of_multiples_of_5 = 5 * multiple_of_5 * (multiple_of_5 + 1) / 2;
        std::cout << "sum_of_multiples_of_5 = " << sum_of_multiples_of_5 << std::endl;

        int sum_of_multiples_of_15 = 15 * multiple_of_15 * (multiple_of_15 + 1) / 2;
        std::cout << "sum_of_multiples_of_15 = " << sum_of_multiples_of_15 << std::endl;

        int sum_of_multiples_of_3_and_5 = sum_of_multiples_of_3 + sum_of_multiples_of_5 - sum_of_multiples_of_15;
        std::cout << "sum_of_multiples_of_3_and_5 = " << sum_of_multiples_of_3_and_5 << std::endl;

        return multiple_of_3_and_5;
    }
};

int main() {
    Solution sol;

    int result = sol.compute_multiple_of_3_and_5(1000);
    //std::cout << result << std::endl;

    return 0;
}