#include <unistd.h>
#include <stdio.h>

void ft_loop(char *line0,char *line1,char *line2,char *line3,char *line4,char *line5,char *line6,char *line7,char *line8)
{
	int k;
	int j;
	k =0;
	j = 0;
	char *block[9][9] = {line0,line1,line2,line3,line4,line5,line6,line7,line8};
	
	while (block[j][k]!='\0')
	{
		printf("%s\n",block[j][k]);
		k++;
	}
	
	/*while (k<=81)
	{
		if ((k%9)==0)
		{
			printf("\n");
		}
		printf("Block ");
		k++;
	}*/
	/*printf("%s\n",line0);
	printf("%s\n",line1);
	printf("%s\n",line2);
	printf("%s\n",line3);
	printf("%s\n",line4);
	printf("%s\n",line5);
	printf("%s\n",line6);
	printf("%s\n",line7);
	printf("%s\n",line8);
	*/
	//int total;


	

}
int main(int argc,char **argv)
{
	//ft_loop();
	int k;
	int j;
	k =0;
	j = 1;
	int m;
	if (argc!=10)
	{
		write(1,"Error\n",6);
	}
	else
	{
			while (j<=9)
			{
				while(argv[j][k]!='\0')
				{
					if((argv[j][k]>=1)&&(argv[j][k]<=9))
					{
						argv[j][k] = argv[j][k]+48;	
					}
					if (argv[j][k]=='.')
					{
						argv[j][k]=48;
					}
				
					//printf("%c",argv[j][k]);
					k++;
				}
				//printf("\n");
				k=0;
				j++;
			}
			ft_loop(argv[1],argv[2],argv[3],argv[4],argv[5],argv[6],argv[7],argv[8],argv[9]);
	}
	return(0);
}
