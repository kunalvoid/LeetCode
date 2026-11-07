class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        string ans="";
        while(i>=0 || j>=0 || carry!=0){
            int n1=0;
            int n2=0;
            if(i>=0) n1=num1[i]-'0';
            if(j>=0) n2=num2[j]-'0';

            int add=n1+n2+carry;

            int digit=add%10;
            carry=add/10;

          ans.push_back(digit+'0');
          i--;
          j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};