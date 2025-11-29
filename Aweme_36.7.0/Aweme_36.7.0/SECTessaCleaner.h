@class NSString, NSMutableDictionary, YYDiskCache, NSDateFormatter, NSObject;
@protocol OS_dispatch_queue, SECTessaProviderDelegate;

@interface SECTessaCleaner : NSObject <SECTessaDiskStorage>

@property (retain, nonatomic) NSMutableDictionary *inMemoryAccessLogs;
@property (copy, nonatomic) NSString *repoName;
@property (retain, nonatomic) YYDiskCache *cache;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (nonatomic) BOOL isPersistenceAllowed;
@property (nonatomic) unsigned long long maxRepoSizeBytes;
@property (nonatomic) double targetRepoSizeRatio;
@property (weak, nonatomic) id<SECTessaProviderDelegate> tessaProviderDelegate;
@property (copy, nonatomic) NSString *lastPrunedDateStringForInMemoryLogs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logDirPathForName:(id)a0;

- (void)allowPersistenceNow;
- (void)pruneSpecificLogInMemory:(id)a0 forTessaId:(id)a1 withCurrentDate:(id)a2;
- (void)persistLogToDiskForTessaId:(id)a0 log:(id)a1;
- (id)loadLogFromDiskForTessaId:(id)a0;
- (id)cacheKeyForTessaLog:(id)a0;
- (void)pruneAllInMemoryLogsWithCurrentDate:(id)a0;
- (id)allAccessTessa;
- (id)findTessaToDeleteBasedOnLogs:(id)a0;
- (void)performCleanupIterationWithCurrentSize:(unsigned long long)a0 targetSizeAfterCleanup:(unsigned long long)a1 cleanupIterations:(int)a2;
- (id)initWithConfig:(id)a0 repoName:(id)a1 providerDelegate:(id)a2;
- (void)activePersistence;
- (void)accessTessa:(id)a0;
- (void)checkAndPerformCleanupIfNeeded;
- (id)diskStoragePath;
- (BOOL)diskStorageAvailable;
- (unsigned long long)diskStorageSize;
- (id)diskStorageEntries;
- (BOOL)available;
- (void).cxx_destruct;
- (void)reset;

@end
