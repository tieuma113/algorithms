#include <algorithm>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> temp;
        vector<vector<string>> result;
        for (auto i : strs){
            string tempString = i;
            sort(tempString.begin(),tempString.end());
            temp[tempString].push_back(i);
        }
        for (auto i: temp){
            result.push_back(i.second);
        }
        return result;
    }
};