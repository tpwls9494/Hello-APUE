#include "apue.h"

int main(void) {
	char	*ptr;
	size_t	size;
	if (chdir("/usr/spool/uucppublic") < 0)
		printf("chdir failed");
	ptr = path_alloc(&size);
	if (getcwd(ptr, size) == NULL)
		printf("getcwd fziled");
	printf("cwd = %s\n", ptr);
	exit(0);
}
