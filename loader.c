
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
MODULE_LICENSE(“GPL”);
MODULE_AUTHOR(“C17179n”);
MODULE_DESCRIPTION(“dmesq send.”);
MODULE_VERSION(“0.01”);
static int __init lkm_parser_init(void) {
 printk(KERN_INFO “running module!\n”);
 return 0;
}fopen dmesq
static void __exit lkm_parser_exit(void) {
 printk(KERN_INFO “Goodbye, World!\n”);
}
module_init(lkm_parser_init);
module_exit(lkm_parser_exit);
