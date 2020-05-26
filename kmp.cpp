#include <iostream>

using namespace std;

int kmp_pattern_matching(string message, string pattern) {
    int messageLength = message.length();
    int patternLength = pattern.length();
    int pattern_index = 0;
    int matchingArray[patternLength] = {0};

    for(int it = 0 ; it< messageLength(); it++)
    {
        
    }

    return pattern_index;
}

int main() {

    string longMessage = "abcabcabagjgjfklgjerig";

    string pattern= "abc";

    kmp_pattern_matching(longMessage, pattern);

    return 0;
}