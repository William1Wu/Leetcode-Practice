class Solution {
public:
   
    int numJewelsInStones(string J, string S) {
        int stones[S.length()];
        int res = 0;

        for(int j=0; j<S.length();j++)
            stones[j] = int(S[j]);

        for(int i=0; i<J.length();i++)
        {
            res = res + count(stones, stones + S.length(), int(J[i]));
        }
        
        return res;
    }
};