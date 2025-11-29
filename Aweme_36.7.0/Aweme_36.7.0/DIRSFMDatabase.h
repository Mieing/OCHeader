@class NSString, NSMutableDictionary, NSMutableSet, NSDateFormatter;

@interface DIRSFMDatabase : NSObject {
    void *_db;
    NSString *_databasePath;
    BOOL _shouldCacheStatements;
    BOOL _isExecutingStatement;
    BOOL _inTransaction;
    double _maxBusyRetryTimeInterval;
    double _startBusyRetryTime;
    NSMutableSet *_openResultSets;
    NSMutableSet *_openFunctions;
    NSDateFormatter *_dateFormat;
}

@property (retain) NSMutableDictionary *cachedStatements;

+ (id)databaseWithPath:(id)a0;
+ (id)storeableDateFormat:(id)a0;

- (id)executeQuery:(id)a0 withArgumentsInArray:(id)a1 orDictionary:(id)a2 orVAList:(char *)a3;
- (long long)lastInsertRowId;
- (id)databasePath;
- (BOOL)close;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)stringFromDate:(id)a0;
- (int)changes;
- (void)clearCachedStatements;
- (BOOL)beginTransaction;
- (BOOL)open;
- (id)lastError;
- (id)init;
- (id)lastErrorMessage;
- (BOOL)rollback;
- (int)lastErrorCode;
- (void *)sqliteHandle;
- (BOOL)commit;
- (id)dateFromString:(id)a0;
- (void)setCachedStatement:(id)a0 forQuery:(id)a1;
- (id)executeQuery:(id)a0;
- (BOOL)shouldCacheStatements;
- (void)setDateFormat:(id)a0;
- (BOOL)executeUpdate:(id)a0;
- (id)cachedStatementForQuery:(id)a0;
- (void)dealloc;
- (BOOL)beginDeferredTransaction;
- (const char *)sqlitePath;
- (BOOL)openWithFlags:(int)a0;
- (BOOL)openWithFlags:(int)a0 vfs:(id)a1;
- (void)setMaxBusyRetryTimeInterval:(double)a0;
- (double)maxBusyRetryTimeInterval;
- (int)busyRetryTimeout;
- (void)setBusyRetryTimeout:(int)a0;
- (BOOL)hasOpenResultSets;
- (void)closeOpenResultSets;
- (void)resultSetDidClose:(id)a0;
- (BOOL)hasDateFormatter;
- (BOOL)goodConnection;
- (void)warnInUse;
- (BOOL)databaseExists;
- (BOOL)hadError;
- (id)errorWithMessage:(id)a0;
- (void)bindObject:(id)a0 toColumn:(int)a1 inStatement:(struct sqlite3_stmt { } *)a2;
- (void)extractSQL:(id)a0 argumentsList:(char *)a1 intoString:(id)a2 arguments:(id)a3;
- (id)executeQuery:(id)a0 withParameterDictionary:(id)a1;
- (id)executeQueryWithFormat:(id)a0;
- (id)executeQuery:(id)a0 withArgumentsInArray:(id)a1;
- (id)executeQuery:(id)a0 values:(id)a1 error:(id *)a2;
- (id)executeQuery:(id)a0 withVAList:(char *)a1;
- (BOOL)executeUpdate:(id)a0 error:(id *)a1 withArgumentsInArray:(id)a2 orDictionary:(id)a3 orVAList:(char *)a4;
- (BOOL)executeUpdate:(id)a0 withArgumentsInArray:(id)a1;
- (BOOL)executeUpdate:(id)a0 values:(id)a1 error:(id *)a2;
- (BOOL)executeUpdate:(id)a0 withParameterDictionary:(id)a1;
- (BOOL)executeUpdate:(id)a0 withVAList:(char *)a1;
- (BOOL)executeUpdateWithFormat:(id)a0;
- (BOOL)executeStatements:(id)a0;
- (BOOL)executeStatements:(id)a0 withResultBlock:(id /* block */)a1;
- (BOOL)executeUpdate:(id)a0 withErrorAndBindings:(id *)a1;
- (BOOL)update:(id)a0 withErrorAndBindings:(id *)a1;
- (BOOL)inTransaction;
- (BOOL)startSavePointWithName:(id)a0 error:(id *)a1;
- (BOOL)releaseSavePointWithName:(id)a0 error:(id *)a1;
- (BOOL)rollbackToSavePointWithName:(id)a0 error:(id *)a1;
- (id)inSavePoint:(id /* block */)a0;
- (void)setShouldCacheStatements:(BOOL)a0;
- (void)makeFunctionNamed:(id)a0 maximumArguments:(int)a1 withBlock:(id /* block */)a2;

@end
