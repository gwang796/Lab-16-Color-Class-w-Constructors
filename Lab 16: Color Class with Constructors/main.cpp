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
    one.setRed(155);
    one.setBlue(200);
    one.setGreen(100);
    one.print(1);
    
    Color two;
    two.setRed(25);
    two.setBlue(230);
    two.setGreen(180);
    two.print(2);

    Color three;
    three.setRed(255);
    three.setBlue(10);
    three.setGreen(80);
    three.print(3);

    Color four;
    four.setRed(60);
    four.setBlue(70);
    four.setGreen(195);
    four.print(4);
    
    Color five;
    five.setRed(145);
    five.setBlue(225);
    five.setGreen(250);
    five.print(5);

}
