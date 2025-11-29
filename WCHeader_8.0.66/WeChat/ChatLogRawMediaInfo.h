@interface ChatLogRawMediaInfo : NSObject

+ (id)getRelatedMemoryKV;
+ (void)saveRawReceiveSize:(unsigned long long)a0;
+ (unsigned long long)rawReceiveSize;
+ (void)saveRawSendSize:(unsigned long long)a0;
+ (unsigned long long)rawSendSize;
+ (void)saveCleanSessionId:(id)a0;
+ (id)cleanSessionId;
+ (void)saveOverallSessionId:(id)a0;
+ (id)overallSessionId;
+ (void)saveCleanContentJson:(id)a0;
+ (id)cleanContentJson;
+ (void)saveRawSendSizeClean:(unsigned long long)a0;
+ (unsigned long long)rawSendSizeClean;
+ (void)saveRawReceiveSizeClean:(unsigned long long)a0;
+ (unsigned long long)rawReceiveSizeClean;
+ (void)setGetAllRawSend:(BOOL)a0;
+ (BOOL)getAllRawSend;
+ (void)setGetAllRawReceive:(BOOL)a0;
+ (BOOL)getAllRawReceive;
+ (unsigned long long)totalTaskSize;
+ (void)saveTotalTaskSize:(unsigned long long)a0;
+ (unsigned long long)currentTaskSize;
+ (void)saveCurrentTaskSize:(unsigned long long)a0;
+ (void)resetTheAnalyse;
+ (void)reportRawServiceInfo;
+ (void)analyseTaskInfo:(id)a0 compress:(BOOL)a1 costTime:(double)a2;

@end
