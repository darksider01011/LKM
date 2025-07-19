obj-m += hello.o

# This line specifies a target called "all", which is the default target when no specific target is specified. The target "all" will build the kernel module
all:
    make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
# This line specifies a target called "clean", which will clean up any files created during the build process.
clean:
    make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
