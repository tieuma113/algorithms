#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() -1;
        vector<int> result;
        while (i < j){
            int sum = numbers[i] + numbers[j];
            if (sum > target){
                j--;
            }else if (sum < target){
                i++;
            }
            else{
                result = {i,j};
                break;
            }
        }
        return result;
    }
};

int main(int, char**){
    vector<int> input = {5,25,75};
    int target = 100;
    Solution s;
    vector<int> result =  s.twoSum(input, 100);
    return 0;
}