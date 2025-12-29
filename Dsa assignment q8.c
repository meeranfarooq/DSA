#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

int max(int a, int b) {
    return (a > b) ? a : b;
}

int height(struct node* root) {
    if (root == NULL)
        return 0;

    int lh = height(root->left);
    if (lh == -1) return -1;

    int rh = height(root->right);
    if (rh == -1) return -1;

    if (abs(lh - rh) > 1)
        return -1;

    return max(lh, rh) + 1;
}

int isBalanced(struct node* root) {
    return (height(root) != -1);
}

struct node* newNode(int data) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int main() {
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);

    if (isBalanced(root))
        printf("Tree is Balanced");
    else
        printf("Tree is Not Balanced");

    return 0;
}
