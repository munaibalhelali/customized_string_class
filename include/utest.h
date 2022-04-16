#ifndef _UTEST_H_
#define _UTEST_H_

#include <iostream>
#include <string>
#include <vector>

namespace MS{

    class UTest{
        long _num_tests;
        long _num_failed_tests;
        long _num_successful_tests;
        std::string _suit_name;
        std::vector<std::pair<std::string, bool>> _tests;
        UTest();
        public:
            UTest(std::string name);

            void test(std::string test_name, bool flag);
            void report();
    };
};

#endif