#include <iostream>
#include "testing.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	//master1
	//master2
	//master3
	//master4
	int i, M, sum;
	sum = 0;
	char string, text[20][81];
	char DOC[1621] = "";
	printf("Введите количество строк(максимально 21): ");
	scanf_s("%d", &M);
	getchar();
	
	if ((M > 21) || (M < 1)) {
		error_printf("Неверное количество строк");
		return 0;
	}

	for (i = 0; i < M; i++) {
		puts("Введите содержимое строки: ");
 		gets_s(text[i]);
		strlen(text[i]);
		if ((strlen(text[i]) > 81) || (strlen(text[i]) < 1)) {
			error_printf("Неправильное содержимое строки");
			return 0;
		}
	}
	printf("\n");
	
	for (i = 0; i < M; i++) {
		sum += strlen(text[i]);
	}
	//second_branch 1
	//second_branch 2
	//second_branch 3
	//second_branch 4
	for (i = 0; i < M; i++) {
		if (isalnum(text[i + 1][0])) {
			_strrev(text[i]);
			if (isalnum(text[i][0])) {
				_strrev(text[i]);
				strcat_s(DOC, text[i]); strcat_s(DOC, " ");
				strcat_s(DOC, text[i + 1]);
				i++;
			}
			else {
				_strrev(text[i]);
			}
		}
			strcat_s(DOC, text[i]);
			strcat_s(DOC, text[i + 1]);
	}
	//third_branch 1: change 1;
	//third_branch 2: change 2;
	//third_branch 3: change 3;
	//third_branch 4: change 4;
	DOC[sum] = '\0';
	char COD[1621] = "";
	strcpy(COD, DOC);
	COD[sum] = '\0';
	char* istr;

	char seps[] = "?!.";
	char* next_token;
	char* token;
	
		token = strtok_s(DOC, seps, &next_token);
		
		while (token != NULL) {		
			puts(token);
			token = strtok_s(NULL, seps, &next_token);
			istr = strstr(COD, token);
			printf("%s", COD[istr-token+1]);

		}

	return 0;
}