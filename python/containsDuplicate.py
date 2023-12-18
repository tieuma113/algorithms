from typing import List


class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        test = set()
        for num in nums:
            if num in test:
                return True
            else:
                test.add(num)
        return False
    
if __name__ == "__main__":
    so = Solution()
    print(so.containsDuplicate([1,2,3,4]))