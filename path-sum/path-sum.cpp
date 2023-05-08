/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int suum(TreeNode* root)
{
    if(root==NULL) return 0;
    int left=suum(root->left);
    int right=suum(root->right);
    return left + right + root->val;
}

    bool hasPathSum(TreeNode* root, int targetSum) {
    if(root == NULL) return false;
    if(root->left == NULL && root->right == NULL && root->val == targetSum) return true;
    return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
}

};