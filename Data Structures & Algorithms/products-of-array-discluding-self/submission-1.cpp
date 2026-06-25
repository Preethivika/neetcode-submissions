class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;

        // for(int i=0 ; i<nums.size(); i++)
        // {
        //     int product = 1;
        //     for(int j=0; j<nums.size(); j++)
        //     {
        //         if(i != j)
        //         {
        //             product = product * nums[j];
        //         }
        //     }

        //     result.push_back(product);
        // }


        int total = 1;
        int count_zero = 0;
        for(auto val: nums)
        {
            if(val != 0) total = total * val;
            else count_zero++;
        }

        for(auto val: nums)
        {
            if(val == 0 && count_zero == 1) result.push_back(total);
            else if (count_zero > 0) result.push_back(0);
            else result.push_back(total/val);
        }
        return result;
    }
};
