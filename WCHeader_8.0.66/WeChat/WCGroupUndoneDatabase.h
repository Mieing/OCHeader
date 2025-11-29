@class WCTDatabase, WCTTable;

@interface WCGroupUndoneDatabase : NSObject

@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) WCTTable *todoTable;

- (id)init;
- (void)clearDatabase;
- (void)reloadDatabase;
- (void)createTables;
- (id)createTableWithName:(id)a0 objectClass:(Class)a1;
- (BOOL)updateChatRoomToolMessageEventInDB:(id)a0;
- (BOOL)deleteChatRoomToolMessageEventInSameEventId:(id)a0;
- (BOOL)markDeleteChatRoomToolMessageEventInSameEventId:(id)a0;
- (BOOL)checkIfDisposeWithSameSvrId:(unsigned long long)a0 chatroom:(id)a1;
- (id)getChatRoomToolMessageEventList:(id)a0 fromEventTime:(unsigned int)a1 limit:(unsigned int)a2;
- (id)getChatroomToolMessageEventWithEventId:(id)a0 chatroom:(id)a1 limit:(unsigned int)a2;
- (id)getChatroomToolMessageEventWithSvrId:(long long)a0 chatroom:(id)a1 limit:(unsigned int)a2;
- (id)getAnyChatroomToolMessageEventWithEventId:(id)a0 chatroom:(id)a1 limit:(unsigned int)a2;
- (id)getAnyChatroomToolMessageEventWithSvrId:(long long)a0 chatroom:(id)a1 limit:(unsigned int)a2;
- (BOOL)deleteChatRoomToolMessageEventInSameRelatedMesSvrID:(id)a0;
- (id)getChatRoomToolEvent:(id)a0 withAppUserName:(id)a1 limit:(unsigned int)a2;
- (BOOL)deleteChatRoomToolMessageEvent:(id)a0;
- (BOOL)deleteExpiredEventInfoForChatroom:(id)a0;
- (void).cxx_destruct;

@end
