class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == NULL) return {};
        vector<int> ans;
        ans = inorderTraversal(root->left);
        ans.push_back(root->val);
        vector<int> temp = inorderTraversal(root->right);

        for(auto i: temp) ans.push_back(i);
        return ans;
    }
};
