from typing import List

class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        n = len(arr)
        threshold = n // 4
        for i in range(n - threshold):
            if arr[i] == arr[i + threshold]:
                return arr[i]
        return -1  # This should never happen based on the problem constraints
