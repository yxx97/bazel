//
// Created by 杨鑫鑫 on 2023/12/8.
//

#include "libs/student/student.h"
#include <iostream>
#include <utility>

student::student(int age, string name) {
    this->age = age;
    this->name = std::move(name);
}

void student::print() {
    cout << "name:" << this->name << " age:" << this->age << endl;
}

void student::setAge(int i) {
    this->age = i;
}
void student::setName(string t) {
    this->name = std::move(t);
}

int student::getAge() const {
    return this->age;
}

string student::getName() {
    return this->name;
}

