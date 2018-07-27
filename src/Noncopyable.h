/*************************************************************************
	> File Name: Noncopyable.h
	> Author: 
	> Mail: 
	> Created Time: Fri 27 Jul 2018 02:30:44 AM PDT
 ************************************************************************/

#ifndef _NONCOPYABLE_H
#:q

protected:
    CNoncopyable(){};
    ~CNoncopyable(){};
private:
    CNoncopyable(const CNoncopyable&);
    const CNoncopyable& operator=(const CNoncopyable &);
};

#endif
