//
//  main.cpp
//  store
//
//  Created by Павел on 13.10.2022.
//
#include "Products.hpp"
#include <iostream>
#include <string>
#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    std::string name;
    int number=0;
    double price=0;
    print_prod(name,number,price );
    std::cout<<full_price(name,number,price)<<std::endl;
    std::cout<<sell(name,number,price)<<std::endl;
   
    return 0;
}
