@class NSString, TIMXSDKInstance;

@interface TIMXOThirdPartyConversationNotifier : NSObject <TIMXStartUpTaskProtocol, TIMXMessageStoreChangesObserver, TIMXThirdPartyEventProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;

- (void)onThirdPartyConversationsCreated:(id)a0 context:(id)a1;
- (void)onThirdPartyConversationsUpdated:(id)a0 context:(id)a1;
- (void)onThirdPartyConversationsDeleted:(id)a0 context:(id)a1;
- (void)onThirdPartyMessagesDeleted:(id)a0 belongingConversationMap:(id)a1 context:(id)a2;
- (void)onThirdPartyMessagesUpdated:(id)a0 belongingConversationMap:(id)a1 context:(id)a2;
- (void)onThirdPartyMessagesCreated:(id)a0 belongingConversationMap:(id)a1 context:(id)a2;
- (void)didInsertNewMessages:(id)a0 belongingConversation:(id)a1;
- (id)conversationWithIdentifier:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)conversationWithIdentifier:(id)a0;
- (id)initWithRootObject:(id)a0;

@end
