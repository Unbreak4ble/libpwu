#ifndef RDWR_MEM_H
#define RDWR_MEM_H

//external
int read_mem(int fd, void * addr, char * read_buf, int len);
int write_mem(int fd, void * addr, char * write_buf, int len);

#endif