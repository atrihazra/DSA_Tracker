class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int> mpp;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            int check=target-x;
            if(mpp.find(check)!=mpp.end())
                return {mpp[check],i};
            mpp[x]=i;
        }
        return {-1,-1};
    }
};