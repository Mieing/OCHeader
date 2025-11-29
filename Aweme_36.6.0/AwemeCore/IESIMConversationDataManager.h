@class NSString;

@interface IESIMConversationDataManager : NSObject <IESIMConversationDataManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIcon:(id)a0 ext:(id)a1 ofConversation:(id)a2 completion:(id /* block */)a3;
- (void)createConversationWithOtherParticipants:(id)a0 type:(unsigned long long)a1 inInbox:(int)a2 completion:(id /* block */)a3;
- (void)fetchConversationInfo:(long long)a0 conversationID:(id)a1 type:(unsigned long long)a2 inInbox:(int)a3 completion:(id /* block */)a4;
- (void)setMute:(BOOL)a0 ofConversation:(id)a1 completion:(id /* block */)a2;
- (void)setStickOnTop:(BOOL)a0 ofConversation:(id)a1 completion:(id /* block */)a2;
- (void)conversationUpdateCurrentIfNeeded:(id)a0 completion:(id /* block */)a1;
- (void)setFoldSetting:(id)a0 conversation:(id)a1 completion:(id /* block */)a2;
- (void)setBatchRoleForParticipant:(id)a0 role:(long long)a1 bizExt:(id)a2 ofConversation:(id)a3 completion:(id /* block */)a4;
- (void)updateConversation:(id)a0 participants:(id)a1 complection:(id /* block */)a2;
- (void)assignSpeakConversation:(BOOL)a0 conversation:(id)a1 members:(id)a2 completion:(id /* block */)a3;
- (void)setConversation:(id)a0 speakMode:(long long)a1 completion:(id /* block */)a2;
- (id)fetchCoreInfoFromConversationORM:(id)a0;
- (void)setAliasForParticipant:(long long)a0 alias:(id)a1 ofConversation:(id)a2 completion:(id /* block */)a3;
- (void)markAllMessagesAsReadWithMode:(unsigned long long)a0 ofConversation:(id)a1 completion:(id /* block */)a2;
- (void)sendMessageP2P:(id)a0 messageType:(long long)a1 content:(id)a2 ext:(id)a3 toConversation:(id)a4 complection:(id /* block */)a5;
- (void)deleteWithMode:(unsigned long long)a0 ofConversation:(id)a1 completion:(id /* block */)a2;
- (void)setName:(id)a0 ofConversation:(id)a1 completion:(id /* block */)a2;
- (void)setNotice:(id)a0 ofConversation:(id)a1 completion:(id /* block */)a2;
- (void)setDesc:(id)a0 ofConversation:(id)a1 completion:(id /* block */)a2;
- (void)removeParticipants:(id)a0 options:(id)a1 fromConversation:(id)a2 completion:(id /* block */)a3;
- (void)addBots:(id)a0 options:(id)a1 toConversation:(id)a2 completion:(id /* block */)a3;
- (void)removeBots:(id)a0 options:(id)a1 fromConversation:(id)a2 completion:(id /* block */)a3;
- (void)dismissFromConversation:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)createConversationWithOtherParticipants:(id)a0 type:(unsigned long long)a1 inInbox:(int)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)addParticipants:(id)a0 options:(id)a1 toConversation:(id)a2 completion:(id /* block */)a3;
- (void)enterConversation:(id)a0 conversationType:(unsigned long long)a1 shortID:(long long)a2 inbox:(int)a3 options:(id)a4 completion:(id /* block */)a5;
- (void)setGroupEntryQuestion:(id)a0 ofConversation:(id)a1 completion:(id /* block */)a2;
- (void)sendUserAction:(long long)a0 extra:(id)a1 toConversation:(id)a2 completion:(id /* block */)a3;
- (void)sendInputStatus:(long long)a0 extra:(id)a1 toConversation:(id)a2 completion:(id /* block */)a3;
- (void)enterConversationToPullOfflineMessage;
- (void)updateBot:(long long)a0 options:(id)a1 fromConversation:(id)a2 completion:(id /* block */)a3;
- (void)setMuteSubscribeSetting:(id)a0 conversation:(id)a1 completion:(id /* block */)a2;
- (void)clearAllMessagesWithConversation:(id)a0 calculateConvSortTimestampBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)vacuumDatabaseWithCompletion:(id /* block */)a0;
- (id)fetchSettingFromConversationORM:(id)a0;
- (void)createThreadWithRootMessageid:(id)a0 rootServerMessageId:(long long)a1 parentConversationShortId:(long long)a2 completion:(id /* block */)a3;
- (void)markAllConversationsAsReadWithMode:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)getAllDBSizeWithCompletion:(id /* block */)a0;
- (void)fetchAllConversationBaseInfoWithCoreExtKeys:(id)a0 completion:(id /* block */)a1;
- (void)conversationUpdateIfNeeded:(id)a0;
- (void)conversationForceSetUpdated:(id)a0 at:(id)a1;
- (void)markAllMessagesBeforeMessage:(id)a0 asReadWithMode:(unsigned long long)a1 ofConversation:(id)a2 completion:(id /* block */)a3;
- (void)markAsUnreadWithMode:(unsigned long long)a0 unreadCount:(long long)a1 ofConversation:(id)a2 completion:(id /* block */)a3;
- (void)deleteWithOptions:(unsigned long long)a0 ofConversation:(id)a1 completion:(id /* block */)a2;
- (void)deleteWithOptions:(unsigned long long)a0 ofConversations:(id)a1 completion:(id /* block */)a2;
- (void)doNotDisplayWithSyncToAllDevices:(BOOL)a0 ofConversation:(id)a1 completion:(id /* block */)a2;
- (void)deleteAllMessagesWithMode:(unsigned long long)a0 ofConversation:(id)a1 completion:(id /* block */)a2;
- (void)addParticipants:(id)a0 toConversation:(id)a1 completion:(id /* block */)a2;
- (void)removeParticipants:(id)a0 fromConversation:(id)a1 completion:(id /* block */)a2;
- (void)leaveFromConversation:(id)a0 completion:(id /* block */)a1;
- (void)setRoleForParticipant:(long long)a0 role:(long long)a1 ofConversation:(id)a2 completion:(id /* block */)a3;
- (void)sendMessageP2P:(long long)a0 conversationId:(id)a1 visibleUser:(id)a2 messageType:(long long)a3 content:(id)a4 ext:(id)a5 complection:(id /* block */)a6;
- (void)blockConversation:(id)a0 members:(id)a1 forTime:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)unblockConversation:(id)a0 memberUid:(id)a1 completion:(id /* block */)a2;
- (void)setConversation:(id)a0 normalOnlyBlock:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateConversation:(id)a0 threadSubscribeStatus:(long long)a1 completion:(id /* block */)a2;

@end
