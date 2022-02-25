#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length
struct Box{
  int height;
  int width;
  int length;
};

// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    struct Box box1;
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    struct Box box2;  
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";//Input Box1 height
    cin >> box1.height;//Reads Box1 height
    cout << "Enter Box 1 Width : ";//Input Box1 width
    cin >> box1.width;//Reads Box1 width
    cout << "Enter Box 1 Length : ";//Input Box1 length
    cin >> box1.length;//Reads Box1 length
    
    cout << "Enter Box 2 Height : ";//Input Box2 height
    cin >> box2.height;//Reads Box2 height
    cout << "Enter Box 2 Width : ";//Input Box2 width
    cin >> box2.width;//Reads Box2 width
    cout << "Enter Box 2 Length : ";//Input Box2 length
    cin >> box2.length;//Reads Box2 length
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(box1.height , box1.width , box1.length )
             + volume(box2.height , box2.width , box2.length );
    
    cout << "Volume of Box is " << totalVolume << endl;//Displays volume
    
    return 0;
}

// Implement the functions here
 int volume(int height, int width, int length)
{
  return height * width * length;
}