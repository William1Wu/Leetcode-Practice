class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        int num = 0;
        while(head)
        {
            num <<= 1;
            num+=head->val;
            head = head->next;
        }

        return num;
    }
};
