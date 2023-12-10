# 初始化项目和版本
AC_INIT(SFController, 1.0.0 juncheng0@gmail.com)

# 指定源代码目录
AC_CONFIG_SRCDIR([src/main.c])

# 创建配置头文件
AC_CONFIG_HEADERS([config.h])
# 指定构建目录
AC_CONFIG_AUX_DIR([build])

# 检查编译器
AC_PROG_CC
AC_PROG_CXX
AC_PROG_RANLIB
AM_PROG_AR
# 检查库
# 例如，如果您的项目依赖于数学库，您可以使用以下命令：
# AC_CHECK_LIB([m], [main])

# 检查头文件
# AC_CHECK_HEADER([stdio.h])

# 为子目录配置Automake
AM_INIT_AUTOMAKE([-Wall -Werror foreign])

# 检查子目录中的程序
# AC_CONFIG_SUBDIRS([src/add])
# AC_CONFIG_SUBDIRS([third_party/Unity])
AC_CONFIG_SUBDIRS([third_party/log.c])

# 设置输出文件
AC_CONFIG_FILES([
    Makefile
    third_party/log.c/Makefile
])

# 创建配置脚本
AC_OUTPUT
