#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20]="I Love";// ¿Õ¼äÒª¹»
	char str2[] = " hqyyyy";
	char str3[] = " Forever!!!";

	strncat_s(str1, str2, 4);
	strncat_s(str1, str3, 8);

	printf("%s", str1);

	return 0;
}