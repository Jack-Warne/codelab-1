#include <iostream>
#include <string>
using namespace std;
int main() {
    //consts are variables whose value cannot be modified later
    const int COVERAGE = 350; // paint covers 350 sq ft per gallon
    // declare integers length, width, and height
    int length;
    int width;
    int height;
    
    // declare double totalSqFt;
    double total_squarefoot;
    
    // declare double paintNeeded;
    double paint_needed;
    
    // prompt for and read in the length of the room
    cout << "What is the length of the room?" << endl;
    cin >> length;
    
    // prompt for and read in the width of the room
    cout << "What is the width of the room?" << endl;
    cin >> width;
    
    // prompt for and read in the height of the room
    cout << "What is the height of the room?" << endl;
    cin >> height;
    
    // Compute the total square feet to be painted - think about   the dimensions of each wall assuming standard four wall room.
    total_squarefoot = (2*(length * height)) + (2*(width * height)); 
    // Compute the amount of paint needed
    paint_needed = total_squarefoot / COVERAGE;
    
    // Print the length, width, and height of the room, the total square feet and number of gallons of paint required
    cout << "length = " << length << " width = " << width << " height = " << height << " the area is " << total_squarefoot << " gallons of paint needed = " << paint_needed << endl;
    return 0;
}
