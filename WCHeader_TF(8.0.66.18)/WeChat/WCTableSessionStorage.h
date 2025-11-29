@class NSString, TableSessionStorageSetting, WCTDatabase, WCTTable, NSMutableArray, NSMutableSet;
@protocol ITableSessionStorageDelegate;

@interface WCTableSessionStorage : NSObject {
    WCTDatabase *m_db;
    WCTTable *m_table;
    Class m_sessionClass;
    NSString *m_sessionType;
    NSMutableArray *m_sessionObjectList;
    NSMutableSet *m_tempSessionObjects;
    TableSessionStorageSetting *m_setting;
}

@property (retain, nonatomic) NSString *sessionTableName;
@property (retain, nonatomic) WCTDatabase *customDataBase;
@property (weak, nonatomic) id<ITableSessionStorageDelegate> delegate;
@property (readonly, nonatomic) NSString *sessionType;
@property (copy, nonatomic) NSString *identityID;

+ (id)dataBaseWithSessionType:(id)a0;
+ (void)processVersionUpdate;

- (id)initWithSessionType:(id)a0 withClass:(Class)a1;
- (id)initWithSessionType:(id)a0 targetDB:(id)a1 customTableName:(id)a2 withClass:(Class)a3;
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
- (BOOL)isDefaultSessionTable;
- (id)_settingPath;
- (void)initDB;
- (void)resortSessions;
- (BOOL)renameDefaultTableNameTo:(id)a0;
- (void).cxx_destruct;

@end
