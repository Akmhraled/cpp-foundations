//function like macros
#include<iostream>
# define mul(a,b) a*b // defining a macro for multiplication
int main() {
    std::cout << mul(5, 3) << std::endl; // printing the result of multiplication to the console
    return 0;
}