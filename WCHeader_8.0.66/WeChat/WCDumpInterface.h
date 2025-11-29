@interface WCDumpInterface : NSObject

+ (id)dumpReportWithReportType:(unsigned long long)a0 suspendAllThreads:(BOOL)a1 enableSnapshot:(BOOL)a2 writeCpuUsage:(BOOL)a3;
+ (id)dumpReportWithReportType:(unsigned long long)a0 withExceptionReason:(id)a1 suspendAllThreads:(BOOL)a2 enableSnapshot:(BOOL)a3 writeCpuUsage:(BOOL)a4 selfDefinedPath:(BOOL)a5;
+ (id)saveDump:(id)a0 withReportType:(unsigned long long)a1 withReportID:(id)a2;
+ (id)genFilePathWithReportType:(unsigned long long)a0;
+ (id)genFilePathWithReportType:(unsigned long long)a0 withReportID:(id)a1;

@end
