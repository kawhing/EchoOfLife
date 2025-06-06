#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        Person(string name, int age){
            this->m_Name = name;
            this->m_Age = age;
        }
        string m_Name;
        int m_Age;
};

template <class T>
bool myCompare(T a, T b){
    if(a == b){
        return true;
    }
    return false;
}

// 利用具体化的Person类型，具体化优先调用
template<> bool myCompare(Person p1, Person p2){
    if(p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age){
        return true;
    }
    return false;
}

void test01(){
    int a = 10, b = 20;
    bool ret = myCompare(a, b);
    if(ret) cout << "a == b" << endl;
    else cout << "a != b" << endl;
}

void test02(){
    Person p1("Tom", 10);
    Person p2("Tom", 10);
    bool ret = myCompare(p1, p2);
    if(ret) cout << "p1 == p2" << endl;
    else cout << "p1 != p2" << endl;
}

int main(){
    test02();
    return 0;
}