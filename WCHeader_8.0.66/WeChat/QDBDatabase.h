@class NSString, NSDateFormatter, NSMutableSet;

@interface QDBDatabase : NSObject {
    void *_db;
    BOOL _isExecutingStatement;
    BOOL _logsErrors;
    NSMutableSet *_openResultSets;
}

@property (copy, nonatomic) NSString *databasePath;
@property (retain, nonatomic) NSDateFormatter *dateFormat;

- (id)initWithPath:(id)a0;
- (void)dealloc;
- (const char *)sqlitePath;
- (void *)sqliteHandle;
- (BOOL)databaseExists;
- (BOOL)hasDateFormatter;
- (id)dateFromString:(id)a0;
- (id)stringFromDate:(id)a0;
- (void)warnInUse;
- (id)errorWithMessage:(id)a0;
- (int)lastErrorCode;
- (id)lastErrorMessage;
- (id)lastError;
- (BOOL)open;
- (BOOL)close;
- (void)resultSetDidClose:(id)a0;
- (void)closeOpenResultSets;
- (id)executeQuery:(id)a0;
- (id)executeQuery:(id)a0 valist:(char *)a1;
- (BOOL)executeUpdate:(id)a0;
- (BOOL)executeUpdate:(id)a0 error:(id *)a1 valist:(char *)a2;
- (void)bindObject:(id)a0 toColumn:(int)a1 inStatement:(struct sqlite3_stmt { } *)a2;
- (void)extractSQL:(id)a0 argumentsList:(char *)a1 intoString:(id)a2 arguments:(id)a3;
- (void).cxx_destruct;

@end
