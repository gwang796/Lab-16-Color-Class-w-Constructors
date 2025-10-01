//
//  main.cpp
//  COMSC-210 | Lab 16: Color Class with Constructor | Guo An Wang
//  IDE used: Xcode
//  Created by Guo An Wang on 9/27/25.
//

#include <iostream>
#include <iomanip>
using namespace std;

int WIDTH = 10; //declare before class

//declare class Color
class Color
{
private: //declare private variables red,green, blue
    int red;
    int green;
    int blue;
public:
    Color() {red = 0; green = 0; blue = 0;} //default constructor
    Color(int x) {red = x; green = 0; blue = 0;} //partial constructor
    Color(int x, int y) {red = x; green = y; blue = 0;} //partial constructor
    Color(int x, int y, int z) {red = x; green = y; blue = z;} //full parameter constructor
    //setter functions
    void setRed(int r) {red = r;}
    void setGreen(int g) {green = g;}
    void setBlue(int b) {blue = b;}
    //getter functions
    int getRed() {return red;}
    int getGreen() {return green;}
    int getBlue() {return blue;}
    //print function displays data of class objects
    //argument: int num
    //return: none
    void print(int num){
        cout << "Color#: " << num << endl;
        cout << setw(WIDTH) << "Red: " << red << endl;
        cout << setw(WIDTH) << "Green: " << green << endl;
        cout << setw(WIDTH) << "Blue: " << blue << endl;
    }
};

int main(int argc, const char * argv[]) {
    //create Color objects with data
    Color one;
    Color two(155);
    Color three(255,10);
    Color four(60,70,195);
    
    //printing Color objects
    one.print(1);
    two.print(2);
    three.print(3);
    four.print(4);
    
    return 0;
}
