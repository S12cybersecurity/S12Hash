#include <iostream>
#include "S12HashClass.h"

using namespace std;

int main(){
    S12HashClass hashobj = S12HashClass("HashingTest");
    unsigned long long hash = hashobj.getFinalHashValue();
    cout << "Hash value: " << hash << endl;
    return 0;
}