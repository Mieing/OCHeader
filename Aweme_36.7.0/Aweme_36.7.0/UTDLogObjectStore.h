@class NSLock, NSString;

@interface UTDLogObjectStore : NSObject {
    struct sqlite3 { } *_sqlite;
    BOOL _inTransaction;
    struct dispatch_semaphore_s { } *sem;
    NSLock *lock;
    NSString *_sqliteFilePath;
}

@property (nonatomic) long long expireTime;

+ (id)sharedUTDLogObjectStore;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)clearDB;
- (id)sqliteFilePath;
- (void)createDbAndTable;
- (void)clearExpireLog;
- (id)statement:(struct sqlite3_stmt { } *)a0 stringForColumnIndex:(int)a1;
- (id)statement:(struct sqlite3_stmt { } *)a0 dataForColumnIndex:(int)a1;
- (id)dbFileSizeDesc;
- (id)qureyLogsLimit:(long long)a0 eids:(id)a1;
- (void)deleteLogByIDs:(id)a0;
- (void)deleteAllLogs;
- (BOOL)insertLogs:(id)a0;
- (long long)queryRowCount;
- (void)closeDB;
- (void).cxx_destruct;
- (void)beginTransaction;
- (id)init;
- (void)rollback;
- (void)commit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct sqlite3 { } *)sqlite;
- (long long)fileSizeAtPath:(id)a0;

@end
