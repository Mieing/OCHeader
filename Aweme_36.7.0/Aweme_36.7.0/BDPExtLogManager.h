@class NSObject;
@protocol OS_dispatch_semaphore;

@interface BDPExtLogManager : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_semaphore> *logFileSemaphore;

+ (id)p_getLogDataWithLogs:(id)a0 type:(unsigned long long)a1;
+ (id)p_getLogFolderPathWithUniqueID:(id)a0;
+ (BOOL)p_writeFile:(id)a0 withData:(id)a1 error:(id *)a2;
+ (id)p_getLogFileDataWithLogPath:(id)a0;
+ (id)p_formatPartDataWithName:(id)a0 fileName:(id)a1 fileData:(id)a2;
+ (id)p_getFormatAlogDataWithFilePaths:(id)a0;
+ (void)p_deleteAllLogFile:(id)a0;
+ (void)trackLogPostWithType:(unsigned long long)a0 UniqueID:(id)a1 dataSize:(unsigned long long)a2 result:(BOOL)a3 error:(id)a4;
+ (id)p_getFileInfoModelWithLogPath:(id)a0;
+ (id)p_createNewFileName;
+ (void)p_deleteLogFileAsync:(id)a0;
+ (id)p_formatLogWithModel:(id)a0 type:(unsigned long long)a1;
+ (id)p_getTrackNameWithType:(unsigned long long)a0;
+ (BOOL)writeFeedbackLogToFileWithLogs:(id)a0 uniqueID:(id)a1 error:(id *)a2;
+ (void)writeFeedbackLogToFileWithLogs:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
+ (void)uploadFeedbackLogWithUniqueID:(id)a0 feedbackID:(id)a1;
+ (BOOL)uploadRealtimeLogWithLogs:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;

@end
