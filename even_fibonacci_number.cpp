/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with $1$ and $2$, the first $10$ terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, etc.
By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include <iostream>

class Solution {
public:
    int compute_sum_of_even_fibonacci_number(int max) {
        int sum_of_even_fibonacci_number = 0;
        int number1 = 0, number2 = 0, fibonacci = 1;

        while (fibonacci + number1 < max)
        {
            number2 = number1;
            number1 = fibonacci;
            fibonacci = number1 + number2;
            //std::cout << fibonacci << std::endl;
            if (fibonacci%2 == 0)
                sum_of_even_fibonacci_number += fibonacci;
        }

        return sum_of_even_fibonacci_number;
    }
};

int main() {
    Solution sol;

    int result = sol.compute_sum_of_even_fibonacci_number(4000000);
    std::cout << "sum_of_even_fibonacci_number = " << result << std::endl;

    return 0;
}