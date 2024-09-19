/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600,851,475,143
*/

#include <iostream>

class Solution {
public:
    int nextPrime(int n) {
        if (n <= 1) return 2;
        
        int candidate = n + 1;
        bool isPrime = true;

        while (true) {
            isPrime = true;
            
            // Check if candidate is prime
            for (int i = 2; i <= std::sqrt(candidate); ++i) {
                if (candidate % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            
            if (isPrime) {
                return candidate;
            }
            ++candidate;
        }
    }

    int find_largest_prim_number(long long int number) {
        long long int prime = 2;
        int largest_prime = 1;

        while(prime < std::sqrt(number)) {
            if (number%prime == 0)
                largest_prime = int(prime);
            prime = nextPrime(prime);
        }

        return largest_prime;
    }
};

int main() {
    Solution sol;
    long long int number = 600851475143;

    int result = sol.find_largest_prim_number(number);
    std::cout << "Largest prime factor of number " << number << " is " << result << std::endl;

    return 0;
}