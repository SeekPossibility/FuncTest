//
//  TEST_SOA.cpp
//  FuncTest
//
//  Created by 杨丰 on 2019/9/4.
//  Copyright © 2019 杨丰. All rights reserved.
//

#include <iostream>
#include <vector>
#include "timer.hpp"


struct Vars {
    double rho;
    double P;
};
Vars AOS[100000];

struct VarsVector {
    double rho[100000];
    double p[100000];
};
VarsVector SOA;

int main(int argc, const char * argv[]) {
    Timer timer;
    
    
    timer.reset();
    for (int i = 0; i < 100000; ++i) {
        AOS[i].rho++;
    }
    std::cout<<"Test for AOS: "<<timer.durationInSeconds()<<std::endl;
    
    timer.reset();
    for (int i = 0; i < 100000; ++i) {
        SOA.rho[i]++;
    }
    std::cout<<"Test for SOA: "<<timer.durationInSeconds()<<std::endl;
}
