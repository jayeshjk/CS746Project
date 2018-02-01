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
	{ 0xffb91055, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xc23b439d, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x33475f2f, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xdf59a8b1, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xdd626e59, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xbe84a3b9, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5c0dfa40, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xa4f0130e, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0xd7a351b4, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xda24c70, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0xa72587b3, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0xe5082f78, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xf730762f, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0xffd3e345, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8d111a7b, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xf10af4a7, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "039DB2A85EDFC08A04CB15F");
