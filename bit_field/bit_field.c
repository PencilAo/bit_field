#define _CRT_SECURE_NO_WARNINGS
//λ�� - ����������ʡ�ռ�   -- ����ƽ̨ -- ������ʹ��
//λ�������μ���(����char����)
//��
struct A
{
    int a : 2;     //��ʾa��ֻ��������2��bit
    int b : 5;
    int c : 10;
    int d : 30;
};

int main()
{
    printf("%d", sizeof(struct A));
    return 0;
}