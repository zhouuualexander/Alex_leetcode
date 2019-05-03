class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        array = []
        for a in range(len(nums)-1):
            for b in range(a+1,len(nums)):
                if (nums[a]+nums[b] == target):
                    array.append(a)
                    array.append(b)
                    return array
