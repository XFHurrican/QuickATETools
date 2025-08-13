#!/usr/bin/env python
import sys
import importlib

def show_help():
    print('QuickATETools 命令行工具集')
    print('用法: cc <工具名称> [参数]')
    print('')
    print('可用工具:')
    print('  clipboardMatrix - 生成对角矩阵并复制到剪贴板')
    print('    参数:')
    print('      -p, --size    矩阵的大小（行数和列数），必填')
    print('      -c, --char    对角线使用的字符，默认为\'M\'')
    print('')
    print('全局参数:')
    print('  -h, --help       显示此帮助信息并退出')

if __name__ == '__main__':
    if len(sys.argv) < 2 or sys.argv[1] in ['-h', '--help']:
        show_help()
        sys.exit(0)

    tool_name = sys.argv[1]
    args = sys.argv[2:]

    if tool_name == 'clipboardMatrix':
        from quickatetools import clipboard_matrix
        # 传递参数给 clipboard_matrix 的 main 函数
        sys.argv = ['clipboard_matrix'] + args
        clipboard_matrix.main()
    else:
        print(f'未知工具: {tool_name}')
        print('使用 -h 或 --help 查看可用工具')
        sys.exit(1)
