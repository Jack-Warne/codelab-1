#include <iostream>
#include <string>
using namespace std;

int main() {
    float height; // height is set as a float because a float is necessary for a more robust program
    int age; // age is an integer because age is a whole number
    
    cout << "How old are you?" << endl;
    cin >> age;
    
    cout << "How tall are you?" << endl;
    cin >> height;
    
    if((height > 0.6) && (age > 5)){
        cout << "You can use the ride";
    }
    else{
        cout << "You cannot use the ride";
    }
    return 0;
}
