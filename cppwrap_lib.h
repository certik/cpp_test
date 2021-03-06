
void voidfunc(void);

double doublefunc (double a, double b, double c);


class DoubleKeeper
{
protected:
    double number;

public:
    DoubleKeeper (double number);
    virtual ~DoubleKeeper ();

    void set_number (double num);
    double get_number () const;
    virtual double transmogrify (double value) const;
};

double transmogrify_from_cpp (DoubleKeeper const *obj, double value);

class DoubleKeeper2: public DoubleKeeper
{
public:
    DoubleKeeper2 (double number);
    double get_number2 (int p) const;
    virtual double transmogrify (double value) const;
};
