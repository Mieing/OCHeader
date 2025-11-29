@class AWEDataLayerDatabaseQueue, NSString, NSObject, AWEDataLayerBaseDatabaseConfig;
@protocol OS_dispatch_semaphore;

@interface AWEDataLayerBaseDatabase : NSObject {
    AWEDataLayerDatabaseQueue *_queue;
    const char *_createTableSql;
    NSObject<OS_dispatch_semaphore> *_dbLock;
    struct sqlite3 { } *_database;
    id /* block */ _checkpointBlock;
    BOOL _hasWalHook;
}

@property (retain, nonatomic) AWEDataLayerBaseDatabaseConfig *config;
@property (copy, nonatomic) NSString *dbPathWithoutExtension;

+ (id)getDatabaseWithDirectory:(id)a0 dbName:(id)a1 createTableSql:(const char *)a2 configBlock:(id /* block */)a3;

- (BOOL)createDatabaseWithRetryTimes:(unsigned long long)a0;
- (void)deleteDatabaseWithError:(id *)a0;
- (void)handleDatabaseErrorWithCode:(long long)a0 message:(id)a1;
- (void)setWalHook;
- (void)databaseWillClose;
- (void)handleSqlPrepareErrorWithCode:(int)a0 sql:(const char *)a1;
- (void)handleSqlStepErrorWithCode:(int)a0 sql:(const char *)a1;
- (void)handleSqlResetErrorWithCode:(int)a0 sql:(const char *)a1;
- (void)removeAllObjectsWithoutLock;
- (void)handleSqlErrorWithFunction:(const char *)a0 code:(int)a1 sql:(const char *)a2;
- (void)checkpointIfNeeded:(struct sqlite3 { } *)a0 pages:(int)a1;
- (void)safeExecuteSql:(const char *)a0 cachedStatement:(id /* block */)a1 bindStatement:(id /* block */)a2 customStepStatement:(id /* block */)a3;
- (void).cxx_destruct;
- (void)createDatabaseIfNeeded;
- (void)removeAllObjects;
- (void)handleDatabaseError:(id)a0;
- (void)cleanDatabase;

@end
