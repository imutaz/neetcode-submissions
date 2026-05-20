

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        int left = counter(root->left);
        int right = counter(root->right);

        if (abs(left - right) > 1) return false;
       
       return (isBalanced(root->left) && isBalanced(root->right));
        
    }

    int counter(TreeNode* root) {
        if (!root) return 0;
        return 1 + max(counter(root-> left), counter(root->right));
    }

};
