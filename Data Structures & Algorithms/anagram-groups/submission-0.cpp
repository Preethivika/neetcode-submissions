class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> m;
    vector<vector<string>> result;
     for(int i=0; i<strs.size(); i++)
     {
        string str2 = strs[i];
        sort(str2.begin(), str2.end());
        m[str2].push_back(strs[i]);
     }   

     for(auto& val : m)
     {
       result.push_back(val.second); 
     }

     return result;
    }
};
