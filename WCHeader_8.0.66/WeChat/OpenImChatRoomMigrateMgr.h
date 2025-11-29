@class NSRecursiveLock, NSString, OpenImChatRoomMigrateDataPB, NSOperationQueue, NSMutableDictionary, ContactsDataLogic;

@interface OpenImChatRoomMigrateMgr : MMObject <ContactsDataLogicDelegate> {
    OpenImChatRoomMigrateDataPB *m_openImChatRoomMigrateData;
    NSOperationQueue *m_queue;
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_dicMigrateOpenImChatRoom;
    NSMutableDictionary *m_dicOpenImMigrateOpenImChatRoom;
    ContactsDataLogic *m_contactsDataLogic;
    BOOL m_bIsOpenImMigrateOpenImChatRoomWorking;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportOpenImChatRoomMigrateWithOpenIMChatRoomUserName:(id)a0 andAssociateChatRoomUserName:(id)a1 andOpenImChatRoomMigrateAction:(unsigned int)a2;

- (id)init;
- (void)initData;
- (BOOL)isNeedStopChatRoomMigrateWithOpenIMChatRoomUserName:(id)a0;
- (void)addOpenImChatRoomMigrateWithOpenIMChatRoomUserName:(id)a0 andAssociateChatRoomUserName:(id)a1;
- (void)doOpenImChatRoomMigrateWithOpenIMChatRoomUserName:(id)a0 andAssociateChatRoomUserName:(id)a1;
- (void)DeleteSessionWithUserName:(id)a0;
- (void)startUpAllOpenImChatRoomMigrate;
- (void)checkChatRoomExitSessionOpenImChatRoomMigrateAssociateChatRoom:(id)a0;
- (void)removeActiveUserWaitForOpenImMigrateWithUsrName:(id)a0;
- (void)checkEnterOpenChatRoomNeedSendInsertWarningSystemMessage:(id)a0;
- (void)sendOpenImChatRoomMigrateInsertWarningSystemMessageWithGroupUserName:(id)a0 andMessageContent:(id)a1;
- (void)startUpGetAllNeedOpenImChatRoomMigrateAssociateChatRoom;
- (void)addHadGetContactDetialMigrateAssociateChatRoom:(id)a0;
- (void)checkGetNeedOpenImChatRoomMigrateAssociateChatRoom:(id)a0;
- (BOOL)isOpenImMigrateOpenImChatRoomWorking;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)a0;
- (void)reportOpenImChatRoomMigrateClickSameNameChatRoomWithOpenIMChatRoomUserName:(id)a0 andAssociateChatRoomUserName:(id)a1;
- (id)p_getOpenImChatRoomMigrateDataFilePath;
- (void)p_saveOpenImChatRoomMigrateToDataFileInternal;
- (void)p_loadOpenImChatRoomMigrateInternal;
- (void).cxx_destruct;

@end
