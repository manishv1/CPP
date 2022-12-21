#include<bits/stdc++.h>
using namespace std;
 
class Node
{
    public:
        int data;
        Node *left;
        Node *right;
   
        Node(int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }    
};

 
 Node *buildTree()
 {
        int d;
        cin>>d;
        if(d == 0)
        {
            return NULL;
        }

        Node *root = new Node(d);
        root->left = buildTree();
        root->right = buildTree();
        return root;
 }
 
 void print(Node *root)
 {
    if( root == NULL)
    {
       
        return;
    }

    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
 }    

 
 
int main()
{
    Node *root = buildTree();
    print(root); 
    return 0;
}