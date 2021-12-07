#include <string.h>
#include <stdio.h>

int main(int argc, char  *argv[])
{
	if (argc ==2){
		printf("Checking License: %s\n", argv[1]);
		if(strcmp(argv[1], "XFCE-GNOME-KDE-PLASMA")==0){
			printf("Access Granted!\n");
		}else{
			printf("Wrong Key! Try Again\n");
		}
	}else{
		printf("Usage: <Key>\n");
	}
	return 0;
}
