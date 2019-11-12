#include <iostream>
#include "primes.h"

int main()
{    
    int num;
    char selection_var;
    
    do
    {    
        std::cout << "F : Find the nth prime number" << std::endl <<
        "T : Test a value to see if its prime" << std::endl <<
        "Q : Terminate the program" << std::endl;

        std::cin >> selection_var;

        switch(selection_var)
        {
            case 'F':
                std::cout << std::endl << "Enter the Nth prime number you'd like to find: " << std::endl;
                std::cin >> num;
                std::cout << std::endl << 
                Prime(num) << std::endl << std::endl;
                continue;
            case 'f':
                std::cout << std::endl << "Enter the Nth prime number you'd like to find: " << std::endl;
                std::cin >> num;
                std::cout << std::endl << 
                Prime(num) << std::endl << std::endl;
                continue;
            case 'T':
                std::cout << std::endl << "Enter a number to test if prime: " << std::endl;
                std::cin >> num;
                std::cout << std::endl << 
                isPrime(num) << std::endl << std::endl;
                continue;
            case 't':
                std::cout << std::endl << "Enter a number to test if prime: " << std::endl;
                std::cin >> num;
                std::cout << std::endl << 
                isPrime(num) << std::endl << std::endl;
                continue;
            case 'Q':
                selection_var = 'Q';
                continue;
            case 'q':
                selection_var = 'Q';
                continue;
        }
        
    } while (selection_var != 'Q');




    return 0;
}