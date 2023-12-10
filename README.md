# C工程模板

[![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

## 项目描述

该项目旨在解决某个特定问题或提供某种功能。详细说明项目的目标和背景。

## 安装说明

首先确保你的计算机上已安装以下软件环境：

- 软件环境A（版本号）
- 软件环境B（版本号）

接下来，按照以下步骤进行安装：

1. 第一步：...
2. 第二步：...
3. ...

## 使用指南

以下是使用该项目的简单步骤：

1. 执行命令A来启动项目。
   ```shell
   $ 命令A 参数

1. 使用功能X：

python
# 示例代码
import moduleX

result = moduleX.functionX(data)
print(result)
...
文件结构
项目的目录结构如下：


project/
├─ src/
│  ├─ moduleA/
│  │  ├─ file1.py
│  │  └─ file2.py
│  ├─ moduleB/
│  │  ├─ file3.py
│  │  └─ file4.py
│  └─ main.py
├─ data/
│  ├─ data1.csv
│  └─ data2.csv
├─ docs/
│  ├─ documentation.md
│  └─ guide.pdf
└─ README.md
功能特性
特性A：实现某个功能的描述。
特性B：实现另一个功能的描述。
贡献指南
欢迎对该项目做出贡献！请遵循以下步骤：

在GitHub上fork该项目。
创建你的分支：
shell
$ git checkout -b feature/your-feature
提交你的更改：
shell
$ git commit -m "Add some feature"
推送到你的分支：
shell
$ git push origin feature/your-feature
提交合并请求（Pull Request）。
请确保你的代码符合项目的编码规范，并提供详细的描述，以便我们审查和合并你的贡献。

版权信息
本项目使用MIT许可证。有关更多信息，请参阅 LICENSE 文件。

作者信息
作者：Your Name
邮箱：your@email.com
常见问题（FAQ）
Q: 我遇到了某个问题如何解决？
A: 可以尝试以下解决方案...

Q: 是否支持扩展功能？
A: 是的，我们鼓励用户扩展功能。请按照贡献指南进行操作。

相关链接
项目主页：https://github.com/yourusername/your-project
文档：https://yourprojectdocs.com












# 基于gRPC,libtorch与opencv的深度学习
VCPKG 管理可管理的第三方库
https://vcpkg.io/en/packages.html
https://vcpkg.io/en/getting-started.html

cmake
https://cmake.org/cmake/help/latest/index.html

cmocka
https://cmocka.org/
https://gitlab.com/cmocka/cmocka
https://api.cmocka.org/

doxygen
https://doxygen.nl/manual/docblocks.html



第一：vcpkg 安装 cmocka
cd E:\Documents\SourceTree\Source\vcpkg
vcpkg install cmocka:x86-windows


第二：使用异常处理 exceptions4c https://github.com/guillermocalvo/exceptions4c.git


    程序中可能出现的异常被组织在异常的伪层次结构中。 RuntimeException 是异常伪层次结构的根。 任何异常都可以被 catch(RuntimeException) 块捕获，除了 AssertionException。

    当抛出异常时，控制权被转移到最近的处理异常的动态封闭的 catch 代码块。 通过将实际抛出的异常的类型（和超类型）与 catch 子句中指定的异常进行比较来确定特定的 catch 块是否处理异常。

    一个 catch 块被赋予一个异常作为参数。 此参数确定代码块可以处理的异常集。 如果指定的参数是以下任一情况，则块会处理引发的实际异常：
    - 该异常的相同类型。
    - 该异常的任何超类型的相同类型。

    如果您编写一个处理没有定义子类型的异常的 catch 块，它只会处理那个非常具体的异常。 通过在层次结构中对异常进行分组，您可以设计处理多个异常的通用 catch 块：

    /*                   Name             Default message   Supertype */
    E4C_DEFINE_EXCEPTION(ColorException, "Colorful error.", RuntimeException);
    E4C_DEFINE_EXCEPTION(RedException,   "Red error.",      ColorException);
    E4C_DEFINE_EXCEPTION(GreenException, "Green error.",    ColorException);
    E4C_DEFINE_EXCEPTION(BlueException,  "Blue error.",     ColorException);
    


第三：日志 log.c https://github.com/rxi/log.c.git


cd .. && rmdir /s/q build && mkdir build && cd build && cmake .. && cmake --build .
面向对象
PLOOC
lw_oopc
ooc
OOC-Design-Pattern
异常处理
exceptions4c
日志
log.c
https://github.com/rxi/log.c.git
zlog
log4c
单元测试
Unity
https://github.com/ThrowTheSwitch/Unity.git
Criterion


六、常用标签命令关键字
文件信息：
　 1) @file --> 文件声明，即当前文件名
　 2) @author --> 作者
　 3) @version --> 版本，
　 4) @todo --> 改进，可以指定针对的版本

模块信息：
　 1) @var --> 模块变量说明
　 2) @typedef --> 模块变量类型说明

函数信息：
　 1) @param --> 参数说明
　 2) @arg --> 列表说明参数信息
　 3) @return --> 返回值说明
　 4) @retval --> 返回值类型说明
　 5) @note --> 注解

提醒信息：
　 1) @brief --> 摘要，即当前文件说明
　 2) @see --> 参看
　 3) @attention --> 注意
　 4) @bug --> 问题
　 5) @warning --> 警告
　 6) @sa --> 参考资料

autoscan
mv configure.scan  configure.ac
vim configure.ac

# 初始化项目和版本
AC_INIT(CProjectTemplate, 1.0.0 junchenghe@goolge.com)

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
AC_CONFIG_SUBDIRS([src/add])
# AC_CONFIG_SUBDIRS([third_party/Unity])
AC_CONFIG_SUBDIRS([third_party/log.c])

# 设置输出文件
AC_CONFIG_FILES([
    Makefile
    src/add/Makefile
    third_party/log.c/Makefile
])

# 创建配置脚本
AC_OUTPUT


autoreconf -ivf 
    aclocal
    autoheader
    touch Makefile.am
    vim Makefile.am

# 指定构建目录
builddir = build

# 定义主程序的源代码文件
bin_PROGRAMS = main
main_SOURCES = src/main.c

# 定义 add 子目录中的库
noinst_LIBRARIES = libadd.a
libadd_a_SOURCES = src/add/add.c

# 定义 log.c 子目录中的库
noinst_LIBRARIES += liblog.a
liblog_a_SOURCES = third_party/log.c/src/log.c

# 定义头文件目录
AM_CPPFLAGS = -I$(top_srcdir)/include -I$(top_srcdir)/src/add -I$(top_srcdir)/third_party/log.c/src
AUTOMAKE_OPTIONS = subdir-objects

# 定义链接库
main_LDADD = libadd.a liblog.a

# # 为测试定义额外的源文件和程序
# check_PROGRAMS = unit_test integration_test
# unit_test_SOURCES = test/unit/add_test.c
# integration_test_SOURCES = test/integration/integration_test.c

# # 定义测试程序的链接库和头文件目录
# unit_test_LDADD = libadd.a
# integration_test_LDADD = libadd.a liblog.a
# unit_test_CPPFLAGS = $(AM_CPPFLAGS)
# integration_test_CPPFLAGS = $(AM_CPPFLAGS)

# 如果您的项目使用了 third_party 目录中的库，您可能还需要更新链接库和头文件目录
# 例如：
# main_LDADD += $(top_srcdir)/third_party/Unity/src/libunity.a
# AM_CPPFLAGS += -I$(top_srcdir)/third_party/Unity/src







# 指定构建目录
builddir = build

# 定义 log.c 子目录中的库
noinst_LIBRARIES = liblog.a
liblog_a_SOURCES = third_party/log.c/src/log.c

# 定义头文件目录
AM_CPPFLAGS = -I$(top_srcdir)/third_party/log.c/src

AUTOMAKE_OPTIONS = subdir-objects

# # 为测试定义额外的源文件和程序
# check_PROGRAMS = unit_test integration_test
# unit_test_SOURCES = test/unit/add_test.c
# integration_test_SOURCES = test/integration/integration_test.c

# # 定义测试程序的链接库和头文件目录
# unit_test_LDADD = libadd.a
# integration_test_LDADD = libadd.a liblog.a
# unit_test_CPPFLAGS = $(AM_CPPFLAGS)
# integration_test_CPPFLAGS = $(AM_CPPFLAGS)

# 如果您的项目使用了 third_party 目录中的库，您可能还需要更新链接库和头文件目录
# 例如：
# main_LDADD += $(top_srcdir)/third_party/Unity/src/libunity.a
# AM_CPPFLAGS += -I$(top_srcdir)/third_party/Unity/src



# 指定构建目录
builddir = build

# 定义 add 子目录中的库
noinst_LIBRARIES = libadd.a
libadd_a_SOURCES = add.c

# 定义头文件目录
AM_CPPFLAGS = -I$(top_srcdir)/src/add -I$(top_srcdir)/third_party/log.c/src

# # 为测试定义额外的源文件和程序
# check_PROGRAMS = unit_test integration_test
# unit_test_SOURCES = test/unit/add_test.c
# integration_test_SOURCES = test/integration/integration_test.c

# # 定义测试程序的链接库和头文件目录
# unit_test_LDADD = libadd.a
# integration_test_LDADD = libadd.a liblog.a
# unit_test_CPPFLAGS = $(AM_CPPFLAGS)
# integration_test_CPPFLAGS = $(AM_CPPFLAGS)

# 如果您的项目使用了 third_party 目录中的库，您可能还需要更新链接库和头文件目录
# 例如：
# main_LDADD += $(top_srcdir)/third_party/Unity/src/libunity.a
# AM_CPPFLAGS += -I$(top_srcdir)/third_party/Unity/src



    automake --add-missing
    autoconf 
./configure  
make && make install
make clean 
make disclean
make uninstall