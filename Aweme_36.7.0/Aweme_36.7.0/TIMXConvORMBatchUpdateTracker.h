@class NSString, TIMXSDKInstance, TIMXElapsedTimeLogger, NSMutableArray;

@interface TIMXConvORMBatchUpdateTracker : NSObject <TIMXDBConversationORMBatchUpdateEventProtocol>

@property (weak, nonatomic) TIMXSDKInstance *r;
@property (retain, nonatomic) TIMXElapsedTimeLogger *elapsedTimeLogger;
@property (nonatomic) unsigned long long strategy;
@property (nonatomic) unsigned long long pluginsCount;
@property (retain, nonatomic) NSString *firstBizName;
@property (nonatomic) long long processedNormalConvCount;
@property (nonatomic) long long processedStrangerConvCount;
@property BOOL affectedBySwitchingBackground;
@property (retain, nonatomic) NSMutableArray *asyncBatchUpdateContextsArray;
@property (nonatomic) BOOL reportedDBIsAvailable;
@property (nonatomic) double startBatchUpdateTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)batchUpdateManager:(id)a0 strategy:(unsigned long long)a1;
- (void)batchUpdateManager:(id)a0 didInitPlugins:(id)a1;
- (void)batchUpdateManager:(id)a0 didFinishWithConvCount:(unsigned long long)a1 success:(BOOL)a2 context:(id)a3;
- (void)batchUpdateManager:(id)a0 didUpdateNormalConversation:(unsigned long long)a1 isFinish:(BOOL)a2 context:(id)a3;
- (void)batchUpdateManager:(id)a0 didUpdateStrangerConversation:(unsigned long long)a1 isFinish:(BOOL)a2 context:(id)a3;
- (void)reportBatchUpdateInterruptedIfNeeded;
- (void)recordBatchUpdateStatus;
- (void)trackSyncUpdateWithContext:(id)a0 success:(BOOL)a1 convCount:(unsigned long long)a2;
- (void)trackAsyncUpdateSuccess:(BOOL)a0;
- (void)clearBatchUpdateStatus;
- (void)trackDBIsAvaiableIfNeeded;
- (id)commonParamsWithStatus:(unsigned long long)a0 queryDuration:(id)a1 convCount:(unsigned long long)a2;
- (id)initWithSDKRoot:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didEnterBackground:(id)a0;

@end
