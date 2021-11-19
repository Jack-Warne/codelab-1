#include <iostream>
#include <string>
using namespace std;

int main() {
    int money; // declares variable money to be an integer
    int game_cost = 25; // declares the cost of the game to be 25
    
    cout << "How much money do you have?";
    cin >> money;
    
    if(money >= game_cost){
        cout << "you can buy the game." << endl;
        cout << "You have £" << money - game_cost << " remaining.";
    }
    
    else{
        cout << "I need to save £" << game_cost - money;
    }
    
    return 0;
}