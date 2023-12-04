// Made by Nazeer Ahmad Dec 2023
// Meant for Project
#include<iostream>
using namespace std; // not the best practice


// Will Demonstrate Parameter Passing and Memory Managment
void sub_two(int i,int j) // Call by Value
{
     i -= j;
}

void sub_ttwo(int *i,int *j) // Call by Reference
{
     *i -= *j;
}
int main(){
    int i = 20;
    int j = 9;
    int ii = 22;
    int jj = 4;
    cout << "Testing Parameter passing" << endl;
    sub_two(i,j);
    cout << i << j << endl;
    cout << "End of Parameter passing test" << endl;
    
    cout << "Testing Memory Managment" << endl;
    int *b;
    *b = new int a;

    a = 30;

    

    cout << "End of Memory managment test test" << endl;

    cout << "Start of Recursion" << endl;
    
    cout << "End of Recursion" << endl;

}
