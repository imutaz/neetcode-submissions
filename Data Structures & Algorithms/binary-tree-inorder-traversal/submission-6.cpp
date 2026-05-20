

class Solution {
public:
    vector <int> values;
    vector<int> inorderTraversal(TreeNode* root) {
        if (!root) return values;

        inorderTraversal(root->left);
        values.push_back(root->val);
        inorderTraversal(root->right);

        return values;
    }
};