#include "serial.h"

#define DEV "/dev/ttyUSB0"
#define PULSE 9600

/**
*@breif 	main()
*/
int main(int argc, char **argv)
{
	int fd;
	int nread;
	char buff[512];
	char *dev = DEV ;
	fd = OpenDev(dev);
	if (fd>0)
    set_speed(fd,PULSE);
	else
		{
		printf("Can't Open Serial Port!\n");
		exit(0);
		}
  if (set_Parity(fd,8,1,'N')== FALSE)  // 8位数据，非两位的停止位，不使用奇偶校验 ，不允许输入奇偶校验

  {
    printf("Set Parity Error\n");
    exit(1);
  }

//				int bit;
//				bit=write(fd,"n",1);
//				printf("%d\n",bit);
				for(;;){
   			nread = read(fd,buff,512);
				buff[nread]='\0';
				printf("%s\n",buff);
			  }

    //close(fd);
    //exit(0);
}
