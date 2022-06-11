//주요 5개국의 확진자 정보를 따로 받아와서 함께 출력하고 평균구하는 프로그램.
#include "avg.h"

struct info {
	int kor = {0};
	char country[255] = {0};
	int jpn;
	int usa;
	int rus;
	int uk;
};


 char* read_country()
{
	 char arr[255];
	FILE* fp = fopen("country.txt", "r");
	if (fp == NULL)
	{
		perror("파일을 불러오는데 실패했습니다\n");
		return arr;
	}
	while (fgets(arr, sizeof(arr), fp) != NULL) {
		return arr;
		fclose(fp);
	}
	
	
		
}

 int read_conf()
 {
	 int arr = {};
	 FILE* fp = fopen("conf.txt", "r");
	 if (fp == NULL)
	 {
		 perror("파일을 불러오는데 실패했습니다\n");
		 return arr;
	 }
	 while ((fscanf(fp, "%d", &arr) != NULL)) {
		 return arr;
		 fclose(fp);
	 }
		
 }

 int main()
 {
	 struct info i;
	 int r=0;
	 strcpy(i.country,read_country());
	 i.kor = read_conf();
	 i.usa = 118000;
	 i.jpn = 16788;
	 i.uk = 10079;
	 i.rus = 3713;
	 printf("==============================================================================================\n");
	 printf("   국가: %s\n",i.country);
	 printf("확진자수:%d  %d  %d  %d  %d\n",i.kor,i.usa,i.jpn,i.uk,i.rus);
	 printf("==============================================================================================\n");
	 printf("\n\n");
	 int a = i.kor;
	 int b = i.usa;
	 int c = i.jpn;
	 int d = i.uk;
	 int e = i.rus;
	 double aver = average(a,b,c,d,e);
	 printf("국가 평균 확진자수:%f\n", aver);
	 return 0;
 }
