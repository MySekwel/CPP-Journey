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
|      std::cout      | cout, statement that outputs something to the program.                    |
|          <<         | Left Shift Operators Performs a bitwise left shift operation on the left. |

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