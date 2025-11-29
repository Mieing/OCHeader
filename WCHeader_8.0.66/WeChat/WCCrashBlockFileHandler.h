@interface WCCrashBlockFileHandler : NSObject

+ (id)getPendingCrashReportInfoWithError:(id *)a0;
+ (id)loadPendingCrashReportID;
+ (id)getAllCrashReportPath;
+ (id)getAllCrashReportID;
+ (BOOL)hasCrashReport;
+ (void)deleteCrashDataWithReportID:(id)a0;
+ (BOOL)p_isCrashReportID:(id)a0;
+ (id)diretoryOfUserDump;
+ (id)diretoryOfUserDumpWithType:(unsigned long long)a0;
+ (id)getLagReportIDWithType:(unsigned long long)a0 withDate:(id)a1;
+ (id)getLagReportIDWithType:(unsigned long long)a0 withDate:(id)a1 withLimitReportID:(id)a2;
+ (id)getLagDataWithReportIDArray:(id)a0 andReportType:(unsigned long long)a1;
+ (id)getLagDataWithReportID:(id)a0 andReportType:(unsigned long long)a1;
+ (void)deleteLagDataWithReportID:(id)a0 andReportType:(unsigned long long)a1;
+ (id)p_getFileSuffixWithType:(unsigned long long)a0 withDate:(id)a1;
+ (BOOL)haveLagFiles;
+ (BOOL)haveLagFilesOnDate:(id)a0;
+ (BOOL)haveLagFilesOnType:(unsigned long long)a0;
+ (BOOL)haveLagFilesOnDate:(id)a0 onType:(unsigned long long)a1;
+ (id)getLaunchBlockRecordFilePath;
+ (id)getStackFeatFilePath;
+ (void)handleOOMDumpFile:(id)a0;
+ (id)getCoreDumpWithReportID:(id)a0 andReportType:(unsigned long long)a1;
+ (id)getAllCoreDumpIDs;

@end
