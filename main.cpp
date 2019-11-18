//
//  main.cpp
//  11.12-02
//
//  Created by 吕恒 on 2019/11/12.
//  Copyright © 2019 lvheng. All rights reserved.
//

#include <iostream>
#include <bitset>
#include <vector>
//using namespace std;
using namespace std;
int main(int argc, const char * argv[]) {
    int i,j,result;
//    cin>>i>>j;
    try {
        cin>>i>>j;
        result=i/j;
    } catch (runtime_error err) {
        err.what();
    }
    if (j==0) {
        throw runtime_error("除数为零！");
    }
    cout<<result<<endl;
    int *p=new int(10);
    cout<<*p<<endl;
    return 0;
}
