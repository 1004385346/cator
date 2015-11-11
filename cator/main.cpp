//
//  main.cpp
//  123
//
//  Created by 孙宇 on 15/11/11.
//  Copyright © 2015年 孙宇. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,*p;
    a=9;
    p=&a;
    printf("a=%x &a=%x p=%x &p=%x *p=%x \n",a,&a,p,&p,*p);
    return 0;
}
