@class NSString, NSMutableDictionary, MMEnterpriseMainUsrData, MMBaseSessionStorage;

@interface MMEnterpriseSubSessionCacher : NSObject <ISessionStorageDelegate> {
    MMEnterpriseMainUsrData *_mainUsrData;
    NSString *_sessionType;
    MMBaseSessionStorage *_sessionStorage;
    NSMutableDictionary *_dictUsrname2CellData;
    BOOL _showRedDot;
}

@property (readonly, nonatomic) NSString *mainUsrName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)compareEnterpriseSubSession:(id)a0 right:(id)a1;

- (id)initWithMainUsrName:(id)a0;
- (id)getMainUsrDataPath;
- (void)loadMainUsrData;
- (void)saveMainUsrData;
- (void)deleteMainUsrData;
- (void)clearMainUsrUnreadCount;
- (unsigned int)getMainUsrUnreadCount;
- (unsigned int)getNewArrivalCountWithSubSessionUsrName:(id)a0;
- (void)setNewArrivalCount:(unsigned int)a0 withSubSessionUsrName:(id)a1;
- (void)deleteNewArrivalCountWithSubSessionUsrName:(id)a0;
- (void)clearNewArrivalCountWithSubSessionUsrName:(id)a0;
- (BOOL)hasNewArrivalCountWithSubSessionUsrName:(id)a0;
- (void)setMainUsrShowRedDot;
- (BOOL)getMainUsrShowRedDot;
- (void)clearMainUsrRedDot;
- (unsigned int)sessionCount;
- (id)sessionInfoAtIndex:(long long)a0;
- (id)sessionInfoWithUsrName:(id)a0;
- (id)sessionCellDataAtIndex:(long long)a0;
- (id)sessionInfoList;
- (void)addOrUpdateSessionInfo:(id)a0;
- (void)addOrUpdateSessionList:(id)a0;
- (void)deleteSessionAtIndex:(long long)a0;
- (void)deleteSessionWithUsrName:(id)a0;
- (void)deleteAllSessions;
- (void)clearSessionCache;
- (id)importSessions;
- (long long)compareSession:(id)a0 rightSession:(id)a1;
- (void)deleteOldVersionSessionCache;
- (id)getPathForOldSessionCache;
- (void)performCleanUpNoMsgSessions:(id)a0;
- (void)checkSessionInfo:(id)a0;
- (void).cxx_destruct;

@end
