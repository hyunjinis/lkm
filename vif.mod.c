#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfd038f32, "kmalloc_caches" },
	{ 0x8e690175, "kmalloc_trace" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x89bbb02b, "proc_mkdir" },
	{ 0xa99dd3dd, "proc_create_data" },
	{ 0x122c3a7e, "_printk" },
	{ 0x77605b80, "remove_proc_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8c27714, "fp_pay" },
	{ 0x650b7b28, "fp_newvif" },
	{ 0x71e3d87d, "fp_delvif" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe3ed1c5f, "off_list" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x85df9b6c, "strsep" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xe88a9055, "module_layout" },
};

MODULE_INFO(depends, "bridge");


MODULE_INFO(srcversion, "11BDF44D8FFF40DCBAC80FC");
