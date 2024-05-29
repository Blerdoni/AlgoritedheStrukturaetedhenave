#include <iostream>
#include <iomanip>
#include <queue>
#include <string>

using namespace std;

template <typename T>
void printQueue(queue<T> queuee)
{
    while (!queuee.empty())
    {
        cout << queuee.front() << " ";
        queuee.pop();
    }
}
template <typename T>
void fillQueue(queue<T> &queuee, int nr)
{
    for (int i = 0; i < nr; i++)
    {
        T n;
        cout << "Ju lutemi plotesoni queue ne poziten " << i << " : ";
        cin >> n;
        queuee.push(n);
    }
}
int main()
{
    // Queue with the things that it want
    /*
    queue<int>queuee;
    queuee.push(1);
    queuee.push(2);
    queuee.push(3);
    queuee.push(4);
    queuee.push(5);

    if (!queuee.empty())
    {
        cout<<" { ";
        printQueue(queuee);
        cout<<" } "<<endl;
    }
    */

    // Queue with the things that the user wants it
    int D;
    cout << "Zgjidhni tipin e te dhenave per queue:\n";
    cout << "1. int\n";
    cout << "2. char\n";
    cout << "Zgjedhja juaj: ";
    cin >> D;

    cout << "Shenoni sa deshironi madhesin e Queue: ";
    int nr;
    cin >> nr;
    switch (D)
    {
    case 1:
    {
        queue<int> doni;
        fillQueue(doni, nr);
        if (!doni.empty())
        {
            cout << " { ";
            printQueue(doni);
            cout << " } " << endl;
        }
        break;
    }
    case 2:
    {
        queue<char> doni;
        fillQueue(doni, nr);
        if (!doni.empty())
        {
            cout << " { ";
            printQueue(doni);
            cout << " } " << endl;
        }
        break;
    }
    default:

        break;
    }

    return 0;
}