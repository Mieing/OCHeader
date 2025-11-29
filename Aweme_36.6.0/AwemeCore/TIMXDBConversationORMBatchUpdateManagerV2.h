@class TIMXConvORMBatchUpdateTracker, NSString, NSArray, TIMXDBConversationORMBatchUpdateExecutor, TIMXThreadSafeMutableDictionary, TIMXSDKInstance, TIMXDBConversationORMBatchUpdateKVUtility;
@protocol TIMXDBConversationORMBatchUpdateManagerV2Delegate;

@interface TIMXDBConversationORMBatchUpdateManagerV2 : NSObject <TIMXCurrentUserCredentialEventProtocol, TIMXStartUpTaskProtocol, TIMXDBConversationORMBatchUpdateManagerV2Protocol> {
    TIMXSDKInstance *_r;
}

@property (copy, nonatomic) NSString *currentUid;
@property (retain, nonatomic) TIMXDBConversationORMBatchUpdateKVUtility *versionKVUtility;
@property (nonatomic) BOOL didFinishBatchUpdate;
@property (copy, nonatomic) NSArray *registedBatchUpdatePluginsArray;
@property (retain, nonatomic) TIMXDBConversationORMBatchUpdateExecutor *executor;
@property (copy, nonatomic) NSArray *downgradePluginsArray;
@property (retain, nonatomic) TIMXThreadSafeMutableDictionary *batchUpdateStatusDict;
@property (retain, nonatomic) TIMXConvORMBatchUpdateTracker *tracker;
@property (nonatomic) BOOL dbFileExistsWhenInit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TIMXDBConversationORMBatchUpdateManagerV2Delegate> delegate;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;

- (void)clearAllBizBatchUpdateStatus;
- (void)didLoginWithUid:(id)a0;
- (void)startBatchUpdate;
- (void)resetMigrateStatusIfNeeded;
- (id)createOriginPluginsWithContext:(id)a0;
- (BOOL)handleMigrationStatusWithContext:(id)a0;
- (void)prepareBizContext:(id)a0;
- (id)createPluginsWithContext:(id)a0 isFirstMigration:(BOOL)a1 needBatchUpdateStranger:(BOOL *)a2;
- (void)batchUpdateWithStrategy:(unsigned long long)a0 plugins:(id)a1 needBatchUpdateStranger:(BOOL)a2 context:(id)a3;
- (id)p_sdkInnerORMBatchUpdatePlugins;
- (BOOL)canCreatePlugin:(Class)a0 selector:(SEL)a1 context:(id)a2;
- (id)createPlugin:(Class)a0 context:(id)a1;
- (void)updateVersionWithPlugin:(Class)a0 version:(id)a1;
- (id)currentVersionWithPlugin:(Class)a0;
- (void)syncBatchUpdateWithStrategyCoreWithPlugins:(id)a0 needBatchUpdateStranger:(BOOL)a1 context:(id)a2;
- (void)asyncBatchUpdateWithStrategyCoreWithPlugins:(id)a0 needBatchUpdateStranger:(BOOL)a1 context:(id)a2;
- (void)finishBatchUpdateWithError:(id)a0 plugins:(id)a1;
- (BOOL)didFinishBatchUpdateWithPluginName:(id)a0;
- (id)prevBatchUpdateStatusWithPlugin:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end
