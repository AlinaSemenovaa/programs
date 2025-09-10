
#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;
    std::cout << "Enter coof a, b and c" << std::endl;
    std::cin >> a >> b >> c;
    if (a != 0)
    {
            double discrimenant = b * b - 4 * a * c;
            if (discrimenant > 0)
            {
                std::cout << "Solution -- 2" << std::endl;
                double x_1 = (-b + sqrt(discrimenant)) / (2 * a), x_2 = (-b - sqrt(discrimenant)) / (2 * a);
                std::cout << "x_1 = " << x_1 << std::endl << "x_2 = " << x_2;
            }
            else if (discrimenant == 0)
            {
                std::cout << "Solution -- 1" << std::endl;
                double x = -b / (2 * a);
                std::cout << "x = " << x;
            }
            else
                std::cout << "Solution -- 0" << std::endl;
    }
    else
    {
        if (b != 0) {
            std::cout << "Solution -- 1" << std::endl;
            double x = -c / b;
            std::cout << "x = " << x;
        }
        else {
            if (c != 0) {
                std::cout << "Solution -- 0" << std::endl;
            }
            else
                std::cout << "Solution -- unlimited" << std::endl;
        }
            
    }
}

