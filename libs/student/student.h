//
// Created by 杨鑫鑫 on 2023/12/8.
//

#ifndef BAZEL_STUDENT_H
#define BAZEL_STUDENT_H
#include <string>
using namespace std;

class student {
public:
    student(int age, string name);
    void print();
    void setAge(int i);
    void setName(string t);
    [[nodiscard]] int getAge() const;
    string getName();

private:
    int age;
    string name;
};


#endif //BAZEL_STUDENT_H
