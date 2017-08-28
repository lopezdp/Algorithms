//
//  main.cpp
//  EvenTreeAlgo
//
//  Created by David P. Lopez on 8/27/17.
//  Copyright © 2017 David P. Lopez. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

// Define data structure to create tree
struct Node
{
    // Value of the node
    int val;
    
    // Pointer to the Left node value
    Node *e1;
    
    // Pointer to the Right node value
    Node *e2;
};

// Function prototype
void getData(Node *, int *, int *);
Node createNode();

int main(int argc, const char * argv[]) {
    // declare variables to handle input - Complete
    // 1st line includes two ints N & M
    // N = total number of nodes in tree
    // M = is the number of edges
    // M defines the amount of remaining edges
    // that will need to be taken as input as edges
    // The next M lines contains 2 ints u & v
    // which specify the edges of the tree
    
    // Need to remove edges such that
    
    int n, m, u, v;
    
    cin >> n >> m;
    cin.ignore();
    
    if (n >= 2 && n <= 100){
        //node array to store each node
        Node *nodes = nullptr;
        nodes = new Node[n];
        
        // do something with input
        for (int i = 0; i < m; i ++){
            
            // create new nodes and store in nodes array
            nodes[i] = createNode();
            
            // take in child node edges & clear buffer
            cin >> u >> v;
            cin.ignore();
            
            // get values u & v and store them in each node
            getData(&nodes[i], &u, &v);
            
        }
        
    } else{
        // throw exception
        cout << "ERROR: Constraints are 2 <= N <= 100" << endl;
        
        throw exception();
    }
    
    
    return 0;
}

Node createNode(){
    Node *node = nullptr;
    node = new Node;
    return *node;
}

void getData(Node *node, int *u, int *v) {
    // initialize root node at i = 0
    
}










