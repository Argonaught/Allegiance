/*
 *	config.h -- Build configuration file.
 *
 *	WARNING: DO NOT EDIT. This file is generated by configure.
 *
 *	If you wish to modify the defaults, then edit conf/config.defaults.* and
 *	then run "configure --reset".
 */

#define BLD_PRODUCT "appWeb"
#define BLD_NAME "Mbedthis AppWeb"
#define BLD_VERSION "2.0.4"
#define BLD_NUMBER "1"
#define BLD_TYPE "RELEASE"
#define BLD_DEFAULTS "release"
#define BLD_PACKAGES "matrixssl openssl php5"
#define BLD_APPWEB_CONFIG "appWeb.conf"
#define BLD_APPWEB 1
#define BLD_COMPANY "Mbedthis"
#define BLD_DEBUG 0
#define BLD_DIRS "bootstrap include obj bin mpr ejs esp http doc appWeb appWebSamples images"
#define BLD_HTTP_PORT 7777
#define BLD_LIB_VERSION "1.0.0"
#define BLD_SSL_PORT 4443
#define BLD_CLEAN_INSTALL "0"
#define BLD_LICENSE "gpl"
#define BLD_COMMERCIAL "0"
#define BLD_HOST_SYSTEM "i386-pc-cygwin"
#define BLD_BUILD_SYSTEM "i686-pc-cygwin"
#define BLD_HOST_OS "WIN"
#define BLD_HOST_CPU_ARCH MPR_CPU_IX86
#define BLD_HOST_CPU "i386"
#define BLD_HOST_UNIX 0
#define BLD_BUILD_OS "WIN"
#define BLD_BUILD_CPU_ARCH MPR_CPU_IX86
#define BLD_BUILD_CPU i686
#define BLD_BUILD_UNIX 0
#define BLD_ROOT_PREFIX "C:/"
#define BLD_PREFIX "C:/Program Files/Mbedthis AppWeb"
#define BLD_DOC_PREFIX "C:/Program Files/Mbedthis AppWeb"
#define BLD_INC_PREFIX "C:/Program Files/Mbedthis AppWeb/include/appWeb"
#define BLD_LIB_PREFIX "C:/Program Files/Mbedthis AppWeb/lib"
#define BLD_SBIN_PREFIX "C:/Program Files/Mbedthis AppWeb/bin"
#define BLD_SRC_PREFIX "C:/Program Files/Mbedthis AppWeb/src"
#define BLD_WEB_PREFIX "C:/appWeb/web"
#define BLD_FEATURE_ACCESS_LOG 1
#define BLD_FEATURE_ADMIN_MODULE 1
#define BLD_FEATURE_ASPNET_MODULE 0
#define BLD_FEATURE_ASSERT 1
#define BLD_FEATURE_AUTH_MODULE 1
#define BLD_FEATURE_C_API_MODULE 1
#define BLD_FEATURE_C_API_CLIENT 0
#define BLD_FEATURE_CGI_MODULE 1
#define BLD_FEATURE_COMPAT_MODULE 0
#define BLD_FEATURE_CONFIG_PARSE 1
#define BLD_FEATURE_CONFIG_SAVE 1
#define BLD_FEATURE_COOKIE 1
#define BLD_FEATURE_COPY_MODULE 1
#define BLD_FEATURE_DIGEST 1
#define BLD_FEATURE_DLL 1
#define BLD_FEATURE_EGI_MODULE 1
#define BLD_FEATURE_EJS 1
#define BLD_FEATURE_ESP_MODULE 1
#define BLD_FEATURE_ESP3_MODULE
#define BLD_FEATURE_EVAL_PERIOD 30
#define BLD_FEATURE_FLOATING_POINT 1
#define BLD_FEATURE_IF_MODIFIED 1
#define BLD_FEATURE_INT64 1
#define BLD_FEATURE_KEEP_ALIVE 1
#define BLD_FEATURE_LEGACY_API 1
#define BLD_FEATURE_LIB_STDCPP 0
#define BLD_FEATURE_LICENSE 0
#define BLD_FEATURE_LOG 1
#define BLD_FEATURE_MULTITHREAD 1
#define BLD_FEATURE_MALLOC 0
#define BLD_FEATURE_MALLOC_STATS 0
#define BLD_FEATURE_MALLOC_LEAK 0
#define BLD_FEATURE_MALLOC_HOOK 0
#define BLD_FEATURE_NUM_TYPE int
#define BLD_FEATURE_NUM_TYPE_ID MPR_TYPE_INT
#define BLD_FEATURE_ROMFS 0
#define BLD_FEATURE_RUN_AS_SERVICE 1
#define BLD_FEATURE_SAFE_STRINGS 0
#define BLD_FEATURE_SAMPLES 1
#define BLD_FEATURE_SESSION 1
#define BLD_FEATURE_SHARED 1
#define BLD_FEATURE_SQUEEZE 0
#define BLD_FEATURE_SSL_MODULE 1
#define BLD_FEATURE_STATIC 1
#define BLD_FEATURE_STATIC_LINK_LIBC 0
#define BLD_FEATURE_TEST 1
#define BLD_FEATURE_UPLOAD_MODULE 1
#define BLD_FEATURE_XDB_MODULE 0
#define BLD_FEATURE_ADMIN_MODULE_BUILTIN 0
#define BLD_FEATURE_ASPNET_MODULE_BUILTIN 0
#define BLD_FEATURE_AUTH_MODULE_BUILTIN 0
#define BLD_FEATURE_C_API_MODULE_BUILTIN 0
#define BLD_FEATURE_CGI_MODULE_BUILTIN 0
#define BLD_FEATURE_COMPAT_MODULE_BUILTIN 0
#define BLD_FEATURE_COPY_MODULE_BUILTIN 0
#define BLD_FEATURE_EGI_MODULE_BUILTIN 0
#define BLD_FEATURE_ESP_MODULE_BUILTIN 0
#define BLD_FEATURE_ESP3_MODULE_BUILTIN
#define BLD_FEATURE_SSL_MODULE_BUILTIN 0
#define BLD_FEATURE_UPLOAD_MODULE_BUILTIN 0
#define BLD_FEATURE_XDB_MODULE_BUILTIN 0
#define BLD_FEATURE_ADMIN_MODULE_LOADABLE 1
#define BLD_FEATURE_ASPNET_MODULE_LOADABLE 0
#define BLD_FEATURE_AUTH_MODULE_LOADABLE 1
#define BLD_FEATURE_C_API_MODULE_LOADABLE 1
#define BLD_FEATURE_CGI_MODULE_LOADABLE 1
#define BLD_FEATURE_COMPAT_MODULE_LOADABLE 0
#define BLD_FEATURE_COPY_MODULE_LOADABLE 1
#define BLD_FEATURE_EGI_MODULE_LOADABLE 1
#define BLD_FEATURE_ESP_MODULE_LOADABLE 1
#define BLD_FEATURE_ESP3_MODULE_LOADABLE
#define BLD_FEATURE_SSL_MODULE_LOADABLE 1
#define BLD_FEATURE_UPLOAD_MODULE_LOADABLE 1
#define BLD_FEATURE_XDB_MODULE_LOADABLE 0
#define BLD_AR_FOR_BUILD "link /lib"
#define BLD_CC_FOR_BUILD "cl"
#define BLD_CSC_FOR_BUILD ""
#define BLD_JAVAC_FOR_BUILD ""
#define BLD_LD_FOR_BUILD "link"
#define BLD_RANLIB_FOR_BUILD ""
#define BLD_NM_FOR_BUILD "nm"
#define BLD_CFLAGS_FOR_BUILD ""
#define BLD_IFLAGS_FOR_BUILD ""
#define BLD_LDFLAGS_FOR_BUILD ""
#define BLD_ARCHIVE_FOR_BUILD ".lib"
#define BLD_EXE_FOR_BUILD ".exe"
#define BLD_OBJ_FOR_BUILD ".obj"
#define BLD_PIOBJ_FOR_BUILD ".unused"
#define BLD_CLASS_FOR_BUILD ".class"
#define BLD_SHLIB_FOR_BUILD ".lib"
#define BLD_SHOBJ_FOR_BUILD ".dll"
#define BLD_AR_FOR_HOST "link /lib"
#define BLD_CC_FOR_HOST "cl"
#define BLD_CSC_FOR_HOST "csc"
#define BLD_JAVAC_FOR_HOST "javac"
#define BLD_LD_FOR_HOST "link"
#define BLD_RANLIB_FOR_HOST "true"
#define BLD_NM_FOR_HOST "nm"
#define BLD_CFLAGS_FOR_HOST ""
#define BLD_IFLAGS_FOR_HOST ""
#define BLD_LDFLAGS_FOR_HOST ""
#define BLD_ARCHIVE_FOR_HOST ".lib"
#define BLD_EXE_FOR_HOST ".exe"
#define BLD_OBJ_FOR_HOST ".obj"
#define BLD_PIOBJ_FOR_HOST ""
#define BLD_CLASS_FOR_HOST ".class"
#define BLD_SHLIB_FOR_HOST ".lib"
#define BLD_SHOBJ_FOR_HOST ".dll"
#define BLD_TOOLS_DIR "${BLD_TOP}/bin"
#define BLD_BIN_DIR "${BLD_TOP}/bin/${BLD_TYPE}"
#define BLD_INC_DIR "${BLD_TOP}/include"
#define BLD_EXP_OBJ_DIR "${BLD_TOP}/obj/${BLD_TYPE}"
#define BLD_FEATURE_MATRIXSSL_MODULE 1
#define BLD_FEATURE_MATRIXSSL_MODULE_LOADABLE 1
#define BLD_FEATURE_MATRIXSSL_MODULE_BUILTIN 0
#define BLD_MATRIXSSL_DIR "../../builtPackages/WIN/matrixssl"
#define BLD_MATRIXSSL_LIBS "matrixssl"
#define BLD_MATRIXSSL_IFLAGS "-I$(BLD_TOP)/$(BLD_MATRIXSSL_DIR)"
#define BLD_MATRIXSSL_CFLAGS ""
#define BLD_MATRIXSSL_LDFLAGS ""
#define BLD_FEATURE_OPENSSL_MODULE 1
#define BLD_FEATURE_OPENSSL_MODULE_LOADABLE 1
#define BLD_FEATURE_OPENSSL_MODULE_BUILTIN 0
#define BLD_OPENSSL_DIR "../../builtPackages/WIN/openssl"
#define BLD_OPENSSL_LIBS "ssl crypto"
#define BLD_OPENSSL_IFLAGS "-I$(BLD_TOP)/$(BLD_OPENSSL_DIR)/include"
#define BLD_OPENSSL_CFLAGS ""
#define BLD_OPENSSL_LDFLAGS ""
#define BLD_FEATURE_PHP5_MODULE 1
#define BLD_FEATURE_PHP5_MODULE_LOADABLE 1
#define BLD_FEATURE_PHP5_MODULE_BUILTIN 0
#define BLD_PHP5_DIR "../../builtPackages/WIN/php"
#define BLD_PHP5_LIBS "php5"
#define BLD_PHP5_IFLAGS "-I$(BLD_TOP)/$(BLD_PHP5_DIR) -I$(BLD_TOP)/$(BLD_PHP5_DIR)/main -I$(BLD_TOP)/$(BLD_PHP5_DIR)/Zend -I$(BLD_TOP)/$(BLD_PHP5_DIR)/TSRM"
#define BLD_PHP5_CFLAGS ""
#define BLD_PHP5_LDFLAGS ""
