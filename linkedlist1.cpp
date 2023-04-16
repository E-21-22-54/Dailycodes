/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
 //#include<cmath.h>
    int getDecimalValue(ListNode* head) {
        vector<int>temp;
        while(head!=NULL){
            temp.push_back(head->val);
            head=head->next;
        }
        int n=temp.size();
        int sum=0;
        for(int i=0;i<temp.size();i++){
            if(temp[i]==1){
                sum=sum+pow(2,n-1);
                n--;
            }
            else
            n--;
        }
        return sum;
    }
};