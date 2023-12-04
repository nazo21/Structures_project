// Made by Nazeer Ahmad Dec 2023
// Meant for Project
#include<iostream>
using namespace std; // not the best practice


// Will Demonstrate Parameter Passing and Memory Managment
void sub_two(int i,int j) // Call by Value
{
     i = 10;
     j = 9;
     
     i -= j; // would be 1
}

void swp_ttwo(int *i,int *j) // Call by Reference
{
     
     *i -= *j;
}

int sum(int n) {
  if (n> 0) {
    return n + sum(n - 1);
  } 
   else {
    return 0;
  }
}
int main(){
    int i = 20;
    int j = 9;
    int ii = 22;
    int jj = 4;
    cout << "Testing Parameter passing" << endl;
    sub_two(i,j);
    cout << "The first is: " << i << " The Second is: " <<j << endl;
    swp_ttwo(&ii,&jj);
    cout << "The first is: " << ii << " The Second is: " <<jj << endl;
    cout << "Again, The first is: " << ii << " The Second is: " <<jj << endl;

    cout << "End of Parameter passing test" << endl;
    
    cout << "Testing Memory Managment" << endl;
    int *b; 
    b = new int; // using new operator to declare b is pointing to a new int
    *b = 45;
    cout << b << endl; // Returns Memory Address
    
    delete b; // Ensure no memory Leak
    cout << "End of Memory managment test test" << endl;

    cout << "Start of Recursion" << endl;
    int recuring = sum(5);

    cout << recuring << endl;
    cout << "End of Recursion" << endl;

}
