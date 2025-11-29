@class NSString, TIMXThreadSafeMutableDictionary, TIMXMulticastDelegate, TIMXSDKInstance;
@protocol TIMXMessageStoreProtocol;

@interface TIMXOChangeObserver : NSObject <TIMXStartUpTaskProtocol, TIMXMessageStoreChangesObserver, TIMXInstanceScopeSingleton, TIMXNotifierDelegate> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXMulticastDelegate *multicastDelegate;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property (retain, nonatomic) TIMXThreadSafeMutableDictionary *pendingNotifyMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;
+ (int)convertPriorityToMulticastPriority:(long long)a0;

- (void)onSilentMembers:(id)a0 silentStatus:(long long)a1 silentMembers:(id)a2 silentEndTime:(long long)a3 cmdMessageID:(id)a4;
- (void)onSilentConversation:(id)a0 silentStatus:(long long)a1 cmdMessageID:(id)a2;
- (void)newP2PMessageNotifyConversation:(id)a0 message:(id)a1;
- (void)userDidLogin:(id)a0;
- (void)conversationDidDissolved:(id)a0;
- (void)onDatabaseDamageWithError:(id)a0 accountID:(long long)a1;
- (id)addWeakChangeObserver:(id)a0;
- (void)onStrangerConversationChange:(id)a0 isNewPositive:(BOOL)a1;
- (void)didReceiveIncentiveChatCommandMessage:(id)a0;
- (void)didReceiveRTVCommandMessage:(id)a0;
- (void)didReceiveGroupSPCommandMessage:(id)a0;
- (void)didReceiveBackpackSPCommandMessage:(id)a0;
- (void)didReceiveCommonBusinessCommandMessage:(id)a0;
- (id)addWeakChangeObserver:(id)a0 queue:(id)a1 priority:(long long)a2;
- (void)onMessagesCreated:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2 context:(id)a3;
- (void)onMessagesCreatedV2:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2 context:(id)a3;
- (void)onMessagesUpdated:(id)a0 belongingConversationMap:(id)a1 updateReasonMap:(id)a2;
- (void)onMessagesDeleted:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2 context:(id)a3;
- (void)onMessagesNewPropertiesUpdated:(id)a0 belongingConversationMap:(id)a1 messageOldPropertiesMap:(id)a2 messageNewPropertiesMap:(id)a3 reason:(id)a4;
- (void)onConversationsUpdated:(id)a0 context:(id)a1;
- (void)onFilesUpdated:(id)a0;
- (void)onStrangerMessagesCreated:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2 context:(id)a3;
- (void)onStrangerConversationUpdated:(id)a0;
- (void)onStrangerConversationsUpdated:(id)a0;
- (void)userDidLogout:(id)a0;
- (void)willInsertNewMessagesWithMessageIdentifiers:(id)a0 belongingConversationMap:(id)a1;
- (void)willHandleCommandMessages:(id)a0 reason:(id)a1;
- (void)userWillLogout:(id)a0;
- (unsigned long long)convertReasonStringToReason:(id)a0;
- (void)setUp;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;
- (void)removeChangeObserverWithIdentifier:(id)a0;

@end
