// Given a binary tree, return the preorder traversal of its nodes' values.

// For example:
// Given binary tree {1,#,2,3},
//    1
//     \
//      2
//     /
//    3
// return [1,2,3].

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> res;
        if(!root) return res;
        stack<TreeNode*> myStack;
        myStack.push(root);
        while(!myStack.empty()) {
            TreeNode *curNode = myStack.top();
            myStack.pop();
            res.push_back(curNode->val);
            if(curNode->right) myStack.push(curNode->right);
            if(curNode->left) myStack.push(curNode->left);
        }
        return res;
    }
};
