#include <iostream>
#include <string>
using namespace std;

int main(){
    int ones = 0;
    string input;
    cin >> input;

    for (int i = 0; i < input.size(); i++){
        if (input[i] == '1') ones++;
    }

    cout << ones <<endl;
}