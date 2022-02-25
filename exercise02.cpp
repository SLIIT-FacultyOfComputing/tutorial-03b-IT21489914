#include <iostream>
using namespace std;
//Function prototype
int volume(int height, int width, int length);

int main() {
    int box1Height, box1Width, box1Length;//Declaring variables
    int box2Height, box2Width, box2Length;
    int totalVolume, totalSurface;
    
    cout << "Enter Box 1 Height : ";//Input Box1 height
    cin >> box1Height;//Reads Box1 height
    cout << "Enter Box 1 Width : ";//Input Box1 width
    cin >> box1Width;//Reads Box1 width
    cout << "Enter Box 1 Length : ";//Input Box1 length
    cin >> box1Length;//Reads Box1 length
    
    cout << "Enter Box 2 Height : ";//Input Box2 height
    cin >> box2Height;//Reads Box2 height
    cout << "Enter Box 2 Width : ";//Input Box2 width
    cin >> box2Width;//Reads Box2 width
    cout << "Enter Box 2 Length : ";//Input Box2 length
    cin >> box2Length;//Reads Box2 length
    //Calculate totalvolume
    totalVolume = volume(box1Height, box1Width, box1Length)
             + volume(box2Height, box2Width, box2Length);
    //Displays total volume         
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the Volume() function 
int volume(int height, int width, int length)
{
  return height * width * length;
}
