#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;//declare and initialise age variable
    
    cout << "what is your age?";
    cin >> age;
    
    
    
    if(age >= 18){ //check if age is greater than or equal to 18
        cout << "I can vote!!"; //output can vote message
    }else{ //age must be less that 18
        cout << "you can not vote :(";//output can vote message
    }
    return 0;
}