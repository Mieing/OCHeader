@class NSString;

@interface AWEIMBatchUpdateManager : NSObject <IESIMDBConvBatchUpdateRuleInjectorProtocolV2Delegate, IESIMDBRealTimeUpdatePluginInjectorProtocolDelegate>

@property (readonly, nonatomic) BOOL shouldMigrateStorageToKv;
@property (copy, nonatomic) NSString *uid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)batchUpdatePluginsWithContext:(id)a0;
- (void)willMigrateWithContext:(id)a0;
- (void)didInitPlugins:(id)a0;
- (id)buildBizContext:(id)a0;
- (void)willBatchUpdateWithContext:(id)a0;
- (id)realUpdatePluginsWithInjector:(id)a0;
- (long long)p_foldGroupChatExpOptionLocalValueWithUid:(id)a0;
- (id)p_chatDemoteStrategyExpLocalDictWithUid:(id)a0;
- (void).cxx_destruct;
- (id)initWithUid:(id)a0;

@end
