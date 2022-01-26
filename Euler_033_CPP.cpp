// Euler_033_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Started 25 Jan 2022
// Solved 25 Jan 2022

#include <iostream>

using namespace std;

int main()
{
    int numMult = 1;
    int denMult = 1;

    for (int i = 11; i < 100; i++) // denominator
    {
        for (int j = 11; j < i; j++) // numerator
        {
            // Num and denom do not end in zero
            // same digit in ones/tens place for num/den respectively
            if (!(i % 10 == 0 || j % 10 == 0) && i / 10 == j % 10 && ((j / 10)*1.0 / (i % 10)*1.0 == j*1.0 / i*1.0))
            {
                // cout << "Success: " << j << " / " << i << endl;
                numMult = numMult * j;
                denMult = denMult * i;
            } // end if statement successes
        }
    }

    // Reduce fraction by finding GCD
    // It was obvious the answer is 100, but solving GCD anyways to be thorough
    int tempNum = numMult;
    int tempDen = denMult;

    while (tempNum != tempDen)
        if (tempDen > tempNum)
            tempDen -= tempNum;
        else
            tempNum -= tempDen;

    // Find reduced denominator
    int ans = denMult / tempDen;
    cout << ans << endl;

}
