class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
    //USING HASHMAPS
        map <int, int> mpp;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            int check=target-x;
            if(mpp.find(check)!=mpp.end())
                return {mpp[check],i};
            mpp[x]=i;
        }
        return {-1,-1};

    // //USING 2 POINTER FOR VALUE NOT INDEX
    // int n=nums.size();
    // sort(nums.begin(), nums.end());
    // int left=0,right=n-1;

    // while(left<right){
    //     if(nums[left]+nums[right] < target)
    //         left++;
    //     else if(nums[left]+nums[right] > target)
    //         right--;
    //     else if(nums[left]+nums[right]==target)
    //         return {nums[left],nums[right]};
    // }
    // return {-1,-1};
    }
};