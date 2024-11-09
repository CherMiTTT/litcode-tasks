#include "solution.h"
#include <string_view>


bool Solution::isCircularSentenceNaive(std::string sentence) {
    if(sentence.front() != sentence.back()) {
        return false;
    }

    const size_t n = sentence.size();
    for(size_t i = 1; i < n-1; i++) {
        if(sentence[i] == ' ') {
            if(sentence[i-1] != sentence[i+1]) {
                return false;
            }
        }
    }
    return true;
}

bool Solution::isCircularSentenceFind(std::string sentence) {
    if(sentence.front() != sentence.back()) {
        return false;
    }

    size_t pos = -1;
    while(true) {
        pos = sentence.find(' ', pos + 1);
        if(pos == std::string::npos) break;
        if(sentence[pos - 1] != sentence[pos + 1]) {
            return false;
        }
    }
    return true;
}

bool Solution::isCircularSentenceFindView(std::string sentence) {
    std::string_view s{sentence};
    if (s.front() != s.back()) {
        return false;
    }

    size_t pos = -1;
    while (true) {
        pos = s.find(' ', pos + 1);
        if (pos == std::string::npos) break;
        if (s[pos - 1] != s[pos + 1]) {
            return false;
        }
    }
    return true;
}