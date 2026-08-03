class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int freq=0;//votes cancel,majority element will never have negative votes

        int ans=0;

        for(int i=0;i<nums.size();i++){
            if(freq==0)
                ans=nums[i];
            if(ans==nums[i])
                freq++;
            else freq--;
        }
        return ans;


        
        //USING HASHING
        
        // map <int,int> mpp;
        // int n=nums.size();

        // for(int i=0;i<n;i++)
        //     mpp[nums[i]]++;
        
        

        // for(auto it:mpp){
        //     if(it.second > n/2)
        //         return it.first;
        // }
        // return -1; 
    }
};