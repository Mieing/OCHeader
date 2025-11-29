@class NSString;
@protocol IESIMDBConvBatchUpdateRuleInjectorProtocolV2Delegate;

@interface IESIMDBConvBatchUpdateRuleInjectorV2 : NSObject <TIMXDBConversationORMBatchUpdateManagerV2Delegate, IESIMDBConvBatchUpdateRuleInjectorProtocolV2>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESIMDBConvBatchUpdateRuleInjectorProtocolV2Delegate> delegate;

- (BOOL)didFinishBatchUpdate;
- (id)p_batchUpdateManager;
- (void)clearAllBizBatchUpdateStatus;
- (id)batchUpdatePluginsWithContext:(id)a0;
- (void)willMigrateWithContext:(id)a0;
- (id)buildBizContext:(id)a0;
- (void)willBatchUpdateWithContext:(id)a0;
- (void)didInitPluginsWithContext:(id)a0;
- (void).cxx_destruct;

@end
