class X{
    public:
        int m;
        int mf(int v){int ant=m; m=v; return ant;}
};

int main()
{
    X var;
    var.m = 7;
    int x = var.mf(9);
}