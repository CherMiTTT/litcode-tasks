#include "solution.h"
#include <bitset>

namespace task_3133 {
    long long Solution::minEndSimple(int n, int x) {
        long long result = x;
        while(--n) {
            result = (result + 1) | x;
        }
        return result;
    }

    long long Solution::minEndBitset(int n, int x) {
        std::bitset<64> X(x), N(n-1), result(0);
        for(size_t i = 0, j = 0; i < X.size(); i++){
            if(X[i]) {result[i] = true;}
            else {result[i] = N[j++];}
        }
        return result.to_ullong();
    }
} // task_3133