@class NSMutableDictionary, W1wPersonalMsgSessionStorage, WCTDatabase, W1wUserContact, NSString, NSMutableSet;

@interface W1wPersonalMsgSessionMgr : MMUserService <IMsgExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *sessionStorages;
@property (retain, nonatomic) WCTDatabase *sessionDB;
@property (retain, nonatomic) W1wUserContact *currentUserContact;
@property (retain, nonatomic) W1wUserContact *currentListUserContact;
@property (retain, nonatomic) W1wPersonalMsgSessionStorage *currentSessionStorage;
@property (nonatomic) BOOL currentMsgNotifyEnable;
@property (retain, nonatomic) NSString *minVersion;
@property (retain, nonatomic) NSMutableSet *reportNowUsername;
@property (retain, nonatomic) NSMutableDictionary *reddotIdMap;
@property (retain, nonatomic) NSMutableDictionary *countMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)changeReddotWithUsername:(id)a0 count:(unsigned long long)a1;
- (void)sendReddotEventWithUsername:(id)a0 count:(unsigned long long)a1;
- (id)sessionStorageForUsername:(id)a0;
- (void)syncUnreadReddot;
- (void)adjustMsgContentLogic:(id)a0 withToUserName:(id)a1;
- (void)changeCurrentUserWithContact:(id)a0;
- (void)changeCurrentListUserWithContact:(id)a0;
- (id)sessionControllerForCurrentUserContact;
- (void)chatLogicControllerForSessionInfo:(id)a0 completion:(id /* block */)a1;
- (void)personalMsgContentControllerWithToUserContact:(id)a0 sessionId:(id)a1 completion:(id /* block */)a2 isChangeContact:(BOOL)a3;
- (void)addOrUpdateSessionForSessionID:(id)a0 message:(id)a1 username:(id)a2;
- (void)deleteSessionInfo:(id)a0;
- (void)refreshFromServerForSessionInfo:(id)a0 completion:(id /* block */)a1;
- (id)getMinVersion;
- (void)handleUpdateSessionInfo:(id)a0;
- (BOOL)isValidSessionId:(id)a0;
- (void)OnDelMsg:(id)a0;
- (void)OnAddMsgListForSession:(id)a0 NotifyUsrName:(id)a1;
- (void)OnModMsg:(id)a0 MsgWrap:(id)a1;
- (void)clearUnreadCountForSessionInfo:(id)a0;
- (void).cxx_destruct;

@end
