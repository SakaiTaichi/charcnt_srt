#include "defs.h"

int main(int argc, char *argv[])
{
  FILE *fp;
  char *fname = "10M-text.txt";
  int c,i,opt;
  int num[1000];
  
  fp = fopen( fname, "r" );
  if( fp == NULL ){
    printf( "%sファイルが開けません¥n", fname );
    return -1;
	}
	
	while( (c = fgetc( fp )) != EOF ){  //カウント
		if(c>47 && c<58) num[c]++;  //0~9
		if(c>64 && c<91) num[c]++;  //A~Z
		if(c>96 && c<123) num[c]++;  //a~z
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
				printf("%c %d\n",i,num[i]);
				}
			for(i=65;i<91;i++){
				printf("%c %d\n",i,num[i]);
			}
			for(i=97;i<123;i++){
				printf("%c %d\n",i,num[i]);
			}
			return 1;
	  }
	}

  

  fclose( fp );
  return 0;
}
