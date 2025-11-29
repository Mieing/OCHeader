@class NSString, WARealtimeDataOperationBufferPool, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface WARealtimeDataOperateManager : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WARealtimeDataOperationBufferPool *operationPool;
@property (nonatomic) unsigned int lastUploadTimeStamp;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)addOperation:(id)a0;
- (void)workerThreadAddOperation:(id)a0;
- (BOOL)bufferSizeReachLimit;
- (BOOL)reachUploadTimeGap;
- (BOOL)hasImmediateOperation;
- (BOOL)shouldUploadOperations;
- (void)timerCheck;
- (void)checkOperationPool;
- (void)workerThread_checkOperationPool;
- (void)operateRealtimeData:(id)a0;
- (void)processFailedOperations:(id)a0 errorCode:(int)a1 errMsg:(id)a2;
- (void)reportWithOperation:(id)a0 action:(unsigned long long)a1;
- (void)reenqueueOperations:(id)a0;
- (void)abandonOperations:(id)a0 errCode:(int)a1 errMsg:(id)a2;
- (void)callResultForOperations:(id)a0 errCode:(int)a1 errMsg:(id)a2;
- (void)notifyOperationsResultWithAppid:(id)a0 operationsIdList:(id)a1 errCode:(int)a2 errMsg:(id)a3 dataSize:(unsigned long long)a4;
- (void)mainthread_callExtensionWithAppid:(id)a0 operationsIdList:(id)a1 errCode:(int)a2 errMsg:(id)a3 dataSize:(unsigned long long)a4;
- (void)releaseTimer;
- (void)resetTimer;
- (void)onWXARealtimeReportResponse:(id)a0;
- (void)addNotification;
- (void)removeNotification;
- (void)willEnterForeground;
- (void).cxx_destruct;

@end
