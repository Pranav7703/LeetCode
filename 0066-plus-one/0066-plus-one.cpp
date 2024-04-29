#include <vector>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int size = digits.size();
        
        for(int i = size - 1; i >= 0; i--) {
            digits[i] += 1;
            if(digits[i] != 10) {
                return digits;
            }
            digits[i] = 0;
        }
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};