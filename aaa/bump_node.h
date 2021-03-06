//
//  bump_node.h
//  bump_node
//
//  Created by 李勁璋 on 2014/5/19.
//  Copyright (c) 2014年 Li,Ching-Chang. All rights reserved.
//
#include <vector>
using namespace std;

#ifndef __MPSC__bump_node__
#define __MPSC__bump_node__
typedef enum
{
    DirectRoute,
    UnDirectRoute,
}LCSType;

typedef enum
{    
	inCircle,
    outCircle,
}MPSCType;

class BumpNode
{
public:
    BumpNode(int node_id, int *wire_id, LCSType LCS_type, bool is_virtual, int absoluted_X1, int absoluted_Y1, int absoluted_X2, int absoluted_Y2, int relative_X, int relative_Y);
    BumpNode(int node_id, int *wire_id, LCSType LCS_type, bool is_virtual);
	~BumpNode();
	int id;
	int *wireId;//which driver
	LCSType lcsType;
    MPSCType mpscType;
	bool isVirtual;
    int sort_value;
    int absolutedX1, absolutedY1, absolutedX2, absolutedY2;
    int relativeX, relativeY;

private:
};

struct box
{
    vector<BumpNode *> top;
    vector<BumpNode *> right;
    vector<BumpNode *> buttom;
    vector<BumpNode *> left;
    bool top_lock;
    bool right_lock;
    bool buttom_lock;
    bool left_lock;
    int cooridinate;
};
#endif /* defined(__MPSC__bump_node__) */
