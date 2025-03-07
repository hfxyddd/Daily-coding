class Solution {
    public:
        int numSquares(int n) {
            vector<int> dp(n + 1);
            for (int i = 0; i <= n; i++) { 
                dp[i] = i;
                for (int j = 1; j * j <= i; j++) { 
                    dp[i] = min(dp[i - j * j] + 1, dp[i]);
                }
            }
    
            return dp[n];
        }
    };