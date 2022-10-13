//
//  Products.cpp
//  store
//
//  Created by Павел on 13.10.2022.
//

#include "Products.hpp"
#include <string>
#include <stdio.h>
#include <iostream>

void print_prod(std::string name, int num, double price){
    std::cout<<"Введите наименование продукта : ";
    std::cin>>name;
    std::cout<<"Введите количество,шт  : ";
    std::cin>>num;
    std::cout<<"Введите цену, руб.  : ";
    std::cin>>price;
    
    std::cout<<"\nИНФОРМАЦИЯ О ПРОДУКТЕ"<<std::endl;
    std::cout<<"Наименование : "<<name<<std::endl;
    std::cout<<"Количество : "<<num<<std::endl;
    std::cout<<"Цена, руб. : "<<price<<std::endl;
    
}
int full_price(std::string name, int num, double price){
    double f_price=0;
    std::cout<<"\nВведите наименование продукта : ";
    std::cin>>name;
    std::cout<<"Введите количество, шт: ";
    std::cin>>num;
    std::cout<<"Введите цену, руб.  : ";
    std::cin>>price;
    std::cout<<"\nПОЛНАЯ СТОИМОСТЬ ОСТАТКА ТОВАРА, руб.: ";
    f_price=num*price;
    return f_price;
    
}
int sell(std::string name, int num, double price){
    int sell_num=0;
    std::cout<<"\nВведите наименование продукта : ";
    std::cin>>name;
    std::cout<<"Введите количество, шт  : ";
    std::cin>>num;
    std::cout<<"Введите цену, руб.  : ";
    std::cin>>price;
    std::cout<<"Введите количество купленного товара  : ";
    std::cin>>sell_num;
    std::cout<<"\nОСТАТОК ТОВАРА,шт: ";
    num-=sell_num;
    return num;
    
}
