class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int ecnt=0;
        for(auto it : nums){
            int n=it;
            int count=0;

            while(n != 0){
                int digit=n%10;
                count++;
                n/=10;
            }
            if(count %2 ==0) ecnt++;
        }
        return ecnt;
        
    }
};