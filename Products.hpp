//
//  Products.hpp
//  store
//
//  Created by Павел on 13.10.2022.
//

#ifndef Products_hpp
#define Products_hpp
#include <string>
#include <stdio.h>

struct product{
    std::string name;
    int number = 0;
    double price;
};
void print_prod(std::string name, int num, double price);
int full_price(std::string name, int num, double price);
int sell(std::string name, int num, double price);

#endif /* Products_hpp */
