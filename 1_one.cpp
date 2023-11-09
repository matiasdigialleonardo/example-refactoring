// class A
// {
// public:
// int var;
// };


class A
{
    public:
        A() {};

    int getVar() const
    {
        return _var;
    }

    int setVar(int var)
    {
        _var = var;
    }

    private:
        int _var;
};