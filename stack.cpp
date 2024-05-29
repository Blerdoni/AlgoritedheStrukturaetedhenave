#include <iostream>
#include <iomanip>
#include <stack>

using namespace std;

void printStack(stack<int> stack){
    while (!stack.empty())
    {
        cout<< stack.top()<< " ";
        stack.pop();
    }
    
}
int main(){
    //empty , size, push , pop , top 
    // stack<int>numbersStack;
    // int n;
    // cout<<"Write the size of the Stack : ";
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     int nr;
    //     cout<<"Write a number that you want to inset into the Stack in pozition "<<i<<" : ";
    //     cin>>nr;
    //     numbersStack.push(nr);
    // }
    // cout<<endl;
    // cout<<" { ";
    // printStack(numbersStack);
    // cout<<" } ";
    // cout<<endl;
    // cout<<"Stack size = "<<numbersStack.size()<<endl;
    // if (numbersStack.empty())
    // {
    //     cout<<"Stack is empty";
    // }
    // else {
    //     cout<<"Stack is not empty";
    // }
    stack<int>stackk;
    int n;
    cout<<"Shenoni madhesin e stekut : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cout<<"Shenoni numrin ne poziten "<<i<<" qe deshironi te shtoni ne stack : ";
        cin>>nr;
        stackk.push(nr);
    }
    cout<<endl;
    cout<<" {  ";
    printStack(stackk);
    cout<<" } "<<endl;
    cout<<"Madhesia e stekut eshte : "<<stackk.size()<<endl;
    if (stackk.empty())
    {
        cout<<"Steku eshte i zbrazet. ";
    }
    

    
    
    


    return 0;
}