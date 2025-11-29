@class SessionStorageSetting, NSString, WCTDatabase, WCTTable, NSMutableArray, NSMutableSet;
@protocol ISessionStorageDelegate;

@interface MMBaseSessionStorage : NSObject {
    WCTDatabase *m_db;
    WCTTable *m_table;
    Class m_sessionClass;
    NSString *m_sessionType;
    NSMutableArray *m_sessionObjectList;
    NSMutableSet *m_tempSessionObjects;
    SessionStorageSetting *m_setting;
}

@property (weak, nonatomic) id<ISessionStorageDelegate> delegate;
@property (readonly, nonatomic) NSString *sessionType;

+ (void)processVersionUpdate;

- (id)initWithSessionType:(id)a0 withClass:(Class)a1;
- (void)dealloc;
- (long long)sessionCount;
- (id)sessionAtIndex:(long long)a0;
- (id)sessionWithSessionId:(id)a0;
- (id)allSessions;
- (BOOL)addOrUpdateSession:(id)a0;
- (BOOL)addOrUpdateSessionList:(id)a0;
- (BOOL)addOrUpdateTempSession:(id)a0;
- (BOOL)isTempSession:(id)a0;
- (BOOL)isTempSessionWithSessionId:(id)a0;
- (BOOL)clearAllTempSessions;
- (BOOL)deleteSessionAtIndex:(long long)a0;
- (BOOL)deleteSessionWithSessionId:(id)a0;
- (BOOL)deleteAllSessions;
- (void)clearSessionCache;
- (void)clearSessionCacheAndReimportSession;
- (BOOL)deleteSessionCacheAndDB;
- (BOOL)copySessionCacheToSessionType:(id)a0;
- (id)sessionDirectoryPath;
- (void)updateSessionSetting;
- (BOOL)checkSessionVersion;
- (void)checkLoadData;
- (void)initDB;
- (void)resortSessions;
- (void).cxx_destruct;

@end
