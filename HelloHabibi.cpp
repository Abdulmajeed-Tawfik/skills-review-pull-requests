generate a code that asks are habibi you happy or sad and then responds Habiby no worries nothing desrves you should always be happy if he answered sad and if he is happy you should said happyness is not permanent habibi
#include <iostream>
using namespace std;

int main () {

    cout << "Are you happy or sad, habibi? ";
    string response;
    cin >> response;
    if (response == "sad") {
        cout << "Habibi, no worries, nothing deserves you to be sad. You should always be happy." << endl;
    } else if (response == "happy") {
        cout << "Happyness is not permanent, habibi." << endl;
    }  
    return 0;
}