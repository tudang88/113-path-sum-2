#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H
#include <iostream>
#include <queue>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

/**
 * solution class
*/
class Solution {
public:
    void dfs_sum(TreeNode *currentNode, int targetSum, int& currentSum, vector<int>& curPath, vector<vector<int>>& ans);
    vector<vector<int>> pathSum(TreeNode* root, int targetSum);
};
#endif