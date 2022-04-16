#include "utest.h"

MS::UTest::UTest(): _num_tests(0), _num_failed_tests(0), _num_successful_tests(0){}
MS::UTest::UTest(std::string name): _num_tests(0), _num_failed_tests(0), _num_successful_tests(0), _suit_name(name){}

void MS::UTest::test(std::string test_name, bool flag){
    
    std::pair<std::string, bool> p;
    p.first = test_name;
    p.second = flag;

    _tests.push_back(p);
    _num_tests++;
    if(!flag){
        _num_successful_tests++;
    }else{
        _num_failed_tests++;
    }
}

void MS::UTest::report(){

    std::cout<<"------- Summary of "<< _suit_name << " tests -------"<<std::endl;
    std::cout<<"Total number of tests: "<<_num_tests<<std::endl;
    std::cout<<"Total number of successful tests: "<<_num_successful_tests<<std::endl;
    std::cout<<"Total number of failed tests: " <<_num_failed_tests<<std::endl<<std::endl;

    std::cout<<"Detailed summary: "<<std::endl;
    for(auto p: _tests){
        std::string r = (p.second == 0)?"Success":"Fail";
        std::cout<<p.first<<" : "<<r<<std::endl;
    }
}
