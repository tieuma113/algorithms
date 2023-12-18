from typing import List

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        str_table = {}
        for string in strs:
            sort_string = ''.join(sorted(string))
            if sort_string not in str_table:
                str_table[sort_string] = []
            str_table[sort_string].append(string)
        return list(str_table.values())
    
S = Solution()
print(S.groupAnagrams(["eat","tea","tan","ate","nat","bat"]))