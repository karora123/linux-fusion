#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbd74311c, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa68d074c, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x2093f19b, __VMLINUX_SYMBOL_STR(force_sig) },
	{ 0x60b5babe, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x36eb2646, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x321760e4, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xac14d6af, __VMLINUX_SYMBOL_STR(sock_create) },
	{ 0x532716f9, __VMLINUX_SYMBOL_STR(sock_recvmsg) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x1df6128d, __VMLINUX_SYMBOL_STR(sched_setscheduler) },
	{ 0xcece0330, __VMLINUX_SYMBOL_STR(sock_sendmsg) },
	{ 0xf8dbb452, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x7538313c, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x9dff19e7, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x362d8f60, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xb95a336, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x36d55757, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xe1391266, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x44f5f74a, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xaf9c488, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xb891e542, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0x621c3a64, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x8ce0b3ef, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x9680c9cc, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xcac9f3e, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x6ec51f28, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xba89c10a, __VMLINUX_SYMBOL_STR(__task_pid_nr_ns) },
	{ 0x94eea794, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x15f61623, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x587e8dc4, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "056CA957C077DA8284440DA");
