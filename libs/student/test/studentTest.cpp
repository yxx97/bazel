//
// Created by 杨鑫鑫 on 2023/12/8.
//

#include "libs/student/student.h"
#include "gtest/gtest.h"

class StudentTest : public ::testing::Test {
protected:
    void SetUp() override {
        s = new student(10, "yang");
    }

    void TearDown() override {
        delete s;
    }

    student *s{};
};

TEST_F(StudentTest, test1) {
    EXPECT_EQ(s->getAge(), 10);
    EXPECT_EQ(s->getName(), "yang");
}
