/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

/*
#include <stdio.h>
int main()
{
    int no;
    long fac;

    printf("Enter a Number : ");
    scanf("%d", &no);

    fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }

    printf("Factorial of %d is %ld\n", no, fac);  
    return 0;
}
*/
#include<iostream>
int main()
{
  int no;
  long fac;

  std::cout<< "Enter number: ";
  std::cin>> no;
fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }
std::cout<< "Factorial of " << no << " is :" << fac;
return 0;
}
