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

const int n = 100000;

struct Vars {
    double rho;
    double u;
    double P;
};
Vars AOS[n];

struct VarsVector {
    double rho[n];
    double u[n];
    double p[n];
};
VarsVector SOA;

int main(int argc, const char * argv[]) {
    Timer timer;
    timer.reset();
    for (int i = 0; i < n; ++i) {
        AOS[i].rho++;
    }
    std::cout<<"Test for AOS: "<<timer.durationInSeconds()<<std::endl;
    
    timer.reset();
    for (int i = 0; i < n; ++i) {
        SOA.rho[i]++;
    }
    std::cout<<"Test for SOA: "<<timer.durationInSeconds()<<std::endl;
}
