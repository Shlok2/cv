#include <iostream>
#include <string.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void sumreplace(node *root)
{
    if (root == NULL)
    {
        return;
    }
    sumreplace(root->left);
    sumreplace(root->right);
    if (root->left != NULL)
    {
        root->data += root->left->data;
    }
    if (root->right != NULL)
    {
        root->data += root->right->data;
    }
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main(int argc, char const *argv[])
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->left->left = new node(4);
    root->right = new node(3);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    preorder(root);
    cout << endl;
    sumreplace(root);
    preorder(root);
    return 0;
}
