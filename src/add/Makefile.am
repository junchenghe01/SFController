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
