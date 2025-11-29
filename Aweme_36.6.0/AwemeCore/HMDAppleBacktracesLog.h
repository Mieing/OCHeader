@interface HMDAppleBacktracesLog : NSObject

+ (id)logWithBacktraces:(id)a0 type:(unsigned long long)a1 exception:(id)a2 reason:(id)a3;
+ (id)getAllThreadsLogByKeyThread:(unsigned int)a0 maxThreadCount:(unsigned long long)a1 skippedDepth:(unsigned long long)a2 logType:(unsigned long long)a3 suspend:(BOOL)a4 exception:(id)a5 reason:(id)a6;
+ (id)getThreadLogByThread:(unsigned int)a0 skippedDepth:(unsigned long long)a1 logType:(unsigned long long)a2 suspend:(BOOL)a3 exception:(id)a4 reason:(id)a5;
+ (void)openFormatOpt;
+ (void)closeFormatOpt;
+ (id)getAllThreadsLogByKeyThread:(unsigned int)a0 skippedDepth:(unsigned long long)a1 logType:(unsigned long long)a2;
+ (id)getAllThreadsLogBySkippedDepth:(unsigned long long)a0 logType:(unsigned long long)a1;
+ (id)getAllThreadsLogByKeyThread:(unsigned int)a0 skippedDepth:(unsigned long long)a1 logType:(unsigned long long)a2 exception:(id)a3 reason:(id)a4;
+ (id)getMainThreadLogBySkippedDepth:(unsigned long long)a0 logType:(unsigned long long)a1;
+ (id)getCurrentThreadLogBySkippedDepth:(unsigned long long)a0 logType:(unsigned long long)a1;
+ (id)getThreadLog:(unsigned int)a0 BySkippedDepth:(unsigned long long)a1 logType:(unsigned long long)a2;
+ (id)getThreadLogByParameter:(id)a0;
+ (void)getThreadLogByParameter:(id)a0 callback:(id /* block */)a1;
+ (void)getAsyncThreadLogByParameter:(id)a0 callback:(id /* block */)a1;
+ (void)getAllThreadsLogByKeyThread:(unsigned int)a0 maxThreadCount:(unsigned long long)a1 skippedDepth:(unsigned long long)a2 logType:(unsigned long long)a3 suspend:(BOOL)a4 exception:(id)a5 reason:(id)a6 callback:(id /* block */)a7;
+ (void)getThreadLogByThread:(unsigned int)a0 skippedDepth:(unsigned long long)a1 logType:(unsigned long long)a2 suspend:(BOOL)a3 exception:(id)a4 reason:(id)a5 callback:(id /* block */)a6;
+ (id)logWithBacktraceArray:(id)a0 type:(unsigned long long)a1 exception:(id)a2 reason:(id)a3 includeAllImages:(BOOL)a4;
+ (id)logHeaderWithType:(unsigned long long)a0 exception:(id)a1 reason:(id)a2;
+ (id)logBacktraceArray:(id)a0;
+ (id)logImageList;
+ (unsigned int)mainThread;
+ (unsigned int)currentThread;

@end
