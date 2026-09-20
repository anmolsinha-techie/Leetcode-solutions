class Solution {
public:
    int reverseDegree(string s) {
        long long sum=0;
        for(int i=0;i<s.size();i++){
            int alphapos=26-(s[i]-'a');
            int stringpos= i+1;
            sum+=(long long)alphapos*stringpos;
        }
        return sum;
        
    }
};