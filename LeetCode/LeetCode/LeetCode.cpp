// LeetCode.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


 
class Solution 
{
public :
    struct ListNode
    {
        int val;
        ListNode* next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode* next) : val(x), next(next) {}
    };
public:
    static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        int carry = 1;
        int decimal = 0, result = 0;
        ListNode* retNode = new ListNode();
        ListNode* node = retNode;

        while (l1 != nullptr)
        {
            decimal += l1->val * carry;

            if (l1->next == nullptr)
                break;

            l1 = l1->next;

            carry *= 10;
        }

        carry = 1;
        result = decimal;
        decimal = 0;

        while (l2 != nullptr)
        {
            decimal += l2->val * carry;

            if (l2->next == nullptr)
                break;

            l2 = l2->next;

            carry *= 10;
        }

        carry = 1;
        result += decimal;

        while (result > 0)
        {
            node->val = result % 10;
            result /= 10;

            if (result <= 0)
                break;
            node->next = new ListNode();
            node = node->next;
        }

        return retNode;
    }
};

int main()
{
    //Solution::ListNode* node1 = new Solution::ListNode(3);
    //Solution::ListNode* temp = node1;
    //temp->next = new  Solution::ListNode(4);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(2);
    //temp = temp->next;

    //Solution::ListNode* node2 = new Solution::ListNode(4);
    //temp = node2;
    //temp->next = new  Solution::ListNode(6);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(5);
    //temp = temp->next;

    Solution::ListNode* node1 = new Solution::ListNode(9);
    Solution::ListNode* temp = node1;
    temp->next = new  Solution::ListNode(9);
    temp = temp->next;
    temp->next = new  Solution::ListNode(9);
    temp = temp->next;
    temp->next = new  Solution::ListNode(9);
    temp = temp->next;
    temp->next = new  Solution::ListNode(9);
    temp = temp->next;
    temp->next = new  Solution::ListNode(9);
    temp = temp->next;
    temp->next = new  Solution::ListNode(9);
    temp = temp->next;

    Solution::ListNode* node2 = new Solution::ListNode(9);
    temp = node2;
    temp->next = new  Solution::ListNode(9);
    temp = temp->next;
    temp->next = new  Solution::ListNode(9);
    temp = temp->next;
    temp->next = new  Solution::ListNode(9);
    temp = temp->next;

    Solution::addTwoNumbers(node1, node2);
}
