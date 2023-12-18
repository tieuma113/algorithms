#include <iostream>
#include <vector>
#include <unordered_map>

using std::vector, 
    std::unordered_map, 
    std::cout, 
    std::endl;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> hash;
        for (auto num : nums) {
            if (hash.find(num) == hash.end()) {
                hash[num] = 1;
            } else {
                return true;
            }
        }
        return false;
    }
};


int main(int argc, char const *argv[]){
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << s.containsDuplicate(nums) << endl;
    return 0;
}