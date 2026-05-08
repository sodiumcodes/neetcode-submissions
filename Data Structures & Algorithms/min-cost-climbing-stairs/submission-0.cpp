class Solution {
public:
    int solve(vector<int>& cost, int n, vector<int>& dp, int i){
        if(i>=n){
            return 0;
        }
        if(dp[i]==-1){
            dp[i] = cost[i] + min( solve(cost,n, dp, i+1 ), solve(cost,n, dp, i+2) );
        }
        return dp[i] ;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        //dp state: dp[i] = min cost of climibing stairs from i to n. 
        //dp table and initialization
        vector<int> dp(n+1, -1);
        return min( solve(cost, n, dp, 0), solve(cost, n, dp, 1) );
    }
};
