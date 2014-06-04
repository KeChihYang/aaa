//
//  mapping.h
//  aaa
//
//  Created by steve on 2014/5/29.
//  Copyright (c) 2014年 steve. All rights reserved.
//

#ifndef __aaa__mapping__
#define __aaa__mapping__

#include <iostream>
#include "bump_node.h"
#include <vector>
using namespace std;
class Map
{
public:
    Map(vector<BumpNode *> initial,int type);
    ~Map();
    void read_ring(box *temp);
    void draw_line();
    void draw_box_line(box *temp);
    
private:
    vector<box *> box_map;

    int type_graph;             //0:typical 1:stagger
};

#endif /* defined(__aaa__mapping__) */
