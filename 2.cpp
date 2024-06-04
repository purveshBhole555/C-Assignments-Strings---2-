#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    int first_max = -1, second_max = -1;
    
    for(char ch : str) {
        if (ch >= '0' && ch <= '9') {
            int digit = ch - '0';
            if (digit > first_max) {
                second_max = first_max;
                first_max = digit;
            } else if (digit < first_max && digit > second_max) {
                second_max = digit;
            }
        }
    }
    
    if (second_max != -1) {
        cout << second_max << endl;
    } else {
        cout << "No second largest digit found" << endl;
    }

    return 0;
}

// Output is 

227364734678
7
