/*************************************************************************
	> File Name: ServerBase.h
	> Author: 
	> Mail: 
	> Created Time: Fri 27 Jul 2018 02:48:06 AM PDT
 ************************************************************************/

#ifndef _SERVERBASE_H
#define _SERVERBASE_H
#include"Noncopyable.h"
class CServerBase:public CNoncopyable
{
public:
    CServerBase();
    ~CServerBase();

    virtual reloadConfig();

    bool isTerminated();

    void terminate();
    
  static CServerBase * getServeiceInstal(); 
};


#endif
