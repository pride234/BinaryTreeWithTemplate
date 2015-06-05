//
// Created by LIFE on 31.05.2015.
//

#ifndef BINARYTREETEMPLATE_TREE_H
#define BINARYTREETEMPLATE_TREE_H

#include "Node.h"

template <class T>
class Tree {
private:
    Node<T>* root;
public:
//----------------------------------------------------------------------------
    Tree() {
        root = 0;
    }
//----------------------------------------------------------------------------
   Tree(int c) {

    }
//----------------------------------------------------------------------------
    Node<T>* CopyTree (Node<T>* node) {
        if (!node) return 0;
        else {
            Node* node1 = new Node();

        }
    }
//----------------------------------------------------------------------------
    Tree(Tree<T>& tree) {
        Node* rot = tree.root;
        if (tree.root->GetRight() != 0)  tree.root->SetRight(CopyTree (tree.root->GetRight()));
        if (tree.root->GetLeft() != 0)   tree.root->SetLeft (CopyTree  (tree.root->GetLeft()));
    }
//----------------------------------------------------------------------------

};


#endif //BINARYTREETEMPLATE_TREE_H
