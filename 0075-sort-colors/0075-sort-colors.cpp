class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c1 = 0, c2 = 0, c3 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                c1++;
            else if (nums[i] == 1)
                c2++;
            else
                c3++;
        }
        int i = 0;

        for (; i < c1; i++)
            nums[i] = 0;

        for (; i < c2 + c1; i++)
            nums[i] = 1;

        for (; i < c3 + c1 + c2; i++)
            nums[i] = 2;
    }
};