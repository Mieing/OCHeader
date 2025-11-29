@class NSString, NSMutableDictionary, MMBaseSessionStorage;

@interface WWKFSessionMgr : MMUserService <ISessionStorageDelegate, IMMNewSessionMgrExt, ISessionInfoExt, IMsgExt, IWWKFContactMgrExt, IOpenImResourceMgrExt, MMServiceProtocol, IMMNewSessionMgrFilterExt>

@property (retain, nonatomic) MMBaseSessionStorage *sessionStorage;
@property (retain, nonatomic) NSMutableDictionary *dicUserName2CellData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)setupData;
- (id)genMainFrameSessionInfo;
- (void)updateMainFrameSession;
- (void)deleteMainFrameSession;
- (id)getMainFrameSessionMessageUserName;
- (void)updateMainFrameSessionWithNotify:(BOOL)a0;
- (void)clearMainFrameSessionUnreadCount;
- (BOOL)updateSessionForUser:(id)a0;
- (void)OnAddMsgListForSession:(id)a0 NotifyUsrName:(id)a1;
- (void)OnDelMsg:(id)a0;
- (void)OnModMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnUnReadCountChange:(id)a0;
- (void)onDeleteSessionOfUser:(id)a0;
- (BOOL)isUserShouldHandled:(id)a0;
- (BOOL)isMessageShouldHandled:(id)a0;
- (id)isUserHasSpecalSessionInfo:(id)a0;
- (id)importSessionsForSessionType:(id)a0;
- (void)onGetDraft:(id)a0 contact:(id)a1;
- (void)onModifyDraft:(id)a0 contact:(id)a1 draftTime:(unsigned int)a2;
- (void)onWWKFContactUpdated:(id)a0;
- (void)onGetOpenImResourceDone:(id)a0;
- (unsigned int)sessionCount;
- (id)sessionInfoAtIndex:(long long)a0;
- (id)sessionInfoWithUsrName:(id)a0;
- (id)genSessionCellDataWithSessionInfo:(id)a0;
- (id)sessionCellDataAtIndex:(long long)a0;
- (void)deleteSessionAtIndex:(long long)a0;
- (void)deleteAllSessions;
- (void)deleteSessionMessage:(id)a0;
- (id)updateMainSessionUnreadInfo;
- (void)callExtOnSessionChange;
- (void)changeUnreadCount:(long long)a0 forUsername:(id)a1;
- (id)getAllSessions;
- (void)addOrUpdateSession:(id)a0;
- (void)addOrUpdateSessionList:(id)a0;
- (void)updateSessionAndNotifyUI:(id)a0;
- (void).cxx_destruct;

@end
