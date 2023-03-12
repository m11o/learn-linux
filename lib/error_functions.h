//
// Created by m11o on 2023/03/12.
//

#ifndef ERROR_FUNCTIONS_H
#define ERROR_FUNCTIONS_H

void errMsg(const char *format, ...); // メッセージを標準エラー出力に出力する

#ifdef __GNUC__

#define NORETURN __attribute__ ((__noreturn__))
#else
#define NORETURN
#endif

void errExit(const char *format, ...) NORETURN; // errMsgと一緒。ただし、出力にプログラムを終了させる
void err_exit(const char *format, ...) NORETURN; // 上と同じだが、使用するシステムコールが違うみたい
void errExitEN(int errnum, const char *format, ...) NORETURN; // 上と同じだが、エラー番号に対応するメッセージを返す
void fatal(const char *format, ...) NORETURN; // 汎用のエラー処理関数
void usageErr(const char *format, ...) NORETURN; // コマンドのパラメータエラーに関するエラーを処理
void cmdLineErr(const char *format, ...) NORETURN; // コマンドラインのエラーに特化

#endif //ERROR_FUNCTIONS_H
