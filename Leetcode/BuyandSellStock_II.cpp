#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
int numDays = prices.size();
    int maxProfit = 0;
    int buyorsell = 0;
    int i = 0;
    int numDays = prices.size();

    //Multiple buy, sell
    while (i< numDays -1) {
        if(i==numDays -1)
            break;
        while (i<numDays-1 && prices[i+1] <= prices[i])
            i++;
        maxProfit -= prices[i];
        
        while (i<numDays-1 && prices[i+1]>prices[i]) {
            i++;
        }
        
        maxProfit+=prices[i];
    }
    if (maxProfit < 0)
        return 0;
    else    
        return maxProfit;
    
}