#include <iostream>
#include "Fraction.h"

int main() {
    // Create some fractions
    Fraction frac1(3, 4);
    Fraction frac2(1, 2);
    Fraction frac3(-5, 6);

    // Perform arithmetic operations
    Fraction sum = frac1 + frac2;
    Fraction difference = frac1 - frac2;
    Fraction product = frac1 * frac2;
    Fraction quotient = frac1 / frac2;

    // Output the results
    std::cout << "Fraction 1: " << frac1 << std::endl;
    std::cout << "Fraction 2: " << frac2 << std::endl;
    std::cout << "Fraction 3: " << frac3 << std::endl;
    std::cout << "Sum of Fraction 1 and Fraction 2: " << sum << std::endl;
    std::cout << "Difference of Fraction 1 and Fraction 2: " << difference << std::endl;
    std::cout << "Product of Fraction 1 and Fraction 2: " << product << std::endl;
    std::cout << "Quotient of Fraction 1 and Fraction 2: " << quotient << std::endl;

    // Increment and decrement operations
    ++frac1;
    std::cout << "Incremented Fraction 1: " << frac1 << std::endl;
    frac1++;
    std::cout << "Incremented Fraction 1 (postfix): " << frac1 << std::endl;

    --frac2;
    std::cout << "Decremented Fraction 2: " << frac2 << std::endl;
    frac2--;
    std::cout << "Decremented Fraction 2 (postfix): " << frac2 << std::endl;

    // Comparison operations
    std::cout << "Is Fraction 1 equal to Fraction 2? " << (frac1 == frac2) << std::endl;
    std::cout << "Is Fraction 1 less than Fraction 2? " << (frac1 < frac2) << std::endl;
    std::cout << "Is Fraction 1 not equal to Fraction 2? " << (frac1 != frac2) << std::endl;
    std::cout << "Is Fraction 1 greater than Fraction 2? " << (frac1 > frac2) << std::endl;
    std::cout << "Is Fraction 1 greater than or equal to Fraction 2? " << (frac1 >= frac2) << std::endl;
    std::cout << "Is Fraction 1 less than or equal to Fraction 2? " << (frac1 <= frac2) << std::endl;

    return 0;
}
