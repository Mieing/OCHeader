@interface EAccountAPILog : NSObject

+ (id)getDocumentsPath;
+ (BOOL)fileExist:(id)a0;
+ (void)deleteErrorFile;
+ (void)addOneLogToErrorFileByArray:(id)a0;
+ (id)contentsOfDirectory:(id)a0;
+ (BOOL)errorFileExist;
+ (id)errorFilePath;
+ (float)getFreeDiskspace;
+ (BOOL)hasFreeSpece;
+ (id)readContentsFromErrorFileByString;
+ (void)startOneSDKLog;
+ (void)tryStartSDKLog;
+ (void)writeTofile:(id)a0 path:(id)a1 content:(id)a2;

@end
