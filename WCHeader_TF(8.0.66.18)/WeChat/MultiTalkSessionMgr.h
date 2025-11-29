@class WCTDatabase, NSString, WCTTable;

@interface MultiTalkSessionMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WCTDatabase *dataBase;
@property (retain, nonatomic) WCTTable *contactTable;
@property (retain, nonatomic) WCTTable *messageTable;
@property (retain, nonatomic) WCTTable *sessionTable;
@property (retain, nonatomic) WCTTable *bannerTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)initDatabase;
- (void)closeDB;
- (void)closeDBBeforeInit;
- (void)clearTables;
- (void)createTables;
- (id)internalCreateTable:(id)a0 tableClass:(Class)a1;
- (unsigned int)createNewMultiTalkMessageDataWithGroupData:(id)a0;
- (BOOL)createNewMultiTalkMessageWithGroupData:(id)a0 messageID:(unsigned int)a1 isSelfCaller:(BOOL)a2 sessionState:(unsigned int)a3;
- (BOOL)createNewMultiTalkMessageWithGroupData:(id)a0 messageID:(unsigned int)a1 isSelfCaller:(BOOL)a2 sessionState:(unsigned int)a3 inviteUsername:(id)a4;
- (BOOL)createNewMultiTalkBannerWithGroupData:(id)a0;
- (BOOL)deleteMultiTalkBannerItem:(id)a0;
- (BOOL)updateHasGenMessageWithMessageID:(unsigned int)a0;
- (id)getAllMultiTalkBannerInfos;
- (BOOL)updateMessageWithMessageID:(unsigned int)a0 multiTalkGroup:(id)a1 duration:(unsigned int)a2;
- (BOOL)insertOrUpdateSessionWithMultiTalkGroupData:(id)a0;
- (id)genContactItemWithGroupData:(id)a0;
- (id)genMessageItemWithGroupData:(id)a0;
- (id)genSessionItemWithGroupData:(id)a0;
- (void)fillContactItemUpdatePropertiesForContactObject:(void *)a0;
- (void)fillMessageItemUpdatePropertiesForMessageObject:(void *)a0;
- (void)fillSessionItemUpdatePropertiesForSessionObject:(void *)a0;
- (void)fillBannerItemUpdatePropertiesForBannerObject:(void *)a0;
- (BOOL)insertNewRowInContactTable:(id)a0;
- (BOOL)insertOrUpdateRowInContactTable:(id)a0;
- (BOOL)insertNewRowInMessageTable:(id)a0;
- (BOOL)insertOrUpdateRowInMessageTable:(id)a0;
- (BOOL)insertNewRowInSessionTable:(id)a0;
- (BOOL)insertOrUpdateRowInSessionTable:(id)a0;
- (BOOL)insertNewRowInBannerTable:(id)a0;
- (BOOL)insertOrUpdateRowInBannerTable:(id)a0;
- (unsigned int)getSessionLastMessageIDWithGroupData:(id)a0;
- (void)ChangeSessionUnReadCount:(id)a0 to:(unsigned int)a1;
- (BOOL)isGroupDataValid:(id)a0;
- (BOOL)addNewMultiTalkChatroomMessageWithGroupData:(id)a0 sessionItem:(id)a1 msgLocalID:(unsigned int)a2 isSelfCaller:(BOOL)a3 sessionState:(unsigned int)a4 inviteUsername:(id)a5;
- (id)genMsgJsonContentWithDisplayContentHeader:(id)a0 subContent:(id)a1 sessionItem:(id)a2 msgLocalID:(unsigned int)a3;
- (id)getHeaderMessageContentWithSessionState:(unsigned int)a0 inviteUserNickName:(id)a1;
- (id)getSubMessageContentWithSessionState:(unsigned int)a0 inviteUserNickName:(id)a1;
- (void).cxx_destruct;

@end
