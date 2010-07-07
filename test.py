#! /usr/bin/env python

import cppwrap

a = cppwrap.DoubleKeeper(5)
print a.transmogrify(6)
b = cppwrap.DoubleKeeper2(5)
print b.transmogrify(6)
print cppwrap.transmogrify_from_cpp(a, 6)
print cppwrap.transmogrify_from_cpp(b, 6)

print
print b.get_number2(10)
