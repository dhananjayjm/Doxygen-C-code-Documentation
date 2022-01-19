/** This is C++ Techincal Documentation created in Doxygen
 * 
 * Author: Dhananjay Mandalkar
  */

#include <iostream>

/// This is our Base class.
/// all other classes should be inherited from this Base class.

class Base
{
public:
    /// This function sum(int n) takes an interger n
    /// and return the sum from 1 to n
    int sum(int n)
    {
        if (n < 2)
            return n;
        else
            return n + sum(n - 1);
    }
};

/// This is derived class from class base

class Derived : public Base
{
public:
    /// this pro(int n) takes an integer and returns
    /// the product of the integers from 1 to n.

    int prod(int n)
    {
        if (n < 2)
            return n;
        else
            return n * prod(n - 1);
    }
};

/// This is function main
int main()
{
    std::cout << "The Sum of from 1 to 15 : "
              << Base{}.sum(10) << std::endl;

    std::cout << "The Product of from 1 to 15 : "
              << Derived{}.prod(10) << std::endl;
}
