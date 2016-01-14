OS_Assignment1_Linux_Kernel
=============================
	
The main purpose of this assignment is to familiarize you with linux kernel and system calls. In particular, you will add a new system call and hook existing system calls in linux kernel. Note that the below instruction works for Ubuntu 11.04 and Linux Kernel 2.6.39. If you work on other Linux distribution or kernel version, the steps might change. For example, in Linux kernel version 3.x, you need to modify the file ```syscall_32.tbl``` instead of ```syscall_table_32.S```

Submit a report in PDF format that details of the following:

1.  What are kernel APIs? What is the difference between kernel APIs and system calls?

2.  What are roles of files in /boot/ (vmlinuz-\*, initrd.img-\*, grub, config\*)?

3.  Include the screenshots from tasks 1, 2 and 3 below.

####Task 1. Add “Hello World” system call
1. Prepare the virtual machine.

	>Install VirtualBox 
	
	>Download Ubuntu 11.04 Image
	http://virtualboxes.org/images/ubuntu/
	
	> You will work on this virtual machine.
	
	> To reduce time for compiling Linux kernel so you could use multiple CPU cores for your virtual machine and use ```$make -jn``` when compiling the kernel, where n is number of CPU cores.

2. Download Linux Kernel: https://www.kernel.org/ (2.6.39):
	ftp://ftp.kernel.org/pub/linux/kernel/v2.6/linux-2.6.39.tar.bz2  	

3. Extract the kernel to ```/usr/src/```

4. Write your own system call, named my_system_call.c and place it in the linux-2.6.39/kernel folder
		For example:
	```
	#include<linux/linkage.h>     
	#include<linux/kernel.h>
	
	asmlinkage long sys_hello(const char *msg)
	{
		printk(KERN_INFO “Hello I am in kernel space, %s”, msg);	
	    		return 0;
	}
	```

5. Declare your new system call in the kernel source.
Open the file ```linux-2.6.39/arch/x86/kernel/syscall_table_32.S``` and add the below line in the end of the file:
	```.long sys_hello```
Open the file ```linux-2.6.39/arch/x86/include/asm/unistd_32.h``` and add a new line after the line 
	```#define __NR_syncfs:```
	
	```
	#define NR_syshello 345
	//Change 345 to other number if it is already defined.
	```
	Change the line ```“#define NR_syscalls 345”``` to ```“#define NR_syscalls 346”```
	
	
Open the file ```linux-2.6.39/arch/x86/include/asm/unistd_64.h```, find line ```__SYSCALL(__NR_syncfs, sys_syncfs)``` and add two following lines after that line:
	```
	#define __NR_syshello 307
	__SYSCALL(__NR_syshello, sys_hello)
	//Change 307 to other number if it is already defined.
	```
Open the file ```linux-2.6.39/include/linux/syscalls.h``` and add the below line in the end of the file and before #endif:
	asmlinkage long sys_hello(const char *msg);


6. Declare your new system call in the Makefile:
	- Open the file linux-2.6.39/kernel/Makefile and find out the line: obj-y += groups.o. After this line, add a new line: 
		obj-y += my_system_call.o
7. 
