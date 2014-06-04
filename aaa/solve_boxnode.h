//
//  solve_boxnode.h
//  
//
//  Created by steve on 2014/5/26.
//
//

#ifndef ____solve_boxnode__
#define ____solve_boxnode__

#include <iostream>
#include "bump_node.h"
#include <algorithm>
#include <vector>
using namespace std;



bool boxnode_measurement(box *input);
bool sort_node_cmp (BumpNode *i,BumpNode *j);
bool measure_diagonal(box *input,int node_capacity);
void sort_node(box *input);



#endif /* defined(____solve_boxnode__) */
