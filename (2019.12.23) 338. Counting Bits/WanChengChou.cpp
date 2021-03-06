class Solution {
public:
    vector<int> countBits(int num)
    {
        vector<int> answer;
        int max_lower_num = 0;
        for(int i=0; i<=num; i++)
        {
            if(i == 0)
            {
                answer.push_back(0);
            }
            else if((i & i-1) == 0)
            {
                answer.push_back(1);
                max_lower_num = i;
            }
            else
            {
                answer.push_back(answer[max_lower_num] + answer[i - max_lower_num]);
            }
            
        }
        return answer;
    }
};