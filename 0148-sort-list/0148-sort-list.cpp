class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> values;

        ListNode* curr = head;

        while (curr) {
            values.push_back(curr->val);
            curr = curr->next;
        }

        sort(values.begin(), values.end());

        curr = head;
        int i = 0;

        while (curr) {
            curr->val = values[i++];
            curr = curr->next;
        }

        return head;
    }
};