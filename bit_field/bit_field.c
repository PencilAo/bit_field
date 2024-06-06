#define _CRT_SECURE_NO_WARNINGS
//位段 - 可以用来节省空间   -- 不跨平台 -- 不建议使用
//位段是整形家族(包括char类型)
//如
struct A
{
    int a : 2;     //表示a我只给他分配2个bit
    int b : 5;
    int c : 10;
    int d : 30;
};

int main()
{
    printf("%d", sizeof(struct A));
    return 0;
}