#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
	if(argc!=2) {
		printf(2, "INCORRECT NUMBER OF ARGUMENTS GIVEN!\n");
		exit();
	}
	printf(1, "square of %s is %d\n", argv[1], square(atoi(argv[1])));
	exit();
}
