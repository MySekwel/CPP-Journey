#include <iostream>

int main(){
 // Declaring variables
 // Type    Variable Name             | DATA TYPES |
    int     integer = 10;           // - Integer 
    float   floatNum = 12.5;        // - Float
    double  doubleNum = 14.5;       // - Double
    bool    trueOrfalse = true;     // - Boolean
    char    middleName = 'B';       // - Character
    char    firstName[16] = "Roi";  // - Character with array size
    std::string surName = "Zulan";  // - String

    // Output
    std::cout<< "-----------------------------------------\n";
    std::cout<< "Integer: "              << integer     << std::endl;
    std::cout<< "Float: "                << floatNum    << std::endl;
    std::cout<< "Double: "               << doubleNum   << std::endl;
    std::cout<< "Bool: "                 << trueOrfalse << std::endl;
    std::cout<< "Char: "                 << middleName  << std::endl;
    std::cout<< "Char with array size: " << firstName   << std::endl;
    std::cout<< "String: "               << surName     << std::endl;
    std::cout<< "-----------------------------------------\n";

    // | Mathematics |

    // Addition
    int x = 5, y = 10;
    int sum = x + y;
    std::cout<< "Sum: " << sum << std::endl;

    // - Subtraction
    int a = 25, b = 10;
    int difference = a - b;
    std::cout<< "Difference: " << difference << std::endl;
    
    // - Multiplication
    int i = 5, j = 15;
    int product = i * j;
    std::cout<< "Product: " << product << std::endl;

    // - Division
    int m = 10, n = 2;
    int dividend = m / n;
    std::cout<< "Dividend: " << dividend << std::endl;

    // - Modulo
    int k = 5, l = 10;
    int remainder = k % l;
    std::cout<< "Remainder: " << remainder << std::endl;
    system("pause");
}