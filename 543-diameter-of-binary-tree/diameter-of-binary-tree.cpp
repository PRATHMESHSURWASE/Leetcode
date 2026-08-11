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
int height(TreeNode* root){
    if(root==NULL) return 0;
    int left =height(root->left);
    int right=height(root->right);
    return max(left,right)+1;
}
int diameter(TreeNode* root){
    if(root==NULL) return 0;
    int ans=0;
    int l=diameter(root->left);
    int r=diameter(root->right);
    int current=height(root->left)+height(root->right);
    return max(current,max(l,r));

   

}
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
       return diameter(root);
        
    }
};