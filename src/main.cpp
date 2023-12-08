#include <iostream>
#include <vector>
#include "libs/student/student.h"
struct SRect {
    int width;
    int height;
};

class CRect {
public:
    int width;
    int height;
};
using namespace std;
int main() {
    
    CRect r2{};
    std::cout << r2.width << "*" << r2.height << std::endl;
    SRect r1{};
    std::cout << r1.width << "*" << r1.height << std::endl;
    vector<int> v;
    v.push_back(1);
    for(auto i : v){
        cout<< i<<endl;
    }
    student s(10,"yang");
    s.print();
    return 0;
}