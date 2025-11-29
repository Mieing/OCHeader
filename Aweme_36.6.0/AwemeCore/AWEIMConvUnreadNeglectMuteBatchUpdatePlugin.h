@class NSSet, NSString;

@interface AWEIMConvUnreadNeglectMuteBatchUpdatePlugin : NSObject <TIMXDBConversationORMBatchUpdatePluginProtocol, TIMXDBConversationORMRealTimeUpdatePluginProtocol>

@property (copy, nonatomic) NSSet *observedUpdatedReasonSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canInjectBatchUpdateWithContext:(id)a0;
+ (id)createBatchUpdatePluginWithContext:(id)a0;
+ (BOOL)canInjectRealTimeUpdateWithContext:(id)a0;
+ (id)createRealUpdatePluginWithContext:(id)a0;

- (id)p_observedConvChangedReason;
- (void)p_updateWithConversationWithConv:(id)a0 updater:(id)a1 originContext:(id)a2;
- (BOOL)shouldClearBatchUpdateStatus:(id)a0;
- (void)batchUpdateWithConversationWithContext:(id)a0 updater:(id)a1;
- (id)observedUpdatedReasonWithContext:(id)a0;
- (void)realTimeUpdateWithConversationWithContext:(id)a0 updater:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)targetVersion;

@end
