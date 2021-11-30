/******************************************************************************
Quadratic equations are of the form
a · x + b · x + c = 2 0
To solve these, one uses the quadratic formula:
x
b b ac
a
=
- ± - 2 4
2
There is a problem, though: if b2–4ac is less than zero, then it will fail.
Write a program that can calculate x for a quadratic equation. Create a
function that prints out the roots of a quadratic equation, given a, b, c.
When the program detects an equation with no real roots, have it print
out a message. How do you know that your results are plausible? Can
you check that they are correct?
*******************************************************************************/
/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ryan Maharaj
 */
 
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout<<"Program for finding roots using the quadratic formula\n";
    cout<<"-------------------------------------------------------\n";
    
    int a, b, c;
    float root1, root2;
    cout<<"Enter a value for a: ";
    cin>>a;
    cout<<"Enter a value for b: ";
    cin>>b;
    cout<<"Enter a value for c: ";
    cin>>c;
    
    int exponent = b * b;
    int four_a_c = 4*a*c;
    float under_root = exponent - four_a_c;
    float square_root = sqrt(under_root);
    root1 = (-b+square_root)/2*a;
    root2 = (-b-square_root)/2*a;
    if(under_root<0){
        cout<<"The roots are not real numbers";
    }
    else{
        cout<<"One root is: " <<root1;
        cout<<"\n";
        cout<<"The other root is: " <<root2;
    }
    

    return 0;
    
}
