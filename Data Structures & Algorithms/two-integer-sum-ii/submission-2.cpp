class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;

        int sizeArray = numbers.size();

        // for(int i=0; i< sizeArray; i++)
        // {
        //     for(int j=i+1; j< sizeArray ; j++)
        //     {
        //         if( numbers[i] + numbers[j] == target)
        //         {
        //             result.push_back(i+1);
        //             result.push_back(j+1);
        //         }
        //     }
        // }

        int l=0, r=numbers.size()-1;

        while(l < r)
        {
            int sum = numbers[l] + numbers[r];

            if(sum > target)
            {
                r--;
            }else if(sum < target)
            {
                l++;
            }else
            {
                return {l+1, r+1};
            }
        }

        return {};

        
    }
};
