//http://blog.csdn.net/justlinux2010/article/details/11392959

#include <stdio.h>
#include <stdlib.h>

static int func2(int i,int j)
{
    int k;

    k = i + j;
    return k;
}

static int func(int fd,const char *ptr, int arg3, int arg4,int arg5,
	int arg6, int arg7, int arg8)
{
    int ret;

    ret = arg7 + arg8;

    func2(fd, arg3);

    return ret;
}

int main(void)
{
    func(12, "Hello,World!",3, 4, 5, 6, 7,8);

    return 0;
}
