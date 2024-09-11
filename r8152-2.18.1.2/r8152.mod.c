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
	{ 0x32e21920, "module_layout" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x862019aa, "netdev_info" },
	{ 0x26087692, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x27012063, "put_devmap_managed_page" },
	{ 0x166df02e, "skb_clone_tx_timestamp" },
	{ 0x795e8565, "__skb_gso_segment" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x85436970, "netdev_notice" },
	{ 0x16632bd9, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xfaa442ad, "napi_schedule_prep" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf0445e69, "skb_to_sgvec_nomark" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5d6c152d, "usb_enable_lpm" },
	{ 0xa7376f3e, "usb_set_configuration" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xcb847070, "usb_disable_lpm" },
	{ 0xd0398296, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfbdc192a, "netif_carrier_off" },
	{ 0x2da2081e, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5b9c7879, "alloc_pages" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xafdfbc8a, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb9cfdd06, "usb_autopm_get_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4ca7c5e3, "sysfs_remove_group" },
	{ 0xb3378a7b, "pv_ops" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd53ec181, "netif_schedule_queue" },
	{ 0xfb578fc5, "memset" },
	{ 0x445507d7, "dev_set_mac_address" },
	{ 0xcf9fbab7, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdf85ea06, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x65586f97, "eth_platform_get_mac_address" },
	{ 0x97077237, "ethtool_op_get_link" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdda5fd5d, "sysfs_create_group" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xd4cf2251, "free_netdev" },
	{ 0x1665c6d5, "usb_autopm_put_interface_async" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xa44f82cf, "register_netdev" },
	{ 0xd4afa9de, "usb_control_msg" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0xdf575581, "napi_enable" },
	{ 0xf1166e2, "usb_register_device_driver" },
	{ 0x93f085ac, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x13ed6c18, "netif_napi_add" },
	{ 0x79161eb9, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xc2c5802, "work_busy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x18015b46, "usb_queue_reset_device" },
	{ 0x47fb3f07, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc5aafd3c, "skb_copy_expand" },
	{ 0x33310fe7, "netif_device_attach" },
	{ 0x8d0906b0, "napi_gro_receive" },
	{ 0xe6e002cf, "_dev_info" },
	{ 0xe06e0338, "usb_submit_urb" },
	{ 0xebab1092, "__free_pages" },
	{ 0xe29afbca, "kmem_cache_alloc_node_trace" },
	{ 0x598d7e8b, "netif_device_detach" },
	{ 0xa916b694, "strnlen" },
	{ 0xd2357ab, "usb_autopm_get_interface_async" },
	{ 0x70e31c8e, "__napi_schedule" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7fe56232, "usb_reset_device" },
	{ 0x9f22d0d3, "skb_checksum_help" },
	{ 0x71e24831, "napi_complete_done" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xdb01ce20, "eth_type_trans" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xe365efda, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x990c61fc, "netdev_err" },
	{ 0xa57396a9, "usb_deregister_device_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf35141b2, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x85c21616, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x15fce2d3, "__netif_napi_del" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9c70a3ca, "netdev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6ed54f1, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x95249b5c, "skb_add_rx_frag" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x5aa21998, "usb_disable_ltm" },
	{ 0xf63cc4cc, "usb_register_driver" },
	{ 0x1c07a4f6, "napi_get_frags" },
	{ 0x274bb67f, "unregister_netdev" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xed8b8d93, "consume_skb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x3af206be, "__napi_alloc_skb" },
	{ 0xd97765fc, "skb_tstamp_tx" },
	{ 0x65ad9ab0, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x39ac9003, "skb_copy_bits" },
	{ 0xb8b75f24, "usb_free_urb" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb915ba86, "__put_page" },
	{ 0xfe6eacd4, "usb_autopm_put_interface" },
	{ 0x423273ac, "napi_gro_frags" },
	{ 0xc30d46b2, "device_set_wakeup_enable" },
	{ 0x8a7330c7, "usb_alloc_urb" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x5644794c, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDAp8053d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8053d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8053d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDAp8155d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8155d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8155d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDAp8156d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8156d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8156d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDAp8157d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8157d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8157d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v045Ep0C5Ed*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep0C5Ed*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep0C5Ed*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17EFp3052d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3052d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3052d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17EFp3054d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3054d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3054d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17EFp3057d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3057d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3057d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17EFp3082d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3082d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3082d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17EFp3098d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3098d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3098d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17EFp720Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp720Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp720Ad*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17EFp720Bd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp720Bd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp720Bd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17EFp8153d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp8153d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17EFpA359d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFpA359d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFpA359d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v2BAFp0012d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2BAFp0012d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2BAFp0012d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0B05p1976d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B05p1976d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B05p1976d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "C33128C4F068135C24A0FBC");
