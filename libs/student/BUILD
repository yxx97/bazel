cc_library(
    name = "student",
    srcs = glob(["*.cpp"]),
    hdrs = glob(["*.h"]),
    visibility = ["//visibility:public"],
)

# libs/student/test/*
cc_test(
    name = "students_test",
    srcs = glob(["test/*.cpp"]),
    deps = [
        ":student",
        "@com_google_googletest//:gtest_main",
    ],
)
