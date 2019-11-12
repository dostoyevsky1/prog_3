#include <iostream>
#include "primes.h"

int main()
{    
    int num;
    char selection_var;
    
    std::cout << "Michael Drozdov" << 
    std::endl << "CIS 9310" <<
    std::endl << "Prog_3" << std::endl;
    
    do
    {    
        std::cout << std::endl << "F/f : Find the nth prime number" << 
        std::endl << "T/t : Test a value to see if its prime" << 
        std::endl << "Q/q : Terminate the program" << 
        std::endl;

        std::cin >> selection_var;

        switch(selection_var)
        {
            case 'F':
                std::cout << std::endl << "Enter the Nth prime number you'd like to find: " << 
                std::endl;
                std::cin >> num;
                std::cout << std::endl << 
                Prime(num) << std::endl << std::endl;
                continue;
            case 'f':
                std::cout << std::endl << "Enter the Nth prime number you'd like to find: " << 
                std::endl;
                std::cin >> num;
                std::cout << std::endl << 
                Prime(num) << std::endl << std::endl;
                continue;
            case 'T':
                std::cout << std::endl << "Enter a number to test if prime: " << 
                std::endl;
                std::cin >> num;
                if(isPrime(num) > 0)
                {
                    std::cout << std::endl << 
                    "Prime" << std::endl << std::endl;
                    continue;
                } else
                {
                    std::cout << std::endl <<
                    "Not Prime" << std::endl << std::endl;
                    continue;
                }
            case 't':
                std::cout << std::endl << "Enter a number to test if prime: " << 
                std::endl;
                std::cin >> num;
                if(isPrime(num) > 0)
                {
                    std::cout << std::endl << 
                    "Prime" << std::endl << std::endl;
                    continue;
                } else
                {
                    std::cout << std::endl <<
                    "Not Prime" << std::endl << std::endl;
                    continue;
                }
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