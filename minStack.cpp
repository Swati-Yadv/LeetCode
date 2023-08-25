#include <bits/stdc++.h>
using namespace std;

class MinStack
{
public:
    stack<int> s, mn;

    void push(int val)
    {
        if (s.empty() || mn.top() >= val)
            mn.push(val);
        s.push(val);
    }
    void pop()
    {
        if (s.top() == mn.top())
            mn.pop();
        s.pop();
    }

    int top()
    {
        return s.top();
    }

    int getMin()
    {
        return mn.top();
    }
};

int main()
{
    MinStack *obj = new MinStack();
    obj->push(2);
    obj->push(6);
    obj->push(8);
    int param1 = obj->top();
    int param2 = obj->getMin();

    cout<<param1<<endl;
    cout<<param2<<endl;
    return 0;
}
