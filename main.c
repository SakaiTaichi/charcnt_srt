#include "defs.h"

int main(int argc, char *argv[])
{
	FILE *fp;
	char *fname = argv[2];	
	int c,i,j,opt;
	int num[N][2];
	
	fp = fopen( fname, "r" );
	if( fp == NULL ){
		printf( "%sファイルが開けません¥n", fname );
		return -1;
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<2;j++) num[i][j]=0;
	}
	
	while( (c = fgetc( fp )) != EOF ){  //カウント
		if(c>47 && c<58){
			num[c][0]=c;
			num[c][1]++;//0~9
			}
		if(c>64 && c<91){
			num[c][0]=c;
			num[c][1]++;//A~Z
			}
		if(c>96 && c<123){
			num[c][0]=c;
			num[c][1]++;//a~z
			}
	}
	while((opt = getopt(argc, argv,"adh")) != -1){
	  switch(opt){
		  case 'a':  //昇順
			QSort(num, 0, N - 1);
			ShowDataA(num, N);
			break;
		  case 'd':  //降順
			QSort(num, 0, N - 1);
			ShowDataD(num, N);
			break;
		  case 'h':  //ヘルプ
			help();
			break;
		  default:
			for(i=48;i<58;i++){
				printf("%c %d\n",i,num[i][1]);
				}
			for(i=65;i<91;i++){
				printf("%c %d\n",i,num[i][1]);
			}
			for(i=97;i<123;i++){
				printf("%c %d\n",i,num[i][1]);
			}
			return 1;
	  }
	}

  

  fclose( fp );
  return 0;
}
