// Following tutorial by David Miller

#include <stdio.h>
#include <iostream>
#include "Net.h"

using namespace std;

int main(){
    vector<unsigned> topology = {3, 2, 1};
    vector<double> input = {2, 2, 2};
    vector<double> target;
    vector<double> result;

    Net net(topology);
    net.feedForward(input);
    net.backProp(target);
    net.getResult(result);

    cout << "Press any key to end program" << endl;
    getchar();
    return 0;
}