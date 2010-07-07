
#include "cppwrap_lib.h"

void voidfunc (void)
{
}

double doublefunc (double a, double b, double c)
{
    return a + b + c;
}

DoubleKeeper::DoubleKeeper (double factor)
    : number (factor)
{
}

DoubleKeeper2::DoubleKeeper2 (double factor)
    : DoubleKeeper (factor)
{
}


DoubleKeeper::~DoubleKeeper ()
{
}

double DoubleKeeper::get_number () const
{
    return number;
}

void DoubleKeeper::set_number (double f)
{
    number = f;
}

double
DoubleKeeper::transmogrify (double value) const
{
    return value*number;
}

double
DoubleKeeper2::transmogrify (double value) const
{
    return value+number;
}

double DoubleKeeper2::get_number2 (int p) const
{
    return number+p;
}


double
transmogrify_from_cpp (DoubleKeeper const *obj, double value)
{
    return obj->transmogrify (value);
}

