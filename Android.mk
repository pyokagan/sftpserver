LOCAL_PATH := $(call my-dir)

libsftp_c_includes := $(LOCAL_PATH)/jni

libsftp_sources := \
	alloc.c \
	debug.c \
	handle.c \
	parse.c \
	queue.c \
	send.c \
	status.c \
	users.c \
	utils.c \
	v3.c \
	xfns.c \
	stat.c \
	charset.c \
	serialize.c \
	v4.c \
	realpath.c \
	readlink.c \
	v5.c \
	v6.c \
	getcwd.c \
	globals.c \
	dirname.c \

gesftpserver_sources := \
	sftpserver.c \
	readwrite.c \

include $(CLEAR_VARS)
LOCAL_MODULE := sftp
LOCAL_MODULE_FILENAME := libsftp
LOCAL_SRC_FILES := $(libsftp_sources)
LOCAL_STATIC_LIBRARIES := android_support
LOCAL_C_INCLUDES := $(libsftp_c_includes)
LOCAL_EXPORT_C_INCLUDES := $(libsftp_c_includes)
include $(BUILD_STATIC_LIBRARY)

include $(CLEAN_VARS)
LOCAL_MODULE := gesftpserver
LOCAL_MODULE_FILENAME := gesftpserver
LOCAL_SRC_FILES := $(gesftpserver_sources)
LOCAL_STATIC_LIBRARIES := sftp
include $(BUILD_EXECUTABLE)

$(call import-module,android/support)
