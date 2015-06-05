//
// Created by LIFE on 31.05.2015.
//

#ifndef BINARYTREETEMPLATE_NODE_H
#define BINARYTREETEMPLATE_NODE_H

#include <stdio.h>
#include <iostream>


using namespace std;


template <class N>
class Node {
    private:
    N value;
    Node<N>* left;
    Node<N>* right;
    public:
//----------------------------------------------------------------------------
    Node() {
        left  = 0;
        right = 0;
    }
//----------------------------------------------------------------------------
    Node (int c) {

    }
//----------------------------------------------------------------------------
    Node (Node<N>& node) {
        right = node.right;
        left = node.left;
        value = node.GetValue();
    }
//----------------------------------------------------------------------------
    N GetValue () {
        return value;
    }
//----------------------------------------------------------------------------
    void EnterValue (N a) {
        value = a;
    }
//----------------------------------------------------------------------------
    Node<N>* GetRight () {
        return right;
    }
//----------------------------------------------------------------------------
    Node<N>* GetLeft () {
        return left;
    }
//----------------------------------------------------------------------------
    void SetRight (Node<N>* tmp) {
        right = tmp;
    }
//----------------------------------------------------------------------------
    void SetLeft (Node<N>* tmp) {
        left = tmp;
    }
//----------------------------------------------------------------------------
    void Add (N k) {
        if (this->value <= k) {
            if (this->right) this->right->Add(k);
            else {
                Node<N>* node = new Node();
                node->value = k;
                this->right = node;
            }
        }
        if (this->value > k) {
            if (this->left) this->left->Add(k);
            else {
                Node<N>* node = new Node();
                node->value = k;
                this->left = node;
            }
        }
    }
//----------------------------------------------------------------------------
    inline friend ostream& operator << (ostream s, const Node<N>& node) {
        if (node.left) s << *(node.left);
        s << node.value << endl;
        if (node.right) s << *(node.right);
        return s;
    }
};


#endif //BINARYTREETEMPLATE_NODE_H
