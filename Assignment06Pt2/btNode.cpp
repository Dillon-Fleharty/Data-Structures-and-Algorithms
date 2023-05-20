#include "btNode.h"

// write definition for bst_insert here
void bst_insert(btNode*& bst_root, int insInt)
{
    btNode* cursor = bst_root;

    if(bst_root == 0)
    {
        btNode* new_root = new btNode;
        new_root->data = insInt;
        new_root->left = new_root->right = 0;
        bst_root = new_root;
        return;
    }

    while (cursor != 0)
    {
        if (cursor->data > insInt)
        {
            if(cursor->left == 0)
            {
                cursor->left = new btNode;
                cursor->left->data = insInt;
                cursor->left->left = cursor->left->right = 0;
                return;
            }

            else
            {
                cursor = cursor->left;
            }
        }
        else if(cursor->data < insInt)
        {
            if(cursor->right == 0)
            {
                cursor->right = new btNode;
                cursor->right->data = insInt;
                cursor->right->left = cursor->right->right = 0;
                return;
            }
            else
            {
                cursor = cursor->right;
            }
        }
        else
        {
            return;
        }
    }

}


bool bst_remove(btNode*& bst_root, int remInt)
{
    if (bst_root == 0)
    {
        return false;
    }
    if (remInt < bst_root->data)
    {
       return bst_remove(bst_root->left, remInt);
    }
    else if (remInt > bst_root->data)
    {
        return bst_remove(bst_root->right, remInt);
    }
    else
    {
        if (bst_root->left != 0 && bst_root->right != 0)
        {
            bst_remove_max(bst_root->left, bst_root->data);
        }
        else if (bst_root->left == 0)
        {
                btNode *temp = bst_root->right;
                delete bst_root;
                bst_root = temp;
        }
        else if (bst_root->right == 0)
        {
                btNode *temp = bst_root->left;
                delete bst_root;
                bst_root = temp;
        }
        else
        {
                bst_root = 0;
        }

        return true;

    }

}

// write definition for bst_remove_max here
void bst_remove_max(btNode*& bst_root, int& remInt)
{
    if (bst_root->right == 0)
    {
        remInt = bst_root->data;
        btNode* temp = bst_root->left;
        delete bst_root;
        bst_root = temp;
    }
    else
    {
        bst_remove_max(bst_root->right, remInt);
    }

}

void portToArrayInOrder(btNode* bst_root, int* portArray)
{
    if (bst_root == 0) return;
    int portIndex = 0;
    portToArrayInOrderAux(bst_root, portArray, portIndex);
}

void portToArrayInOrderAux(btNode* bst_root, int* portArray, int& portIndex)
{
    if (bst_root == 0) return;
    portToArrayInOrderAux(bst_root->left, portArray, portIndex);
    portArray[portIndex++] = bst_root->data;
    portToArrayInOrderAux(bst_root->right, portArray, portIndex);
}

void tree_clear(btNode*& root)
{
    if (root == 0) return;
    tree_clear(root->left);
    tree_clear(root->right);
    delete root;
    root = 0;
}

int bst_size(btNode* bst_root)
{
    if (bst_root == 0) return 0;
    return 1 + bst_size(bst_root->left) + bst_size(bst_root->right);
}
