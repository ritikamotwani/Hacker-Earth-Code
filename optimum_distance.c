#include<stdio.h>
#define initial 0
#define waiting 1
#define visited 2
#define MAX 1010
int Q[1000][2],state[1000][1000]={initial},distance[1000][1000];
void EnQ(int Q[][2],int y,int x,int *front,int *rear)
{
	if(*front==-1)
		*front =0;
	if(*rear==MAX-1)
		return;
	*rear = *rear +1;
	Q[*rear][0] = y;
	Q[*rear][1] = x;
	//  printf("\nEnqued\n")
}
int DeQ(int Q[][2],int *front,int *rear)
{
	if(*front==-1||*front>*rear)
		return -1;
	int z[2];
	z[0] = Q[*front][0];
		z[1] = Q[*front][1];
		*front = *front + 1;
	//  printf("\nDequed\n");
	return z[0];
}
void DFS(int n,int m, int twoy, int twox, int * front, int * rear)
{
	int k,l,g;
	EnQ(Q,twoy,twox,front,rear);
	state[twoy][twox] = waiting;
	distance[twoy][twox] = 0;

	while(*front<=*rear)
	{
		x[2] = DeQ(Q,front,rear);
		state[x[0]][x[1]] = visited;
		q1 = x[0]+1;
		q2 = x[1]+1;
		q3 = x[0]-1;
		q4 = x[1]-1;

		if(k<=f && state[k]==initial)
		{
			EnQ(Q,k,front,rear);
			state[k] = waiting;
			distance[k] = distance[s] + 1;
		}
		if(l>=1&&state[l]==initial)
		{
			EnQ(Q,l,front,rear);
			state[l] = waiting;
			distance[l] = distance[s] + 1;
		}
	}
	if(state[g]==visited)
		printf("%d\n",distance[g]);
	else
		printf("use the stairs\n");
}
int main()
{
	int n,m,front = -1, rear = -1,count = 0,i,j;
	int inp[n][m],twox[m],twoy[n];
	scanf("%d %d",&n, &m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			inp[i][j];
			if(inp[i][j] == 2)
			{
				twoy[count++] =i;
				twox[count] = j;
			}
		}
	}
	for(i=0;i<count;i++){
		DFS(n,m,twoy,twox,&front,&rear);
	}
}
