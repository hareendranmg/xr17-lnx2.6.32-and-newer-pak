#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

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
	{ 0xcb933894, "module_layout" },
	{ 0x1e9f0af5, "pci_unregister_driver" },
	{ 0xef58faf8, "uart_unregister_driver" },
	{ 0x7fac899e, "__pci_register_driver" },
	{ 0x32e28c44, "uart_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0xc31d0df3, "uart_remove_one_port" },
	{ 0x18722028, "pci_disable_device" },
	{ 0xdcb764ad, "memset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x480c8812, "pci_enable_device" },
	{ 0x2928db1c, "uart_add_one_port" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x143acd0c, "uart_match_port" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcf1d78e6, "uart_write_wakeup" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbb42c9b7, "kmem_cache_alloc" },
	{ 0x167fa79b, "kmalloc_caches" },
	{ 0xd87c1807, "uart_update_timeout" },
	{ 0x84e688c6, "uart_get_baud_rate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x7647726c, "handle_sysrq" },
	{ 0x9e8b4214, "uart_try_toggle_sysrq" },
	{ 0x4a17ed66, "sysrq_mask" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1787a99, "tty_flip_buffer_push" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7b00d259, "uart_insert_char" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xffe9f812, "uart_handle_cts_change" },
	{ 0x4fa80873, "uart_handle_dcd_change" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x37a0cba, "kfree" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "");

