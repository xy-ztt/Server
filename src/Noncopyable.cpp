/*************************************************************************
	> File Name: Noncopyable.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 27 Jul 2018 02:33:38 AM PDT
 ************************************************************************/

#include"./Noncopyable.h"

CNoncopyable::CNoncopyable(const CNoncopyable&)
{
    
}

const CNoncopyable& CNoncopyable::operator=(const CNoncopyable&)
{
    
    return *this;
}

