#include <stdio.h> //use the library given in < >
// .h = header file
// #include <iostream> // C++
// #include "MyLibrary.h" // C/C++

int main() //the main() function; void main() { /*...*/ } 
{ //a block
    //begin
    int _a_123_g, Zebra, c1; // declaration of the three variables of the int data type
    int x = 5; // create a variable named x of the data type int(=integer)
    // a variable name is the identifier
    //_a_123_g, Zebra, c1, y, z, x, f - identifiers
    int X = 9; // X not equal to x; case-sensitive
    int y = -10; // assigned a value of -10 to the integer variable y
    int z = x + y; 
    int f;
    f = 7;
    y = 100;
    
    /* 
    A variable is a location in memory where a value can be stored for use by a program.
    */
    printf("Hello Basics of\nProgramming\tCourse\n"); // console output
    printf("x + y = %d", z); /* %d - digit, or integer numbers; 
          The %d conversion specifier indicates that the data should be an integer */
    /*
    \n - escape sequence, the next line
    \t - tabular
    */
    /* this is a multiple 
     * text lines comment 
     */
     
    return 0;  /* indicate that program ended successfully */
} //end of the main()