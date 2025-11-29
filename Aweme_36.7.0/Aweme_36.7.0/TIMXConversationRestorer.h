@class NSString, TIMXSDKInstance;

@interface TIMXConversationRestorer : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)restoreConversations:(id)a0 shortIDMap:(id)a1 conversationTypeMap:(id)a2 completion:(id /* block */)a3;
- (void)restoreLocalConversation:(id)a0 shortID:(long long)a1 conversationType:(int)a2 minIndex:(long long)a3 completion:(id /* block */)a4;
- (void)restoreDeletedConvNotInDB:(id)a0 shortID:(long long)a1 conversationType:(int)a2 completion:(id /* block */)a3;
- (void)restoreDeletedConversation:(id)a0 shortID:(long long)a1 conversationType:(int)a2 minIndex:(id)a3 messageIDList:(id)a4 shouldUpdateMinIndex:(BOOL)a5 shouldUpdateMsg:(BOOL)a6 completion:(id /* block */)a7;
- (void)p_restoreConversations:(id)a0 shortIDMap:(id)a1 conversationTypeMap:(id)a2 nextCursorMap:(id)a3 successfulConvIDs:(id)a4 failedConvIDs:(id)a5 error:(id)a6 completion:(id /* block */)a7;
- (void)restoreDeletedConvWithInfo:(id)a0;
- (void)restoreDeletedConvWithInfo:(id)a0 shouldUpdateMinIndex:(BOOL)a1 shouldUpdateMsg:(BOOL)a2 completion:(id /* block */)a3;
- (void)restoreDeletedConvNotInDB:(id)a0 completion:(id /* block */)a1;
- (void)restoreLocalConversationInfo:(id)a0 completion:(id /* block */)a1;
- (void)restoreDeletedMessageWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)p_fetchRemoteMsgWithConversationIDs:(id)a0 shortIDMap:(id)a1 conversationTypeMap:(id)a2 completion:(id /* block */)a3;
- (void)p_restoreLocalConversations:(id)a0 shortIDMap:(id)a1 conversationTypeMap:(id)a2 minIndexMap:(id)a3 completion:(id /* block */)a4;
- (void)p_restoreDeletedMessageWithMessageIDs:(id)a0 conversationID:(id)a1 shortID:(long long)a2 conversationType:(int)a3 completion:(id /* block */)a4;
- (void)restoreDeletedMessageWithMessageIDs:(id)a0 conversationID:(id)a1 shortID:(long long)a2 conversationType:(int)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
