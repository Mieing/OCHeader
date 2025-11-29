@class NSString, TIMXSDKInstance;

@interface TIMXMessageDeleter : NSObject <TIMXMessageDeleterProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hardDeleteMessagesInConversation:(id)a0 beforeOrderIndex:(long long)a1 completion:(id /* block */)a2;
- (void)softDeleteMessage:(id)a0 inConversation:(id)a1 sendToServer:(BOOL)a2 completion:(id /* block */)a3;
- (void)softDeleteMessage:(id)a0 serverMessageID:(long long)a1 inConversation:(id)a2 conversationID:(id)a3 sendToServer:(BOOL)a4 completion:(id /* block */)a5;
- (void)hardDeleteAllMessagesInConversation:(id)a0 completion:(id /* block */)a1;
- (void)clearAllMessagesWithConversationId:(id)a0 calculateConvSortTimestampBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)hardDeleteConversation:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)hardDeleteConversations:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)hardDeleteStrangerConversations:(id)a0 options:(unsigned long long)a1 inbox:(long long)a2 completion:(id /* block */)a3;
- (void)hardDeleteConversationsBeforeTime:(id)a0 minRemain:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)doNotDisplayConversation:(id)a0 syncToAllDevices:(BOOL)a1 completion:(id /* block */)a2;
- (void)hardDeleteConversation:(id)a0 fromIndex:(long long)a1 toIndex:(long long)a2 completion:(id /* block */)a3;
- (void)deleteFilesInConversation:(id)a0;
- (void)deleteFilesRelatedToMessage:(id)a0 inConversation:(id)a1;
- (void)handelDBConversationsDeleted:(id)a0 anchorMessageDict:(id)a1 sendToServer:(BOOL)a2;
- (void)populateDeletionConvParamsByInbox:(id)a0 conversation:(id)a1 anchorMessage:(id)a2;
- (void)batchSendDeleteConversationParams:(id)a0;
- (void)realSendDeleteConvsParams:(id)a0 currentIndex:(unsigned long long)a1;
- (void)handelDBStrangerConvsDeleted:(id)a0 sendToServer:(BOOL)a1 inbox:(long long)a2;
- (void)realSendDeleteStrangerConvsParams:(id)a0 currentIndex:(unsigned long long)a1 inbox:(int)a2;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
