@class NSRecursiveLock, NSString, WCTDatabase, WCTTable, OrderedDictionary;

@interface WCTableLiveSessionStorage : NSObject {
    WCTDatabase *m_db;
    WCTTable *m_table;
    Class m_sessionClass;
    NSString *m_sessionType;
    OrderedDictionary *m_sessionObjectOrderDict;
}

@property (retain, nonatomic) NSString *sessionTableName;
@property (retain, nonatomic) WCTDatabase *customDataBase;
@property (retain, nonatomic) NSRecursiveLock *sessionCacheLock;
@property (readonly, nonatomic) NSString *sessionType;
@property (copy, nonatomic) NSString *identityID;

+ (id)dataBaseWithSessionType:(id)a0;

- (id)initWithSessionType:(id)a0 withClass:(Class)a1;
- (id)initWithSessionType:(id)a0 targetDB:(id)a1 customTableName:(id)a2 withClass:(Class)a3;
- (void)dealloc;
- (long long)sessionCount;
- (id)sessionAtIndex:(long long)a0;
- (id)sessionWithSessionId:(id)a0;
- (id)allSessions;
- (BOOL)addOrUpdateSession:(id)a0;
- (BOOL)addOrUpdateSessionList:(id)a0;
- (BOOL)deleteSessionAtIndex:(long long)a0;
- (BOOL)deleteSessionWithSessionId:(id)a0;
- (BOOL)deleteAllSessions;
- (void)clearSessionCache;
- (BOOL)deleteSessionCacheAndDB;
- (id)sessionDirectoryPath;
- (void)checkLoadData;
- (BOOL)isDefaultSessionTable;
- (void)initDB;
- (void)resortSessions;
- (id)getSessionId:(id)a0;
- (void).cxx_destruct;

@end
