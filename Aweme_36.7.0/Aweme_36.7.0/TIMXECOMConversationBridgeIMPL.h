@class NSString, TIMXBatchUpdateAggregater, TIMXSDKInstance;

@interface TIMXECOMConversationBridgeIMPL : NSObject <TIMXStartUpTaskProtocol, TIMXECOMConversationBridge, TIMXBatchUpdateAggregaterDelegate, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXBatchUpdateAggregater *updateAggregater;
@property (retain, nonatomic) TIMXBatchUpdateAggregater *conversationUpdateAggregater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;

- (void)fetchConversationInfo:(long long)a0 conversationID:(id)a1 type:(int)a2 inInbox:(int)a3 completion:(id /* block */)a4;
- (void)hardDeleteConversation:(id)a0 withOptions:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)conversationUnreadCountModelsWithIdentifier:(id)a0;
- (id)convUnreadUnionWithIdentifier:(id)a0;
- (BOOL)markConversationNewUnreadModelReadWithConversationID:(id)a0;
- (BOOL)updateConversationUnreadCountModelWithConversationID:(id)a0 convUnreadUnion:(id)a1;
- (void)createConversationWithOtherParticipants:(id)a0 participantsBizRoleObjects:(id)a1 type:(int)a2 name:(id)a3 inInbox:(int)a4 idempotentID:(id)a5 bizExtension:(id)a6 completion:(id /* block */)a7;
- (void)createSubConversationWithParentConvShortID:(long long)a0 parentConvID:(id)a1 inInbox:(int)a2 participantsObjects:(id)a3 bizExtension:(id)a4 completion:(id /* block */)a5;
- (BOOL)clearConversationUnreadCountDataSheet;
- (void)updateSubConversation:(long long)a0 parentConversationID:(id)a1 parentConversationShortID:(long long)a2 inInbox:(int)a3;
- (void)updateConversation:(id)a0 completion:(id /* block */)a1;
- (void)batchUpdateConversation:(id)a0 inInbox:(int)a1;
- (void)updateConversationAndFetchNewestMessageIndex:(id)a0 completion:(id /* block */)a1;
- (void)upsertWithLocalConversationSettingsObject:(id)a0 completion:(id /* block */)a1;
- (void)upsertWithLocalConversationObject:(id)a0 inbox:(int)a1 completion:(id /* block */)a2;
- (void)upsertWithLocalSubConversationObject:(id)a0 completion:(id /* block */)a1;
- (void)setMute:(BOOL)a0 onConversation:(id)a1 completion:(id /* block */)a2;
- (void)setStickOnTop:(BOOL)a0 onConversation:(id)a1 completion:(id /* block */)a2;
- (long long)minIndexV2ForConversation:(id)a0 useDefaultValue:(BOOL)a1;
- (BOOL)setLocalRealDeleteIndex:(long long)a0 forConversation:(id)a1;
- (long long)localRealDeleteIndexForConversation:(id)a0;
- (long long)badgeCountWithIdentifier:(id)a0;
- (long long)readBadgeCountWithIdentifier:(id)a0;
- (void)batchUpdateAggregater:(id)a0 needProcessBatch:(id)a1;
- (BOOL)shouldUseBatchUpdate;
- (void)_updateConversations:(id)a0;
- (void)_updateSubConversations:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end
