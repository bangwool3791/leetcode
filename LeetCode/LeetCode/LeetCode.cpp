// LeetCode.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

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
        ListNode* MyNode = new ListNode();
        ListNode* node = MyNode;
        bool bChecked = true;


        while (l1 != nullptr && l2 != nullptr)
        {

            if (node->val + l1->val + l2->val >= 10)
            {
                int data = node->val;
                node->val = (node->val + l1->val + l2->val) % 10;
                node->next = new ListNode();
                node = node->next;
                node->val = (data + l1->val + l2->val) / 10;
            }
            else
            {
                node->val = node->val + l1->val + l2->val;

                if (l1->next != nullptr || l2->next != nullptr)
                {
                    node->next = new ListNode();
                    node = node->next;
                }
            }

            l1 = l1->next;
            l2 = l2->next;
        }

        while (l1 != nullptr)
        {

            if (l1->val + node->val >= 10)
            {
                int data = node->val;
                node->val =  (node->val + l1->val) % 10;
                node->next = new ListNode();
                node = node->next;
                node->val = (data + l1->val) / 10;
            }
            else
            {
                node->val = node->val + l1->val;
                if (l1->next != nullptr)
                {
                    node->next = new ListNode();
                    node = node->next;
                }
            }
            l1 = l1->next;
        }

        while (l2 != nullptr)
        {

            if (l2->val + node->val >= 10)
            {
                int data = node->val;
                node->val = (node->val +l2->val) % 10;
                node->next = new ListNode();
                node = node->next;
                node->val = (data + l2->val) / 10;
            }
            else
            {
                node->val = node->val +l2->val;

                if (l2->next != nullptr)
                {
                    node->next = new ListNode();
                    node = node->next;
                }
            }
            l2 = l2->next;
        }
        return MyNode;
    }
};

int main()
{
    Solution::ListNode* temp = nullptr;

    //Solution::ListNode* node1 = new Solution::ListNode(1);
    //Solution::ListNode* temp = node1;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(0);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(1);
    //temp = temp->next;

    //Solution::ListNode* node2 = new Solution::ListNode(4);
    //temp = node2;
    //temp->next = new  Solution::ListNode(6);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(5);
    //temp = temp->next;

    //Solution::ListNode* node1 = new Solution::ListNode(9);
    //Solution::ListNode* temp = node1;
    //temp->next = new  Solution::ListNode(9);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(9);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(9);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(9);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(9);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(9);
    //temp = temp->next;

    //Solution::ListNode* node2 = new Solution::ListNode(9);
    //temp = node2;
    //temp->next = new  Solution::ListNode(9);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(9);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(9);
    //temp = temp->next;

    //Solution::ListNode* node1 = new Solution::ListNode(3);
    //temp = node1;
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

    //Solution::ListNode* node1 = new Solution::ListNode(9);
    //temp = node1;
    //temp->next = new  Solution::ListNode(9);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(9);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(9);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(9);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(9);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(9);
    //temp = temp->next;

    //Solution::ListNode* node2 = new Solution::ListNode(9);
    //temp = node2;
    //temp->next = new  Solution::ListNode(9);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(9);
    //temp = temp->next;
    //temp->next = new  Solution::ListNode(9);
    //temp = temp->next;

    Solution::ListNode* node1 = new Solution::ListNode(5);


    Solution::ListNode* node2 = new Solution::ListNode(5);

    Solution::addTwoNumbers(node1, node2);
}
