#include <iostream>
#include <deque>
using namespace std;

void printDeque(const deque<int> d){
    for(deque<int>::const_iterator it = d.begin(); it < d.end(); ++it)
        cout << *it << " ";
    cout << endl;
}
void test01(){
    deque<int> d1;
    for(int i = 0; i < 10; ++i)
        d1.push_back(i);
    printDeque(d1);
    if(d1.empty()) cout << "d1为空!" << endl;
    else{
        cout << "d1不为空!" << endl;
        cout << "d1的大小为: " << d1.size() << endl;
        // deque容器没有容量概念
    }
    d1.resize(15, 1);
    printDeque(d1);
    d1.resize(5);
    printDeque(d1);
}
int main(){
    test01();
    return 0;
}