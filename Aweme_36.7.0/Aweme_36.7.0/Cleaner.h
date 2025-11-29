@class NSString, Detecter, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface Cleaner : NSObject {
    struct sqlite3 { } *sqlite;
}

@property (retain) Detecter *detecter;
@property (copy) NSString *DBPath;
@property (retain) NSMutableArray *keyList;
@property BOOL isStop;
@property (retain) NSObject<OS_dispatch_semaphore> *wait_clean_sem;

- (void)stopClean;
- (void)startClean;
- (void)tryLoadKeyFromDB;
- (void)cleanCompleted;
- (BOOL)openDataBase;
- (void).cxx_destruct;
- (id)initWithDatabasePath:(id)a0;
- (void)stop;
- (void)dealloc;
- (void)startSync;

@end
