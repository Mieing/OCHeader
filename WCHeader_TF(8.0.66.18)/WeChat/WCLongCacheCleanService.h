@class NSArray, ChatLogRawMediaCache, NSString, NSObject, WCRawMediaTaskOperation;
@protocol OS_dispatch_queue;

@interface WCLongCacheCleanService : MMUserService <WCRawMediaTaskOperationDelegate, MMServiceProtocol> {
    int cancelled;
}

@property BOOL bInRunning;
@property BOOL bInLongRunning;
@property BOOL bIsPositive;
@property (retain, nonatomic) ChatLogRawMediaCache *rawMediaCache;
@property (retain, nonatomic) WCRawMediaTaskOperation *taskOperation;
@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) unsigned long long currentSize;
@property (retain, nonatomic) NSArray *ccArray;
@property (retain, nonatomic) NSArray *fastDeleteArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *shareDispatcQueue;
@property (nonatomic) BOOL needWaitToGetAllRaw;
@property (nonatomic) BOOL bInHighPriority;
@property (retain, nonatomic) NSString *overallSessionId;
@property int cacheRemoveEndType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportOriginMediaClean;
+ (id)convertChatLogInfoToRawTask:(id)a0;
+ (id)convertDataItemsToChatLogInfo:(void *)a0;

- (id)genSessionId;
- (id)getSessionId;
- (id)genOverallSessionId;
- (id)getOverallSessionId;
- (id)getSavedOverallSessionId;
- (unsigned long long)getCurrentCleanSize;
- (unsigned long long)getTotalCleanSize;
- (id)getCurrentCleanContentReportJson;
- (id)getTotalCleanContentReportJson;
- (void)makeHighPriority;
- (void)makeDefaultPriority;
- (void)addLongTask:(id)a0 shortTask:(id)a1 fastDeleteTask:(id)a2 totalSize:(unsigned long long)a3 cleanAllSend:(BOOL)a4 cleanAllReceive:(BOOL)a5 reportCleanContentJson:(id)a6;
- (BOOL)checkShouldWaitAllSelectTask;
- (void)addAllSelectTask;
- (void)startRawOperation;
- (BOOL)isServiceRunning;
- (BOOL)isInLongRunningJob;
- (void)startRawService:(BOOL)a0;
- (void)resetAllState;
- (void)stopRawService;
- (void)onRawMediaFinishOnetask:(id)a0;
- (void)onRawMediaOperationTaskFinish:(id)a0;
- (void)onChatLogDataLoadFinished;
- (void).cxx_destruct;

@end
