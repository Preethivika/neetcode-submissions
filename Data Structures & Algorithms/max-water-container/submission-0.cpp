class Solution {
public:
    int maxArea(vector<int>& heights) {

        // Brute force
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
    }
};
