class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;


        map<int, int> m;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        
        priority_queue<pair<int, int>> pq;
        for(auto val: m)
        {
            pq.push({val.second, val.first});
        }
        
        for(int i = 0; i < k; i++)
        {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};