class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();

        int dp[len][2];
        dp[0][0] = -prices[0];
        dp[0][1] = 0;
        for (int i = 1; i < len; i++) {
            dp[i][0] = max(dp[i - 1][0], -prices[i]);
            dp[i][1] = max(dp[i - 1][0] + prices[i], dp[i - 1][1]);
        }
        return max(dp[len - 1][0], dp[len - 1][1]);
    }
};