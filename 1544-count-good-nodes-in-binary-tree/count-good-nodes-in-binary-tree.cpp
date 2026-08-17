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
int counting(TreeNode* root ,int maxi){
    int count=0;
    TreeNode* node=root;
    if(root==NULL) return 0;
    
     if(maxi<=node->val) count+=1;
      maxi=max(maxi,node->val);
    int left=counting(root->left,maxi);
    
     int right=counting(root->right,maxi);
    
return count+left+right;

}
    int goodNodes(TreeNode* root) {
        return counting(root,INT_MIN);
    }
};