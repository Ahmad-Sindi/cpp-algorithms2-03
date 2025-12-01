/* Algorithm Challenge & Problem Solving
 * 3 - Program to Check Whether a Number is Perfect or Not
 *
 * A Perfect Number is a number that equals the sum of its proper divisors.
 * Example: 28 → 1 + 2 + 4 + 7 + 14 = 28
 *
 * This program reads a positive integer from the user and determines whether
 * it is a perfect number using divisor-based summation logic.
 */

#include <iostream>
using namespace std;

/*
 * Reads a positive number from the user.
 * Keeps asking until a valid (positive) number is entered.
 */
int ReadPositivNumbr(string Messag)
{
    int Number = 0;

    do
    {
        cout << Messag << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

/*
 * Checks whether the given number is a perfect number.
 * A perfect number is equal to the sum of all its proper divisors.
 * Example: 28 → 1 + 2 + 4 + 7 + 14 = 28
 */
bool isPerrfectNumber(int Number)
{
    int Sum = 0;
    // Sum holds the accumulated total of divisors

    for (int i = 1; i < Number; i++)
    {
        // Check if i is a divisor of Number
        if (Number % i == 0)
            Sum += i; // Add the divisor to the running sum
    }

    // A number is perfect if the sum of its divisors equals itself
    return Number == Sum;
}

/*
 * Prints whether a number is perfect or not.
 */
void PrintResult(int Number)
{
    if (isPerrfectNumber(Number))
        cout << Number << " is a Perfect Number.\n";
    else
        cout << Number << " is NOT a Perfect Number.\n";
}

int main()
{
    PrintResult(ReadPositivNumbr("Please Enter a Positive Number"));
    return 0;
}
