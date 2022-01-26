// Euler_033_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Started 25 Jan 2022

#include <iostream>

using namespace std;

int main()
{
    for (int i = 11; i < 100; i++) // denominator
    {
        for (int j = 11; j < i; j++) // numerator
        {
            if (!(i % 10 == 0 || j % 10 == 0))
            {
                if (i / 10 == j % 10) // same digit in ones/tens place for num/den respectively
                {
                    if ((j / 10)*1.0 / (i % 10)*1.0 == j*1.0 / i*1.0)
                    {
                        cout << "Success: " << j << " / " << i << endl;
                    }
                }
            }
        }
    }

    // cout << 49 % 10 << endl; // 9
    // cout << 49 / 10 << endl; // 4
}
