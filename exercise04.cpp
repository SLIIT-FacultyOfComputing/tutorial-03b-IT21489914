#include <iostream>
using namespace std;

void print(int len, int wth);//Function prototype
void input(int &len, int &wth);

// Do not change the main() function
int main() {
   int length = 10, width = 5;//Initializing variables
   input(length, width);//Function calling
   print(length, width);
   return 0;
}

// Do not change the print() function
void print(int len, int wth) {//Function implementation
   cout << "Length : " << len 
        << ", Width  : " << wth << endl;
}

// Implement the Input Function here
void input(int &len, int &wth)
{
  cout << "Enter length ";
  cin >> len;
  cout << "Enter width ";
  cin >> wth;
  
}