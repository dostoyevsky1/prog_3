// Absolute value function
double abs(double val)
{
    if(val < 0)
    {
        return (val * -1);
    } else 
    {
        return val;
    }
}

// Square Root Function
double Sqrt(double v, int initial_guess = 1)
{
    double new_val = 0.5*(initial_guess + v / initial_guess);
    double error;

    do
    {
        new_val = 0.5*(new_val + v / new_val);
        error = 0.5*(new_val + v/new_val) - new_val;

    } while (abs(error) > 0.005);

    return new_val;
    
}

// Prime Checker Function
bool isPrime(int num)
{
int check = 0;

for(int i=2; i <= Sqrt(num); i++)
{
    if(num%i==0)
    {
        check += 1;
    }
}

if(check==0)
    {
        return true;
    } else
    {
        return false;
    }

}