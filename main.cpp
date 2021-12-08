/*
Emily Vorng 
CSCI151 - FizzBuzz
Prints out numbers 1 through 100. If it is a multiple of 3,
it will print "Fizz" instead of the number. If it is a 
multiple of 5, it will print "Buzz." If is a multiple of both,
it will print "FizzBuzz" to the console.
*/

#include <iostream>
#include <string>

int main() {
    // Loops through numbers 1 - 100
    for(int num = 1; num <= 100; num++) {
        // Checks if current number is divisible by 3 or/and 5 and prints out the corresponding response
        if (num % 3 == 0) {
            std::cout << "Fizz";
        }

        if (num % 5 == 0) {
            std::cout << "Buzz";
        }

        if (num % 3 != 0 && num % 5 != 0) {
            std::cout << num;
        }
        
        std::cout << "\n";
    }
}