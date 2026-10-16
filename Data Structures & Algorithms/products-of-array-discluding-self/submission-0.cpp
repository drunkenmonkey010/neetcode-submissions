class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n=nums.size();
        vector<int>op(n,1);
        int product=1;
        

        for(int i=0;i<n;i++)
        {
            op[i]=product;
            product*=nums[i];
        }
       int suff=1;
        for(int i=n-1;i>=0;i--)
        { 
            op[i]*=suff;
            suff*=nums[i];

        }

        return op;

    }
};
