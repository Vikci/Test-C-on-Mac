# include <stdio.h>
/* hello world */
// int main()
// {
//   printf("%s\n","hello world");
//   return 0;
// }


// http://www.runoob.com/cprogramming/c-file-io.html
int main()
{
  FILE *fp = fopen("./tmp/fp.txt", "w+");
  fputs("Testing for fputs\n", fp);
  fprintf(fp, "Testing for fprintf\n");
  fclose(fp);

  char buff[255];
  fp = fopen("./tmp/fp.txt", "r");
  fscanf(fp, "%s", buff);
  printf("1: %s\n", buff );  // 1: Testing

  fgets(buff, 255, (FILE*)fp);
  printf("2: %s\n", buff );   // 2:  for fputs

  fgets(buff, 255, (FILE*)fp);
  printf("3: %s\n", buff );   // 3: Testing for fprintf
  fclose(fp);
}





