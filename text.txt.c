#include <stdio.h>
#include <stdlib.h>
int main ()
{
  FILE * file = NULL;
  int i,n;
  char strng[100];
  char floc[20];
  char str1;

	printf("\n*INPUT*\n");
	printf(" Input file name file to open : ");
	scanf("%s",floc);

    file = fopen(floc, "wa");
    printf(" Input the number of lines to be appended : ");
    scanf("%d", &n);
    printf("The lines are : \n");

    for(i = 0; i < n+1;i++)
    {
    fgets(strng, sizeof strng, stdin);
    fputs(strng, file);
    }
  fclose (file);

	file = fopen (floc, "r");
    printf("\n*OUTPUT*");
	printf("\nThe inside of the file %s is  :\n", floc);
	str1 = fgetc(file);
	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(file);
		}
    printf("\n\n");
    fclose (file);
//------- End of reading ------------------
  return 0;
}
