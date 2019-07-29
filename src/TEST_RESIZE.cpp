//
//  main.cpp
//  FuncTest
//
//  Created by 杨丰 on 2019/7/29.
//  Copyright © 2019 杨丰. All rights reserved.
//

#include <iostream>
#include <vector>
#include "timer.hpp"

int main(int argc, const char * argv[]) {
    Timer timer;
    
    std::vector<double> a(1000000);
    for (int i = 0; i < a.size(); ++i) {
        a[i] = i;
    }
    
    std::vector<double> b;
    timer.reset();
    b.resize(1000000);
    std::cout<<"Test for Resize: "<<timer.durationInSeconds()<<std::endl;
    
    std::vector<double> c;
    timer.reset();
    c = a;
    std::cout<<"Test for Operator=: "<<timer.durationInSeconds()<<std::endl;
}
