@class BDECIMKVStore, BDECIMClient, NSObject;
@protocol OS_dispatch_queue;

@interface BDECPigeonConversationManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *conversationNotifyQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *conversationsQueue;
@property (retain) BDECIMKVStore *kvStore;
@property (retain, nonatomic) BDECIMClient *client;

- (void)fetchMessageReadsWithPigeonConversations:(id)a0 conversationType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)markAllMessagesAsReadInConversation:(id)a0 mode:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)onWSMessageDidReceive:(id)a0;
- (void)createParentChatConversationWithPigeonShopId:(id)a0 pigeonBizType:(id)a1 inbox:(int)a2 completion:(id /* block */)a3;
- (BOOL)messageReadStateInConversation:(id)a0 messageIndex:(long long)a1;
- (void)getIconsWithConversationID:(id)a0 pigeonBizType:(id)a1 scene:(id)a2 sourcePage:(id)a3 entranceLocation:(id)a4 extend:(id)a5 completion:(id /* block */)a6;
- (void)deleteConversation:(id)a0 competion:(id /* block */)a1;
- (void)allBizConversationsWithPigeonBizTypes:(id)a0 inboxes:(id)a1 completion:(id /* block */)a2;
- (void)setMute:(BOOL)a0 conversation:(id)a1 pigeonBizType:(id)a2 completion:(id /* block */)a3;
- (void)setStickOnTop:(BOOL)a0 conversation:(id)a1 completion:(id /* block */)a2;
- (void)createSingleChatConversationWithPigeonShopId:(id)a0 conGroupId:(id)a1 pigeonBizType:(id)a2 inbox:(int)a3 completion:(id /* block */)a4;
- (void)fetchMessageReadsWithArrConversations:(id)a0;
- (void)clearAllConversationsUnreadCountWithInbox:(id)a0;
- (void)sendReadMesssageInConversation:(id)a0 markedMessage:(id)a1;
- (id)getPigeonClientConfig;
- (id)parentConvChatReadIndexKVKeyWithBizConversationId:(id)a0 bizType:(id)a1;
- (id)initWithIMClient:(id)a0;
- (void)createSingleChatConversationWithPigeonShopId:(id)a0 inbox:(int)a1 completion:(id /* block */)a2;
- (void)fetchConversationInfoWithConversationShortID:(long long)a0 bizConversationID:(id)a1 inInbox:(int)a2 type:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)sendConversationAllReadMesssageWithBizConversationID:(id)a0 conGroupId:(id)a1 pigeonBizType:(id)a2;
- (void)onReceiveIMConversationUpdate:(id)a0;
- (void)onReceiveIMConversationDissolved:(id)a0;
- (void)onPigeonMessageDidInsert:(id)a0;
- (void)fetchSingleChatMessageReadsWithArrConversations:(id)a0;
- (id)readIndexKVKeyWithConversation:(id)a0;
- (id)readIndexKVKeyWithBizConversationId:(id)a0 bizType:(id)a1;
- (void)allBizConversationsForLifeServiceWithPigeonBizTypes:(id)a0 inboxes:(id)a1 completion:(id /* block */)a2;
- (void)allBizConversationsForECOMWithPigeonBizTypes:(id)a0 inboxes:(id)a1 completion:(id /* block */)a2;
- (id)generateAllBizConversations:(id)a0 pigeonBizTypes:(id)a1 inboxes:(id)a2;
- (void)updateReadIndexWithWSDict:(id)a0;
- (BOOL)ifNeedMoveReadIndexWithPigeonMessage:(id)a0;
- (void)fetchCanSendMsgToConvesationWithConversationId:(id)a0 pigeonBizType:(id)a1 extend:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
