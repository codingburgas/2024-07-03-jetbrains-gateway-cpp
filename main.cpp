#include <iostream>
#include <cstdlib>
#include <unistd.h>

class GFG {
public:
    static int fib(int n)
    {
        if (n <= 1)
        {
            return n;
        }

        return fib(n - 1) + fib(n - 2);
    }
};

int main()
{
    srand(time(nullptr));

    do {
        int n = rand() % 41 + 1;
        std::cout << "Randomly generated n: " << n << std::endl;
        std::cout << "Fibonacci number at position " << n << ": " << GFG::fib(n) << std::endl;
        usleep(500000);
    } while (true);
}
