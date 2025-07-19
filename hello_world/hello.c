// Kernel initialization functions
#include <linux/init.h>

// Kernel function 
#include <linux/kernel.h>

// Add functionality to the kernel
#include <linux/module.h>

// Module license type
MODULE_LICENSE("GPL");

// Initialization function 
// The "__init" keyword tells the kernel to discard this function after it is called, to save memory
static int __init module_start(void){
    // Print hello, world to kernel buffer
    printk(KERN_INFO "Hello, World!\n");
    return 0;
}

// Cleanup function
// The "__init" keyword tells the kernel to discard this function after it is called, to save memory
static void __exit module_end(void){
    printk(KERN_INFO "Goodbye, World!\n");
}

// Registers the initialization function with the kernel
module_init(module_start);
// Registers the cleanup function with the kernel 
module_exit(module_end);
