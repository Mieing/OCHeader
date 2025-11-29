@class NSString, NSMutableDictionary, AWESafeMemoryMap, NSObject;
@protocol AWEStorageDelegate, OS_dispatch_semaphore;

@interface AWECacheOptimizedUnifyStorage : NSObject {
    struct sqlite3 { } *database;
    struct sqlite3_stmt { } *getStatement;
    struct sqlite3_stmt { } *setStatement;
    struct sqlite3_stmt { } *deleteStatement;
    id /* block */ checkpointBlock;
    BOOL hasWalHook;
    struct SpinLock { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mutex_; } _spinLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    BOOL checkMemoryCost;
    int autoVacuumMode;
    int vacuumMaxPage;
    BOOL vacuumOnce;
    BOOL vacuumDisabled;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) AWESafeMemoryMap *tempMap;
@property (weak, nonatomic) id<AWEStorageDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *storageInfo;
@property (nonatomic) BOOL enableStorageInfo;

+ (void)deleteDB:(id)a0 err:(id *)a1;

- (void)onEnterBackground;
- (BOOL)createDatabaseWithRetryTimes:(unsigned long long)a0;
- (void)setWalHook;
- (void)checkpointIfNeeded:(struct sqlite3 { } *)a0 pages:(int)a1;
- (void)removeAllObjectsWithError:(id *)a0;
- (void)ensureDatabase;
- (void)cleanDatabaseWithLock:(BOOL)a0;
- (int)incrementalVacuum;
- (int)manualVacuum;
- (int)restoreVacuumMode;
- (int)querySQL:(const char *)a0 toIntValue:(int *)a1;
- (void)setObject:(id)a0 forKey:(id)a1 domain:(id)a2 needCache:(BOOL)a3 encodedData:(id)a4 type:(long long)a5 err:(id *)a6;
- (void)removeAllObjectsWithoutLockWithError:(id *)a0;
- (id)objectForKey:(id)a0 domain:(id)a1 needCache:(BOOL)a2 error:(id *)a3 preload:(BOOL)a4;
- (void)setObject:(id)a0 forKey:(id)a1 domain:(id)a2 needCache:(BOOL)a3 err:(id *)a4;
- (void)removeObjectsInDomain:(id)a0 err:(id *)a1;
- (void)unlock;
- (void)vacuum;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (void)lock;
- (id).cxx_construct;
- (void)dealloc;
- (void)cleanDatabase;

@end
