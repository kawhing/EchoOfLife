#include <iostream>
#include <string>
using namespace std;
// 字符串比较
void test01(){
    string str1 = "hello";
    string str2 = "xello";
    if(str1.compare(str2) == 0)
        cout << "str1 等于 str2" << endl;
    else
        cout << "str1 不等于 str2" << endl;
}

int main(){
    test01();
    return 0;
}