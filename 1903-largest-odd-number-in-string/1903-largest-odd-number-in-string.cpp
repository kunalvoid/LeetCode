class Solution {
public:
    string largestOddNumber(string num) {
        
        int pos=-1;
        for(int i=num.length()-1; i>=0; i--){

            int last=num[i]-'0';
            if(last%2 != 0){
               return num.substr(0,i+1);
            }
        }
        return "";
    }
};