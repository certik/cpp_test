import cppwrap

a = cppwrap.DoubleKeeper(5)
print cppwrap.transmogrify_from_cpp(a, 6)
