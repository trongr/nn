#include <cstdlib>
#include <iostream>
#include "Neuron.h"

using namespace std;

double randomWeight(){
    return rand() / double(RAND_MAX);
}

Neuron::Neuron(unsigned numOutputs)
{
    for (unsigned c = 0; c < numOutputs; c++){
        Connection conn = Connection();
        conn.weight = randomWeight();
        outputWeights.push_back(conn);
    }
}

void Neuron::setOutput(double _output){
    output = _output;
}

void Neuron::feedForward(){
    cout << "feeding forward" << endl;
}