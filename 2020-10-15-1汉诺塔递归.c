////汉诺塔递归
#include<stdio.h>
int i = 1;//记录步数 
void move(int n, char a, char c)//显示移动路径 
{
	printf("第%d步:把第%d个盘子%c--->%c\n", i++, n, a, c);
}

void Hanoi(int n, char a, char b, char c)//汉诺塔递归算法 
{
	if (n == 1) 
		move(n, a, c);//如果只有一个盘子则直接从A柱移到C柱 
	else {
		Hanoi(n - 1, a, c, b);//把A柱n-1个盘子移到B柱
		move(n, a, c);//把最后一个盘子从A柱移到C柱 
		Hanoi(n - 1, b, a, c);//把B柱n-1个盘子移到C柱 
	}
}
int main()
{
	int num;
	scanf("%d", &num);//输入盘子的个数 
	Hanoi(num, 'A', 'B', 'C');
	return 0;
}
