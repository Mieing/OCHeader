@class NSString, MMSessionInfo, NSMutableSet, NSMutableArray;

@interface ChatBoxMgr : MMUserService <IGroupMgrExt, IMMNewSessionMgrExt, IContactMgrExt, IMainSessionMgrExt, IMsgExt, INewSyncExt, MMServiceProtocol>

@property (nonatomic) BOOL isChatBoxEnable;
@property (retain, nonatomic) NSMutableSet *chatboxSessionUsernames;
@property (retain, nonatomic) NSMutableSet *addChatboxPendding;
@property (retain, nonatomic) NSMutableArray *chatBoxSessions;
@property (retain, nonatomic) MMSessionInfo *chatBoxSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getChatBoxSession;
- (long long)chatBoxSessionCount;
- (id)getSessionAtIndex:(long long)a0;
- (long long)indexOfSessionUsername:(id)a0;
- (void)removeSessionWithUsername:(id)a0;
- (void)updateChatBoxSessionUnread:(BOOL)a0;
- (void)setChatBoxUnreadLocal:(BOOL)a0;
- (id)sessionEnumerator;
- (void)deleteAllChatBoxSessions;
- (BOOL)isContactInChatBox:(id)a0;
- (void)onChangeChatRoomBox:(id)a0 inChatBox:(BOOL)a1;
- (void)onModifyContact:(id)a0;
- (void)onHideSessionWithUserName:(id)a0;
- (void)onDeleteSession:(unsigned int)a0 withUser:(id)a1;
- (void)onSessionUnreadCountChanged:(id)a0 prevUnreadCount:(long long)a1;
- (void)onNewSyncClearUnread:(id)a0;
- (void)OnAddMsgListForSession:(id)a0 NotifyUsrName:(id)a1;
- (void)OnModMsg:(id)a0 MsgWrap:(id)a1;
- (void)onMainFrameBeginReload;
- (void)onMainFrameHandleSession:(id)a0;
- (void)onMainFrameEndReload;
- (void)updateSession:(id)a0 isInChatBox:(BOOL)a1 createIfNotExist:(BOOL)a2;
- (void)updateChatBoxSession;
- (void)updateChatBoxSessionWithSortTime:(unsigned int)a0;
- (id)generateSessionForUsername:(id)a0;
- (void)updateChatBoxSessionDesc;
- (unsigned int)genLastTimeForChatBoxSession;
- (id)lastMsgForChatBoxSession;
- (BOOL)shouldShowNotifyForMessage:(id)a0;
- (BOOL)isChatBoxSessionUnread;
- (void)handleUserDeleteOrHideSession:(id)a0;
- (void).cxx_destruct;

@end
