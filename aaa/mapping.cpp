//
//  mapping.cpp
//  aaa
//
//  Created by steve on 2014/5/29.
//  Copyright (c) 2014年 steve. All rights reserved.
//

#include "mapping.h"

Map::Map(vector<BumpNode *> initial,int type)
{
    type_graph = type;
}
Map::~Map()
{
    
}
void Map::read_ring(box *temp)
{
    box_map.push_back(temp);
}

void Map::draw_line()
{
    if(type_graph==0)
    {
        while(!box_map.empty())
        {
            draw_box_line(box_map.front());
            box_map.erase(box_map.begin());
        }
    }
}

void Map::draw_box_line(box *temp)
{
    
    
}