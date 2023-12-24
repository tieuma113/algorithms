#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using std::vector;
using std::unordered_map;

class Solution {
public:
    static vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> temp;
        for (auto i : nums){
            temp[i]++;
        }
        vector<std::pair<int, int>> tempV;
        for (std::pair<int, int> i : temp){
            tempV.push_back(i);
        }
        std::sort(tempV.rbegin(), tempV.rend(), [](std::pair<int, int> &left, std::pair<int, int> &right){
            return left.second < right.second;
        });
        vector<int> result;
        for (int i = 0; i < k; i++){
            result.push_back(tempV[i].first);
        }
        return result;
    }
};

int main(){
    vector<int> test1 = {1,1,1,2,2,3};
    vector<int> result = Solution::topKFrequent(test1, 2);
    for (int i : result){
        std::cout << i << std::endl;
    }
}

