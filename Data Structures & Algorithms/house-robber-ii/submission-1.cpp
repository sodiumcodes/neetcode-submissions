class Solution {
public: 
    int solve(vector<int>& nums, int n, vector<int>& dp, int i){
        if(i>=n){
            return 0;
        }
        if(dp[i]==-1){
            dp[i] = max(nums[i]+ solve(nums, n, dp, i+2), solve(nums, n, dp,i+1 ));
        }
        return dp[i];
    }
    int rob(vector<int>& nums) {
        int n= nums.size();
        vector<int> dp(n+1, -1);
        if(n==1) return nums[0];
        int a= solve(nums, n-1, dp, 0);
        vector<int> dp2(n+1, -1);
        int b= solve(nums, n, dp2, 1);
        return max(a, b);
    }
};
