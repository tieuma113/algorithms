#include <algorithm>
#include <string>
#include <iostream>

using std::string;

class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for (auto i : s){
            if (std::isalnum(i)){
                temp += std::tolower(i);
            }
        }
        for (int i = 0l i < temp.size()/2; i++){
            if (temp[i]!= temp[temp.size() - 1 - i]){
                return false;
            }
        }
        return true;
    }
};