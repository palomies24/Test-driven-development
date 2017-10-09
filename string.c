int my_strlen(char *c)
{
	int l=0;
	while(*(c+l) != '\0')
	{
		l++;
	}
	return l;
}
int my_strcpy(char *s, char *d)
{
	int i=0;
	while (*(d+i) != '\0')
	{
	*(s+i) = *(d+i);
	i++;
	}
	*(s+i)='\0';
}

int mystrcmp (char *s, char *d){

	int i=0;

	while (*(s+i) == *(d+i) && (*(s+i) != '\0' || *(d+i) != '\0'))i++;
		if(*(s+i) == '\0' && *(d+i) == '\0') return 0;
			else if(*(s+i) > *(d+i)) return 1;
				else if(*(s+i) < *(d+i)) return -1;
}
int str2upper(char *s) {

	int c = 0;
	int counter = 0;

	while (*(s+c) != '\0') {
		if (*(s+c) >= 'a' && *(s+c) <= 'z'){
		*(s+c) = *(s+c) -'a'+'A';
		counter++;
		}
		c++;
	}
	return counter;
}
int str2lower_(char *s) {

	int c = 0;
	int counter = 0;

	while (*(s+c) != '\0') {
		if (*(s+c) >= 'A' && *(s+c) <= 'Z'){
		*(s+c) = *(s+c) -'A'+'a';
		counter++;
		}
		c++;
	}
	return counter;
}
/*int str_strip_numbers(unsigned char *s)
{
}

char * strdupl(char *s){
	char *a = (char*)malloc(sizeof(char)*my_strlen(s));
	my_strlen(a,s);
	return a;
}
*/
