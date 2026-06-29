class Solution {
public:
    int maxArea(vector<int>& heights) {

        // Brute force
        /* 
        int size = heights.size();
        int result =0;
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                result = max(result, (j-i) * min(heights[i] , heights[j]));
            }
        }
        return result;
        */


        //Two pointers

        int size = heights.size();
        int result = 0;

        int left = 0, right = size-1;
        while(left < right)
        {
            result = max(result, (right-left)*min(heights[left], heights[right]));

            if(heights[left] <= heights[right])
            {
                left++;
            }else{
                right--;
            }
        }

        return result;

    }
};
