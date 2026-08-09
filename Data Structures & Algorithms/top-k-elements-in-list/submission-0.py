class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        result = defaultdict(int)
        
        for num in nums:
            result[num]+=1
        sortresult = sorted(result,key = result.get,reverse = True)
        return sortresult[:k]
        