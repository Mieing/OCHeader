@class NSString, TIMXSDKInstance;

@interface TIMXOConversationManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchAllLocalConversationsInInboxes:(id)a0 beforeSortOrder:(long long)a1 conversationType:(unsigned long long)a2 pageCount:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)fetchConversationsWithIdentifiers:(id)a0 inboxes:(id)a1 beforeSortOrder:(long long)a2 pageCount:(unsigned long long)a3 completion:(id /* block */)a4;
- (long long)memberVersionForConversationID:(id)a0;
- (void)batchSetSyncedExtWithEntries:(id)a0 shouldRequest:(BOOL)a1 conversationIDs:(id)a2 completion:(id /* block */)a3;
- (void)restoreConversations:(id)a0 shortIDMap:(id)a1 convTypeMap:(id)a2 completion:(id /* block */)a3;
- (void)fetchCreateConversationsInInbox:(int)a0 cursor:(long long)a1 conversationType:(unsigned long long)a2 sortType:(long long)a3 completion:(id /* block */)a4;
- (void)vacuumDatabaseWithCompletion:(id /* block */)a0;
- (void)fetchAllConversationsByLocalDBInInbox:(int)a0 beforeSortOrder:(long long)a1 conversationType:(unsigned long long)a2 pageCount:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)fetchAllConversationsInInbox:(int)a0 cursor:(long long)a1 conversationType:(unsigned long long)a2 pageCount:(unsigned long long)a3 sortType:(id)a4 includeRemovedGroup:(id)a5 completion:(id /* block */)a6;
- (void)fetchJoinedConversationsInInbox:(int)a0 cursor:(long long)a1 conversationType:(unsigned long long)a2 sortType:(long long)a3 completion:(id /* block */)a4;
- (void)markAllConversationsAsReadWithMode:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)deleteConversationIdentifiers:(id)a0 withOptions:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)getAllDBSizeWithCompletion:(id /* block */)a0;
- (void)fetchAllConversationBaseInfoWithCoreExtKeys:(id)a0 completion:(id /* block */)a1;
- (void)sendMessageP2PWithsendType:(long long)a0 conversationId:(id)a1 visibleUser:(id)a2 messageType:(long long)a3 content:(id)a4 ext:(id)a5 complection:(id /* block */)a6;
- (void)fetchConversationInfoWithShortID:(long long)a0 conversationID:(id)a1 type:(unsigned long long)a2 inInbox:(int)a3 completion:(id /* block */)a4;
- (id)fetchConversationsWithIdentifiers:(id)a0;
- (id)conversationIdentifierWithOwnerID:(id)a0 spUid:(id)a1;
- (BOOL)doesDBHaveConversationWithBoxType:(long long)a0;
- (BOOL)doesDBHaveConversationWithBoxTypeMask:(long long)a0;
- (BOOL)doesDBHaveStrangerConversationWithBoxTypeMask:(long long)a0;
- (void)batchSetSyncedExtWithEntries:(id)a0 conversationIDs:(id)a1 completion:(id /* block */)a2;
- (void)loadRemoteConversationsIfLocalNotExist:(id)a0 shortIdMap:(id)a1 typeMap:(id)a2 inbox:(int)a3 completion:(id /* block */)a4;
- (void)loadRemoteConversationsIfLocalNotExist:(id)a0 shortIdMap:(id)a1 typeMap:(id)a2 limit:(long long)a3 inbox:(int)a4 completion:(id /* block */)a5;
- (void)fetchDeletedConvInfoListByCursor:(long long)a0 limit:(long long)a1 completion:(id /* block */)a2;
- (void)deleteConversationsPermanently:(id)a0 shortIDMap:(id)a1 convTypeMap:(id)a2 completion:(id /* block */)a3;
- (void)fetchAllGeneralBoxTypeUnreadConversationsLimit:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)deleteConversationsBeforeTime:(id)a0 minRemain:(unsigned long long)a1 completion:(id /* block */)a2;
- (long long)otherUserIDFor1to1ChatWithConversationID:(id)a0;
- (void)fetchAllFavoritedConversationsInInbox:(int)a0 completion:(id /* block */)a1;
- (void)p_async_on_request_queue:(id /* block */)a0;
- (id)threadBelongingDictByThreadIdDict:(id)a0;
- (id)p_paginateArray:(id)a0 pageSize:(long long)a1;
- (void)p_deleteConversationsPermanently:(id)a0 shortIDMap:(id)a1 conversationTypeMap:(id)a2 completion:(id /* block */)a3;
- (void)classifyConversations:(id)a0 commonConvIds:(id)a1 strangerConvIds:(id)a2 threadIds:(id)a3;
- (id)conversationIDFor1to1ChatWithOtherUserID:(long long)a0 inbox:(int)a1;
- (id)conversationIDForGroupChatWithConversationShortID:(long long)a0;
- (BOOL)conversationExitsInDB:(id)a0;
- (void)fetchAllStickOnTopConversationsInInbox:(int)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
