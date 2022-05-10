
# include<stdio.h>
void s(int *, int *);
int main(void)
{
    int a, b, c;
    int *p1, *p2, *p3;
    scanf("%d %d %d", &a, &b, &c);
    p1 = &a;
    p2 = &b;
    p3 = &c;
    if(a>b)
        s(p1, p2);
    if(a>c)
        s(p1, p3);
    if(b>c)
        s(p2, p3);
    printf("%d %d %d\n", a, b, c);
}
void s(int *s1, int *s2)
{
    int t;
    t = *s1; *s1 = *s2; *s2 = t;
}
