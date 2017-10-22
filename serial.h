#ifndef SERIAL_H
#define SERIAL_H

#ifndef TRUE
#define TRUE 0
#endif

#ifndef FALSE
#define FALSE -1
#endif

#include     <stdio.h>      /*标准输入输出定义*/
#include     <stdlib.h>     /*标准函数库定义*/
#include     <unistd.h>     /*Unix标准函数定义*/
#include     <sys/types.h>  /**/
#include     <sys/stat.h>   /**/
#include     <fcntl.h>      /*文件控制定义*/
#include     <termios.h>    /*PPSIX终端控制定义*/
#include     <errno.h>      /*错误号定义*/

void set_speed(int fd, int speed);   //Linux 下串口USB等设备通信编程入门2中有终端属性的获取设置函数
int set_Parity(int fd,int databits,int stopbits,int parity);
int OpenDev(char *Dev);

#endif
