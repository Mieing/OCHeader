@class NSString, TIMXSDKInstance;

@interface TIMXOMessageNotifier : NSObject <TIMXStartUpTaskProtocol, TIMXMessageStoreChangesObserver, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;

- (void)onMessagesCreated:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2 context:(id)a3;
- (void)onMessagesCreatedV2:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2 context:(id)a3;
- (void)onMessagesUpdated:(id)a0 belongingConversationMap:(id)a1 updateReasonMap:(id)a2;
- (void)onMessagesDeleted:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2 context:(id)a3;
- (void)onConversationsDeleted:(id)a0;
- (void)onConversationCleared:(id)a0;
- (id)__messageWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
