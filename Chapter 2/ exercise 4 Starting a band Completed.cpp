#include <iostream>
#include <string>
using namespace std;

int main() {
    // variable set up
    bool musical_friend = true;
    string friend_plays = "guitar";
    
    if(musical_friend == true){
        if(friend_plays == "guitar" || "drums"){
            cout << "they can join the band";
        }
        else{
            cout << "they cannot join the band";
        }
        
    }
    else{
        cout << "this friend isn't musical and they are illegible for the band";
    }
    
    return 0;
}
