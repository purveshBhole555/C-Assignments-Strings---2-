#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool areAnagrams(string s, string t) {
    // Sort both strings
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    
    // Compare the sorted strings
    return s == t;
}

int main() {
    string s, t;
    cout << "Enter the first string: ";
    cin >> s;
    cout << "Enter the second string: ";
    cin >> t;

    if (areAnagrams(s, t)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}

// Output is 

Enter the first string: hell
Enter the second string: lelh  
True
