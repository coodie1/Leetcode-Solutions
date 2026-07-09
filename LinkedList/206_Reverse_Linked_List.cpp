/*
Problem:206. Reverse Linked List

Difficulty:Easy

Pattern: Reverse Linked List

Approach:
1. Maintain three pointers:
   - prev
   - curr
   - nextNode
2. Reverse the links one by one.
3. Return prev as the new head.
*/

/** Provided by Leetcode
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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL){
            return NULL;
        }
        else{
            ListNode* curr = head;
            ListNode* prev = NULL;
             ListNode* nextNode = NULL;
              while(curr!=NULL){
                nextNode = curr->next; //save node list after current node 
                curr->next = prev;
                prev= curr; //move prev one step ahead
                curr =nextNode; //move current one step aheaed
              }         
            return prev; 
        }
        
    }
};