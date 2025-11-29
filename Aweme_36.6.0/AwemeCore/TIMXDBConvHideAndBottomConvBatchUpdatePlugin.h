@class NSSet, NSString, TIMXSDKInstance;

@interface TIMXDBConvHideAndBottomConvBatchUpdatePlugin : NSObject <TIMXDBConversationORMRealTimeUpdatePluginProtocol>

@property (copy, nonatomic) NSSet *observedUpdatedReasonSet;
@property (weak, nonatomic) TIMXSDKInstance *r;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canInjectRealTimeUpdateWithContext:(id)a0;
+ (id)createRealUpdatePluginWithContext:(id)a0;

- (id)p_observedConvChangedReason;
- (void)p_updateWithConversationWithConv:(id)a0 updater:(id)a1 originContext:(id)a2;
- (id)observedUpdatedReasonWithContext:(id)a0;
- (void)realTimeUpdateWithConversationWithContext:(id)a0 updater:(id)a1;
- (BOOL)isBottomConversation:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
