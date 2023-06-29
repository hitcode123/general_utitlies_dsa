#include<bits/stdc++.h>

using namespace std;
struct TreeNode 
{
  int data;
  TreeNode* left;
  TreeNode* right;
};

TreeNode* buildTree()
{
    int data;
    cout<<"Enter the data for the node  ";
    cin>>data;
    if(data==-1)
    {
        return nullptr;
    }
    TreeNode* createdNode=new TreeNode;
    createdNode->data=data;
    createdNode->left=buildTree();
    createdNode->right=buildTree();
    return createdNode;
}
// void preOrder(TreeNode* root)
// {

//     if(root==nullptr)
//     {
//         return;
//     }
//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);
    
// }
// void postOrder(TreeNode* root)
// {

//     if(root==nullptr)
//     {
//         return;
//     }
//     postOrder(root->left);
//     postOrder(root->right);
//     cout<<root->data<<" ";
    
// }
void inOrder(TreeNode* root)
{
    if(root==nullptr)
    {
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
    // 
}
int main()
{
TreeNode* treenode=buildTree();
// cout<<"pre_order"<<endl;
// preOrder(treenode);
// cout<<endl;
 cout<<"in_order"<<endl;
 inOrder(treenode);
// cout<<endl;
// cout<<"post_order"<<endl;
// postOrder(treenode);
// cout<<endl;


return 0;
}