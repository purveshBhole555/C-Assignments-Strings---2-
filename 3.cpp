#include <iostream>
#include <string>

using namespace std;

bool is_vowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int main() {
    string str;
    cin >> str;

    int count = 0;
    for (int i = 0; i < str.length(); ++i) {
        for (int j = i; j < str.length(); ++j) {
            string sub = str.substr(i, j - i + 1);
            bool all_vowels = true;
            for (char ch : sub) {
                if (!is_vowel(ch)) {
                    all_vowels = false;
                    break;
                }
            }
            if (all_vowels) {
                ++count;
            }
        }
    }
    
    cout << count << endl;

    return 0;
}

// Output 

Purvehs
2