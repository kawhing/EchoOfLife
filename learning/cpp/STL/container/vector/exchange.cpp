#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v){
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
}
void test01(){
    vector<int> v1;
    for(int i = 0; i < 10; ++i){
        v1.push_back(i);
    }
    printVector(v1);
    vector<int> v2;
    for(int i = 0; i < 10; ++i)
        v2.push_back(i + 10);
    cout << "交换前" << endl;
    cout << "v1: ";
    printVector(v1);
    cout << "v2: ";
    printVector(v2);
    cout << "交换后" << endl;
    v1.swap(v2);
    cout << "v1: ";
    printVector(v1);
    cout << "v2: ";
    printVector(v2);
}
//2.实际用途
//巧用swap交换两个容器的内容
void test02(){
    vector<int> v;
    for(int i = 0; i < 10; ++i){
        v.push_back(i);
    }
    cout << "v的容量 : " << v.capacity() << endl;
    cout << "v的大小 : " << v.size() << endl;
    v.resize(3);//重新设置容器的大小
    cout << "v的容量 : " << v.capacity() << endl;
    cout << "v的大小 : " << v.size() << endl;
    //巧用swap收缩内存
    vector<int>(v).swap(v);//创建一个临时对象，交换内存
    cout << "v的容量 : " << v.capacity() << endl;
    cout << "v的大小 : " << v.size() << endl;
}
int main(){
    test02();
    return 0;
}