struct cpuinfo_mock_file filesystem[] = {
	{
		.path = "/proc/cpuinfo",
		.size = 1136,
		.content =
			"processor\t: 0\n"
			"model name\t: ARMv7 Processor rev 1 (v7l)\n"
			"BogoMIPS\t: 38.40\n"
			"Features\t: swp half thumb fastmult vfp edsp neon vfpv3 tls vfpv4 idiva idivt \n"
			"CPU implementer\t: 0x51\n"
			"CPU architecture: 7\n"
			"CPU variant\t: 0x3\n"
			"CPU part\t: 0x06f\n"
			"CPU revision\t: 1\n"
			"\n"
			"processor\t: 1\n"
			"model name\t: ARMv7 Processor rev 1 (v7l)\n"
			"BogoMIPS\t: 38.40\n"
			"Features\t: swp half thumb fastmult vfp edsp neon vfpv3 tls vfpv4 idiva idivt \n"
			"CPU implementer\t: 0x51\n"
			"CPU architecture: 7\n"
			"CPU variant\t: 0x3\n"
			"CPU part\t: 0x06f\n"
			"CPU revision\t: 1\n"
			"\n"
			"processor\t: 2\n"
			"model name\t: ARMv7 Processor rev 1 (v7l)\n"
			"BogoMIPS\t: 38.40\n"
			"Features\t: swp half thumb fastmult vfp edsp neon vfpv3 tls vfpv4 idiva idivt \n"
			"CPU implementer\t: 0x51\n"
			"CPU architecture: 7\n"
			"CPU variant\t: 0x3\n"
			"CPU part\t: 0x06f\n"
			"CPU revision\t: 1\n"
			"\n"
			"processor\t: 3\n"
			"model name\t: ARMv7 Processor rev 1 (v7l)\n"
			"BogoMIPS\t: 38.40\n"
			"Features\t: swp half thumb fastmult vfp edsp neon vfpv3 tls vfpv4 idiva idivt \n"
			"CPU implementer\t: 0x51\n"
			"CPU architecture: 7\n"
			"CPU variant\t: 0x3\n"
			"CPU part\t: 0x06f\n"
			"CPU revision\t: 1\n"
			"\n"
			"Hardware\t: Qualcomm APQ 8084 (Flattened Device Tree)\n"
			"Revision\t: 83a0\n"
			"Serial\t\t: 68123d0111000000\n"
			"Device\t\t: shamu\n"
			"Radio\t\t: 6\n"
			"MSM Hardware\t: APQ8084 ES1.1\n",
	},
	{
		.path = "/system/build.prop",
		.size = 4715,
		.content =
			"\n"
			"#\n"
			"# PRODUCT_OEM_PROPERTIES\n"
			"#\n"
			"import /oem/oem.prop ro.config.ringtone\n"
			"import /oem/oem.prop ro.config.notification_sound\n"
			"import /oem/oem.prop ro.config.alarm_alert\n"
			"import /oem/oem.prop ro.config.wallpaper\n"
			"import /oem/oem.prop ro.config.wallpaper_component\n"
			"import /oem/oem.prop ro.oem.*\n"
			"import /oem/oem.prop oem.*\n"
			"# begin build properties\n"
			"# autogenerated by buildinfo.sh\n"
			"ro.build.id=MPA44I\n"
			"ro.build.display.id=MPA44I\n"
			"ro.build.version.incremental=2172151\n"
			"ro.build.version.sdk=23\n"
			"ro.build.version.preview_sdk=0\n"
			"ro.build.version.codename=REL\n"
			"ro.build.version.all_codenames=REL\n"
			"ro.build.version.release=6.0\n"
			"ro.build.version.security_patch=\n"
			"ro.build.version.base_os=\n"
			"ro.build.date=Mon Aug 17 16:07:31 UTC 2015\n"
			"ro.build.date.utc=1439827651\n"
			"ro.build.type=user\n"
			"ro.build.user=android-build\n"
			"ro.build.host=wpee25.hot.corp.google.com\n"
			"ro.build.tags=release-keys\n"
			"ro.build.flavor=shamu-user\n"
			"ro.product.model=Nexus 6\n"
			"ro.product.brand=google\n"
			"ro.product.name=shamu\n"
			"ro.product.device=shamu\n"
			"ro.product.board=shamu\n"
			"# ro.product.cpu.abi and ro.product.cpu.abi2 are obsolete,\n"
			"# use ro.product.cpu.abilist instead.\n"
			"ro.product.cpu.abi=armeabi-v7a\n"
			"ro.product.cpu.abi2=armeabi\n"
			"ro.product.cpu.abilist=armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist32=armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist64=\n"
			"ro.product.manufacturer=motorola\n"
			"ro.product.locale=en-US\n"
			"ro.wifi.channels=\n"
			"ro.board.platform=msm8084\n"
			"# ro.build.product is obsolete; use ro.product.device\n"
			"ro.build.product=shamu\n"
			"# Do not try to parse description, fingerprint, or thumbprint\n"
			"ro.build.description=shamu-user 6.0 MPA44I 2172151 release-keys\n"
			"ro.build.fingerprint=google/shamu/shamu:6.0/MPA44I/2172151:user/release-keys\n"
			"ro.build.characteristics=nosdcard\n"
			"# end build properties\n"
			"\n"
			"#\n"
			"# ADDITIONAL_BUILD_PROPERTIES\n"
			"#\n"
			"ro.config.ringtone=Titania.ogg\n"
			"ro.config.notification_sound=Tethys.ogg\n"
			"ro.config.alarm_alert=Oxygen.ogg\n"
			"ro.com.android.dataroaming=false\n"
			"ro.url.legal=http://www.google.com/intl/%s/mobile/android/basic/phone-legal.html\n"
			"ro.url.legal.android_privacy=http://www.google.com/intl/%s/mobile/android/basic/privacy.html\n"
			"ro.com.google.clientidbase=android-google\n"
			"ro.carrier=unknown\n"
			"ro.com.android.wifi-watchlist=GoogleGuest\n"
			"ro.error.receiver.system.apps=com.google.android.gms\n"
			"ro.setupwizard.enterprise_mode=1\n"
			"fmas.spkr_6ch=35,20,110\n"
			"fmas.spkr_2ch=35,25\n"
			"fmas.spkr_angles=10\n"
			"fmas.spkr_sgain=0\n"
			"media.aac_51_output_enabled=true\n"
			"ro.audio.monitorRotation=true\n"
			"ro.opengles.version=196609\n"
			"ro.sf.lcd_density=560\n"
			"persist.hwc.mdpcomp.enable=true\n"
			"rild.libpath=/system/vendor/lib/libril-qc-qmi-1.so\n"
			"persist.radio.apm_sim_not_pwdn=1\n"
			"persist.radio.no_wait_for_card=1\n"
			"persist.ims.disableDebugLogs=1\n"
			"persist.ims.disableADBLogs=2\n"
			"persist.ims.disableQXDMLogs=0\n"
			"persist.ims.disableIMSLogs=1\n"
			"persist.camera.hal.debug.mask=7\n"
			"persist.camera.ISP.debug.mask=0\n"
			"persist.camera.pproc.debug.mask=7\n"
			"persist.camera.stats.debug.mask=0\n"
			"persit.camera.imglib.logs=1\n"
			"persist.camera.mct.debug.mask=1\n"
			"persist.camera.sensor.debug=0\n"
			"vidc.debug.level=1\n"
			"persist.radio.oem_socket=false\n"
			"persist.qcril_uim_vcc_feature=1\n"
			"ro.telephony.default_cdma_sub=0\n"
			"ro.telephony.default_network=10\n"
			"telephony.lteOnCdmaDevice=1\n"
			"persist.radio.fsg_reload_on=1\n"
			"persist.radio.mcfg_enabled=1\n"
			"ro.hwui.texture_cache_size=72\n"
			"ro.hwui.layer_cache_size=48\n"
			"ro.hwui.r_buffer_cache_size=8\n"
			"ro.hwui.path_cache_size=32\n"
			"ro.hwui.gradient_cache_size=1\n"
			"ro.hwui.drop_shadow_cache_size=6\n"
			"ro.hwui.texture_cache_flushrate=0.4\n"
			"ro.hwui.text_small_cache_width=1024\n"
			"ro.hwui.text_small_cache_height=1024\n"
			"ro.hwui.text_large_cache_width=2048\n"
			"ro.hwui.text_large_cache_height=1024\n"
			"dalvik.vm.heapgrowthlimit=256m\n"
			"dalvik.vm.heapstartsize=8m\n"
			"dalvik.vm.heapsize=512m\n"
			"dalvik.vm.heaptargetutilization=0.75\n"
			"dalvik.vm.heapminfree=512k\n"
			"dalvik.vm.heapmaxfree=8m\n"
			"ro.frp.pst=/dev/block/platform/msm_sdcc.1/by-name/frp\n"
			"af.fast_track_multiplier=1\n"
			"audio_hal.period_size=192\n"
			"persist.rcs.supported=0\n"
			"persist.audio.dualmic.config=endfire\n"
			"persist.audio.fluence.voicecall=true\n"
			"persist.audio.fluence.voicerec=false\n"
			"persist.audio.fluence.speaker=false\n"
			"persist.radio.sib16_support=1\n"
			"persist.data.qmi.adb_logmask=0\n"
			"persist.data.iwlan.enable=true\n"
			"persist.radio.ignore_ims_wlan=1\n"
			"persist.radio.data_con_rprt=1\n"
			"keyguard.no_require_sim=true\n"
			"drm.service.enabled=true\n"
			"ro.facelock.black_timeout=400\n"
			"ro.facelock.det_timeout=1500\n"
			"ro.facelock.rec_timeout=2500\n"
			"ro.facelock.lively_timeout=2500\n"
			"ro.facelock.est_max_time=600\n"
			"ro.facelock.use_intro_anim=false\n"
			"persist.sys.dalvik.vm.lib.2=libart\n"
			"dalvik.vm.isa.arm.variant=krait\n"
			"dalvik.vm.isa.arm.features=default\n"
			"net.bt.name=Android\n"
			"dalvik.vm.stack-trace-file=/data/anr/traces.txt\n"
			"ro.build.expect.bootloader=moto-apq8084-71.15\n"
			"ro.build.expect.baseband=D4.01-9625-05.24+FSG-9625-02.101\n"
			"ro.expect.recovery_id=0xc7e3a51dcb8bb9aac02a77707b095512cd8b751a000000000000000000000000\n"
			"\n",
	},
	{
		.path = "/sys/devices/system/cpu/kernel_max",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/possible",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/present",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "2649600\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "300000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/thread_siblings_list",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "2649600\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "300000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/thread_siblings_list",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "2649600\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "300000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/core_id",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/thread_siblings_list",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "2649600\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "300000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/core_id",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/thread_siblings_list",
		.size = 2,
		.content = "3\n",
	},
	{ NULL },
};