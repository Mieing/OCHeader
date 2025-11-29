@class NSString, NSMutableDictionary, MMBaseSessionStorage;

@interface WASessionMgr : MMUserService <ISessionStorageDelegate, IMMNewSessionMgrExt, ISessionInfoExt, IMsgExt, WAContactMgrExtension, MMServiceProtocol, IMMNewSessionMgrFilterExt> {
    MMBaseSessionStorage *_sessionStorage;
    NSMutableDictionary *_dicUserName2CellData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)setupData;
- (unsigned int)sessionCount;
- (id)sessionInfoAtIndex:(long long)a0;
- (id)sessionInfoWithUsrName:(id)a0;
- (void)deleteSessionAtIndex:(long long)a0;
- (id)sessionCellDataAtIndex:(long long)a0;
- (void)updateMainFrameSession;
- (void)clearMainFrameSessionUnreadCount;
- (id)getAllSessions;
- (void)addOrUpdateSession:(id)a0;
- (void)addOrUpdateSessionList:(id)a0;
- (void)removeCellDataCacheWithUserNameList:(id)a0;
- (unsigned int)updateSessionForUser:(id)a0;
- (void)updateSessionForContactListChanged:(id)a0;
- (void)updateSessionAndNotifyUI:(id)a0;
- (void)deleteAllSessions;
- (void)deleteSessionMessage:(id)a0;
- (void)callExtOnSessionChange;
- (unsigned int)totalUnreadCount;
- (id)dictionaryOfFromBusiness2SubUserNameSet;
- (BOOL)isUserShouldHandled:(id)a0;
- (BOOL)isMessageShouldHandled:(id)a0;
- (id)isUserHasSpecalSessionInfo:(id)a0;
- (void)onDeleteSessionOfUser:(id)a0;
- (id)genMainFrameSessionInfo;
- (id)getMainFrameSessionMessageUserName;
- (void)updateMainFrameSessionWithNotify:(BOOL)a0;
- (void)deleteMainFrameSession;
- (void)onGetDraft:(id)a0 contact:(id)a1;
- (void)onModifyDraft:(id)a0 contact:(id)a1 draftTime:(unsigned int)a2;
- (id)importSessions;
- (long long)compareSession:(id)a0 rightSession:(id)a1;
- (void)OnAddMsgListForSession:(id)a0 NotifyUsrName:(id)a1;
- (void)OnDelMsg:(id)a0;
- (void)OnModMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnUnReadCountChange:(id)a0;
- (void)onModifyWeAppContactList:(id)a0;
- (void)onDeleteWeAppContact:(id)a0;
- (void).cxx_destruct;

@end
