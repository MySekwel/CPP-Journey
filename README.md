# CPP-Journey
A journey to the edge of CPP world, starting line, understanding variables, finish line, ¯\\__(ツ)_\_/¯

## 1. Quick Start

Create a simple program that outputs a string.

```c
#include <iostream>

int main(){
    std::cout<< "Hello World!";
}
```

### Breaking Down

|         Type        | Description                                                               |
|:-------------------:|---------------------------------------------------------------------------|
| #include <iostream> | Standard library for C++.                                                 |
|      int main()     | Main Function for a CPP file, first one to get called in the program.     |
|         { }         | Curly Braces, inside these braces is the body of it's function.           |
|        std::        | std is a standard namespace that identifiers like cout have               |
|        cout         | cout, statement that outputs something to the program.                    |
|         <<          | Left Shift Operators Performs a bitwise left shift operation on the left. |

## 2. Variables

Variables are used to store information and use them when they are needed. Variables can be in different data types:

|  Type  |      Derived Word     | Description                                                                                    | Example Value |
|:------:|:---------------------:|------------------------------------------------------------------------------------------------|:-------------:|
|   int  |        Integer        | **int** is a data type that holds an integer value ranging from `-2147483648` to `2147483647`. |       9       |
|  float |      Float Point      | **float** is a data type that holds a decimal value; with a bit width of 4 bytes.              |      15.4     |
| double | Double Floating Point | **double** is a data type that holds a decimal value; with a bit width of 8 bytes.             |      14.5     |
|  bool  |        Boolean        | **bool** is a data type that holds a value of True or False.                                   |      true     |
|  char  |       Character       | **char** is a data type that holds a single character value.                                   |      'A'      |

[variables.cpp](variables.cpp) - Variables Program

## 3. Understanding The Syntax

### 1. C++ Ignores whitespaces

This means you can style your code depending on your likings since whitespaces are ignored.

```c++
#include <iostream>

int main(){
    std::cout<<"Style 1 will output the same as Style 2";
    return 0;
}
```
is the same as:
```c++
#include <iostream>
int main() {std::cout<<"Style 2 will output the same as Style 1"; return 0;}
```

### 2. Function Declaration

In C++ the body of the function is not determined by identations since it ignores whitespaces, the body of the function is determined by what's inside `{ }` the curly braces.

### 3. Comments

There are 2 ways to add comments in a C++ program, 1 line comments and multi-line comments.

```c++
// This is a comment
/*
    This
    is
    a
    multi-line comment.
*/
```

### 5. Terminator

Statements in C++ needs to be terminated after calling them. `;`
```c++
std::cout<<"Statements are terminated by ; at the end";
```

## 4. Operators

### 1. Arithmetic

Are mathematical operators used to perform math operations inside the program

| Operator |      Name      | Description                            | Example |
|:--------:|:--------------:|----------------------------------------|:-------:|
|     +    |    Addition    | Adds together two values               |  x + y  |
|     -    |   Subtraction  | Subtracts one value from another       |  x - y  |
|     *    | Multiplication | Multiplies two values                  |  x * y  |
|     /    |    Division    | Divides one value by another           |  x / y  |
|     %    |     Modulus    | Returns the division remainder         |  x % y  |
|    ++    |    Increment   | Increases the value of a variable by 1 |   ++x   |
|    --    |    Decrement   | Decreases the value of a variable by 1 |   --x   |

### 2. Assignment Operators

Are operators used to assign values to a variable

| Operator | Name                           | Description                                     | Example | Same As    |
|----------|--------------------------------|-------------------------------------------------|---------|------------|
|     =    | Simple Assignment              | Assign a variable to the value on the right     |  x = 5  |    x = 5   |
|    +=    | Addition Assignment            | Add a value to the variable                     |  x += 3 |  x = x + 3 |
|    -=    | Subtraction Assignment         | Subtract a value to the variable                |  x -= 3 |  x = x - 3 |
|    *=    | Multiplication Assignment      | Multiply a value to the variable                |  x *= 3 |  x = x * 3 |
|    /=    | Division Assignment            | Divide a value to the variable                  |  x /= 3 |  x = x / 3 |
|    %=    | Modulus Assignment             | Add a remainder value to the variable           |  x %= 3 |  x = x % 3 |
|    &=    | Bitwise AND Assignment         | Add a bitwise AND value to the variable         |  x &= 3 |  x = x & 3 |
|    \|=   | Bitwise OR Assignment          | Add a bitwise OR value to the variable          | x \|= 3 | x = x \| 3 |
|    ^=    | Bitwise XOR Assignment         | Add a bitwise XOR value to the variable         |  x ^= 3 |  x = x ^ 3 |
|    >>=   | Bitwise Right Shift Assignment | Add a bitwise right shift value to the variable | x >>= 3 | x = x >> 3 |
|    <<=   | Bitwise Left Shift Assignment  | Add a bitwise left shift value to the variable  | x <<= 3 | x = x << 3 |

### 3. Comparison Operators

Are operators used to compare values, and use it on conditional statements

| Operator | Name                     | Description                                                                                        | Example |
|----------|--------------------------|----------------------------------------------------------------------------------------------------|---------|
|    ==    | Equal to                 | Compare the values from left and right and see if they are equivalent                              |  x == y |
|    !=    | Not equal                | Compare the values from left and right and see if they are not equivalent                          |  x != y |
|     >    | Greater than             | Compare the value from the left and see if it is greater than the value on the right               |  x > y  |
|     <    | Less than                | Compare the value from the left and see if it is less than the value on the right                  |  x < y  |
|    >=    | Greater than or equal to | Compare the value from the left and see if it is greater than or equivalent the value on the right |  x >= y |
|    <=    | Less than or equal to    | Compare the value from the left and see if it is less than or equivalent the value on the right    |  x <= y |

### 4. Logical Operators

Are operators used to see the logic values between values/variables

| Operator | Name        | Description                                             | Example            |
|----------|-------------|---------------------------------------------------------|--------------------|
| &&       | Logical and | Returns true if both statements are true                | x < 5 &&  x < 10   |
| \|\|     | Logical or  | Returns true if one of the statements is true           | x < 5 \|\| x < 4   |
| !        | Logical not | Reverse the result, returns false if the result is true | !(x < 5 && x < 10) |