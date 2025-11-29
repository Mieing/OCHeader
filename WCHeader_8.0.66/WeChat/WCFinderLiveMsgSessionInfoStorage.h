@class NSString, WCTableLiveSessionStorage;

@interface WCFinderLiveMsgSessionInfoStorage : NSObject

@property (retain, nonatomic) NSString *logName;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) WCTableLiveSessionStorage *sessionStorage;
@property (readonly, nonatomic) unsigned long long sessionCount;

- (id)initWithSessionType:(id)a0 logName:(id)a1;
- (id)initWithSessionType:(id)a0 finderUsername:(id)a1 targetDB:(id)a2 logName:(id)a3;
- (id)finderTableName:(id)a0;
- (id)finderDataWithName:(id)a0;
- (void)addOrUpdateSessionWithSessionId:(id)a0 wrapMsg:(id)a1 result:(id)a2 updateBlock:(id /* block */)a3;
- (BOOL)addOrUpdateSessionWithSessionId:(id)a0 sessionInfo:(id)a1;
- (BOOL)deleteSessionWithSessionId:(id)a0;
- (id)findSessionWithSessionId:(id)a0;
- (void)findSessionWithSessionId:(id)a0 result:(id)a1;
- (id)sessionInfoWithSessionId:(id)a0;
- (id)findSessionWithLiveId:(unsigned long long)a0 liveIdentity:(unsigned int)a1 selfUserName:(id)a2;
- (id)unreadCountNumber;
- (id)clearUnreadCountWithSessionId:(id)a0;
- (BOOL)updateLastMsgWithSessionId:(id)a0 lastMsg:(id)a1;
- (void)removeAllSessionInStorage:(id)a0;
- (void).cxx_destruct;

@end
