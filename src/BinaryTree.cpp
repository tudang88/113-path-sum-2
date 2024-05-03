#include <iostream>
#include "BinaryTree.h"
using namespace std;

// TODO: solution breath first search
/**
 * traverser all level
*/
/**
 * target function
*/
void Solution::dfs_sum(TreeNode *currentNode, int targetSum, int& currentSum, vector<int>& curPath, vector<vector<int>>& ans)
{
    // base case
    if (!currentNode) return;
    currentSum += currentNode->val;
    curPath.push_back(currentNode->val);
    dfs_sum(currentNode->left, targetSum, currentSum, curPath, ans);
    dfs_sum(currentNode->right, targetSum, currentSum, curPath, ans);

    // confirm result
    if (!currentNode->left && !currentNode->right) {
        if (currentSum == targetSum) {
            ans.push_back(curPath);
        }
    }
    // remove current node
    curPath.pop_back();
    currentSum -= currentNode->val;
}


/**
 * target method
*/
vector<vector<int>> Solution::pathSum(TreeNode *root, int targetSum)
{
    int curSum = 0;
    vector<vector<int>> ans;
    vector<int> curPath;
    dfs_sum(root, targetSum, curSum, curPath, ans);
    return ans;
}