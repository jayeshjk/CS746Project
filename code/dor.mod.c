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
	{ 0x151b2616, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x45aed1b9, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0xee9779cc, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xfcf3c9e7, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xce951652, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xcdc1c6db, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x620f48e2, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x34aa7139, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3e7c253c, __VMLINUX_SYMBOL_STR(add_disk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4DB0288190306EF28A9D646");
