
cdef extern from "cppwrap_lib.h":
    void voidfunc()
    double doublefunc(double a, double b, double c)

    cdef cppclass DoubleKeeper:
        DoubleKeeper()
        DoubleKeeper(double factor)
        void set_number(double f)
        double get_number()
        double transmogrify(double value)

    cdef cppclass DoubleKeeper2(DoubleKeeper):
        DoubleKeeper2(double factor)
        double get_number2(int p)

    double transmogrify_from_cpp (DoubleKeeper *obj, double value)
