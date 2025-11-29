@class NSString, TIMXSDKInstance;
@protocol TIMXMessageStoreProtocol;

@interface TIMXOThirdPartyManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markAllConversationsAsReadWithInboxes:(id)a0 bizId:(int)a1 completion:(id /* block */)a2;
- (id)conversationsBeforeSortOrder:(long long)a0 limit:(unsigned long long)a1 onlyUnread:(BOOL)a2 inboxes:(id)a3 bizId:(int)a4;
- (void)reportTotalUnreadCount;
- (id)maxMsgCreateAtWithInbox:(int)a0 bizId:(int)a1;
- (void)syncConversations:(id)a0 bizId:(int)a1 inbox:(int)a2 completion:(id /* block */)a3;
- (void)updateConversations:(id)a0 bizId:(int)a1 inbox:(int)a2 completion:(id /* block */)a3;
- (void)deleteConversationWithLastIndexDict:(id)a0 bizId:(int)a1 inbox:(int)a2 completion:(id /* block */)a3;
- (void)markAllConversationsAsReadWithInbox:(int)a0 bizId:(int)a1 completion:(id /* block */)a2;
- (void)markConversationAsRead:(id)a0 bizId:(int)a1 inbox:(int)a2 completion:(id /* block */)a3;
- (void)markAllConversationHintAsReadWithInbox:(int)a0 bizId:(int)a1 completion:(id /* block */)a2;
- (id)conversationWithIdentifiers:(id)a0 bizId:(int)a1;
- (void)overrideConversations:(id)a0 context:(id)a1 shouldDeleteOtherConversations:(BOOL)a2 completion:(id /* block */)a3;
- (void)populateDBConversation:(id)a0 withConversation:(id)a1;
- (void)populateDBMessage:(id)a0 withMessage:(id)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
