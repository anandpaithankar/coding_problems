#pragma once

#ifndef ABSTRACT_REQUEST_H
#define ABSTRACT_REQUEST_H

class AbstractRequest
{
public:
    virtual ~AbstractRequest() = default;
    virtual void setValue(int value) = 0;
    virtual void process() = 0;
    virtual void finish() = 0;
};

#endif
