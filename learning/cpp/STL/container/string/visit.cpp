#include <iostream>
#include <string>
using namespace std;
//字符串的存取
void test01(){
    string str = "hello";
    cout << "str = " << str << endl;
    //1. 通过[]访问单个字符
    for(int i = 0; i < str.size(); ++i){
        cout  << str[i] << " ";
    }
    cout << endl;
    //2. 通过at方式访问单个字符
    for(int i = 0; i < str.size(); ++i){
        cout << str.at(i) << " ";
    }
    cout << endl;
    str[0] = 'x';
    cout << "str = " << str << endl;
    str.at(1) = 'x';
    cout << "str = " << str << endl; 
}

int main(){
    test01();
    return 0;
}