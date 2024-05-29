#include <iostream>
#include <iomanip>
#include <string>
#include <queue>
#include <cmath>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *createNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}
void PreorderNode(Node *n)
{
    if (n == NULL)
        return;

    cout << n->data << " ";
    PreorderNode(n->left);
    PreorderNode(n->right);
}
void InorderNode(Node *n)
{
    if (n == NULL)
        return;

    InorderNode(n->left);
    cout << n->data << " ";
    InorderNode(n->right);
}
void PostorderNode(Node *n)
{
    if (n == NULL)
        return;

    PostorderNode(n->left);
    PostorderNode(n->right);
    cout << n->data << " ";
}
void insertNode(Node *&rrenja, int data)
{
    if (rrenja == nullptr)
    {
        rrenja = createNode(data);
        return;
    }

    Node *rrenjaaktuale = rrenja;
    Node *prindi = nullptr;

    while (rrenjaaktuale != nullptr)
    {
        prindi = rrenjaaktuale;
        if (data < rrenjaaktuale->data)
            rrenjaaktuale = rrenjaaktuale->left;
        else if (data > rrenjaaktuale->data)
            rrenjaaktuale = rrenjaaktuale->right;
        else
        {
            cout << "Nyja ekziston .\n";
            return;
        }
    }

    if (data < prindi->data)
        prindi->left = createNode(data);
    else if (data > prindi->data)
        prindi->right = createNode(data);
}

int main()
{
    cout << "======================================================\n";
    int nr;
    cout << "Shenoni numrin qe deshironi te keni ne rrenj : ";
    cin >> nr;
    Node *fillimi = createNode(nr);
FILLIMI:
    int n, N;
    cout << "Shenoni sa femij deshironi ti shtoni ne pem : ";
    cin >> n;
    if (n == 0)
    {
        cout << "Ju nuk keni dashur te shtoni femij ne pem.";
        return 0;
    }
    else if (n < 0)
    {
        cout << "Numri duhet te jet pozitiv.";
        return 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Shenoni nje numer qe deshironi te shtoni ne pem : ";
            cin >> N;
            insertNode(fillimi, N);
        }
    }

    char pj;
    cout << "A deshironi te shtoni perseri femij p-Po, j-Jo : ";
    cin >> pj;
    if (pj == 'p')
    {
        goto FILLIMI;
    }
    else
    {
        int nr;
    FILLIMI1:
        cout << "Ju mundeni qe ta printoni pemen binare ne 3 menyra te ndryshme \n";
        cout << " 1 per Preorder \n 2 per Inorder \n 3 per Postorder " << endl;
        cout << "Shenoni si deshironi qe ta printoni pemen binare ";
        cin >> nr;
        if (nr == 1)
        {
            cout << " { ";
            PreorderNode(fillimi);
            cout << " } " << endl;
        }
        else if (nr == 2)
        {
            cout << " { ";
            InorderNode(fillimi);
            cout << " } " << endl;
        }
        else if (nr == 3)
        {
            cout << " { ";
            PostorderNode(fillimi);
            cout << " } " << endl;
        }
        else
        {
            cout << "Ju nuk keni zgjedhur njerin nga 3 menyrat e lartcekuara : \n";
        }
        char a;
        cout << "A deshironi te printoni perseri pemen binare p-Po , j-Jo : ";
        cin >> a;
        if (a == 'p')
        {
            goto FILLIMI1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}