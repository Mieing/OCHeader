@class WCFinderMsgSessionInfo, NSString, WCTableSessionStorage, NSMutableOrderedSet, WCFinderMsgSessionOwnerInfo, NSMutableSet;

@interface WCFinderMsgSessionInfoStorage : NSObject

@property (retain, nonatomic) NSString *logName;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) WCTableSessionStorage *sessionStorage;
@property (retain, nonatomic) WCTableSessionStorage *greetMsgSessionStorage;
@property (retain, nonatomic) WCFinderMsgSessionInfo *greetMsgSessionInfo;
@property (nonatomic) BOOL needUpdateGreetMsgSession;
@property (readonly, nonatomic) NSMutableOrderedSet *newArrivalMsgSessionList;
@property (retain, nonatomic) WCFinderMsgSessionOwnerInfo *ownerInfo;
@property (retain, nonatomic) NSMutableSet *validMyAccountUsernames;
@property (readonly, nonatomic) NSString *owner;
@property (nonatomic) BOOL acceptAllMyAccountUsername;
@property (nonatomic) BOOL showingGreetMsgSessionList;
@property (readonly, nonatomic) unsigned long long sessionCount;

- (id)initWithNormalSessionType:(id)a0 logName:(id)a1 baseStorageDelagate:(id)a2;
- (id)initWithNormalSessionType:(id)a0 finderUsername:(id)a1 targetDB:(id)a2 logName:(id)a3 baseStorageDelagate:(id)a4;
- (id)finderTableName:(id)a0;
- (id)greetTableName:(id)a0;
- (id)finderDataWithName:(id)a0;
- (id)ownerInfoWithName:(id)a0;
- (void)addGreetMsgSessionWithSessionType:(id)a0 greetSessionId:(id)a1 targetDB:(id)a2 unreadStatus:(BOOL)a3 baseStorageDelagate:(id)a4;
- (void)addOrUpdateSessionWithSessionId:(id)a0 wrapMsg:(id)a1 result:(id)a2 updateBlock:(id /* block */)a3;
- (BOOL)deleteSessionWithSessionId:(id)a0;
- (id)findSessionWithSessionId:(id)a0;
- (void)findSessionWithSessionId:(id)a0 result:(id)a1;
- (id)sessionInfoWithSessionId:(id)a0;
- (id)unreadCountNumber;
- (BOOL)clearAllTempSessionsInGreetMsgSessionList;
- (id)clearUnreadCountWithSessionId:(id)a0;
- (BOOL)updateLastMsgWithSessionId:(id)a0 lastMsg:(id)a1;
- (BOOL)isGreetMsgSessionUnread;
- (BOOL)hasUnreadInGreetSessionList;
- (void)makeSureLoadGreetMsgSession;
- (BOOL)updateGreetMsgSessionUnreadStatus:(BOOL)a0;
- (BOOL)updateGreetMsgSessionUnreadStatusForClearUnread;
- (void)updateGreetMsgSessionInfo;
- (void)updateGreetMsgSessionWithSessionInfo:(id)a0;
- (id)pathOfNewArrivalMsgSessionListData;
- (id)_pathOfNewArrivalMsgSessionListDataWithDirectoryName:(id)a0;
- (void)saveNewArrivalMsgSessionList;
- (BOOL)hasNewArrivalMsgSessionList;
- (BOOL)clearAllNewArrivalMsgSessionList;
- (BOOL)updateNewArrivalMsgWithSessionIds:(id)a0;
- (BOOL)removeNewArrivalMsgSessionWithSessionId:(id)a0;
- (id)pathOfOwnerInfo;
- (id)_pathOfOwnerInfoWithDirectoryName:(id)a0;
- (void)saveOwnerInfo;
- (void)updateOwner:(id)a0 otherValidUsernames:(id)a1 defaultOwnerAccessBlock:(id /* block */)a2 hideSessionBlock:(id /* block */)a3 removeSessionBlock:(id /* block */)a4;
- (void)updateOtherValidUsernames:(id)a0;
- (BOOL)isValidMyAccountUsername:(id)a0;
- (void)clearDataForChangeOwner;
- (void)removeAllSessionInStorage:(id)a0;
- (BOOL)renameLocalSessionTableNameForMasterFinder:(id)a0;
- (void).cxx_destruct;

@end
