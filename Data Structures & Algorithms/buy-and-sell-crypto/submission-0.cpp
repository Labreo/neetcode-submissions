class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sale = 0;int temp = 0;
        for(int i = 0;i<prices.size();++i){
            for(int j=i;j<prices.size();++j){
                temp = prices[j] - prices[i];
                if(sale<temp){
                    sale = temp;
                }
            }
        }
        return sale;
    }
};
