class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int>freq;
        for(int i:nums)
        {
            freq[i]++;
        }

        priority_queue<pair<int,int>,
                       vector<pair<int,int>>,
                       greater<pair<int,int>>>mp;

        for(auto& it:freq)
        {
            mp.push({it.second,it.first});

            if(mp.size()>k)
            mp.pop();
        }    
      vector <int> res;
       while(!mp.empty())
       {
        res.push_back(mp.top().second);
        mp.pop();
       }

       return res;

      
        
        
    }
};
