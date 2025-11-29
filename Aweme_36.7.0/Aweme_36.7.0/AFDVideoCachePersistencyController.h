@class NSString, NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface AFDVideoCachePersistencyController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *directory;
@property (readonly, nonatomic) NSString *directoryBeforeMigration;
@property BOOL isPersistingNewCache;
@property (readonly, nonatomic) NSTimer *trimingTimer;
@property (readonly, copy, nonatomic) NSString *domain;
@property long long maximumCacheCount;
@property BOOL isResponsibleForMigration;

- (void)handleApplicationDidEnterBackgroundNotification:(id)a0;
- (void)persistVideoCacheWithURLKey:(id)a0;
- (void)persistVideoCacheWithURLKey:(id)a0 renewIfExists:(BOOL)a1;
- (BOOL)cacheExistenceAssertionEnabled;
- (void)clearCachesBeforeMigration;
- (void)trackWithCacheCount:(long long)a0 freeDiskSpace:(long long)a1;
- (id)sortedFilePathsFromDirectoryContents:(id)a0;
- (void)logCacheSizes;
- (void)timerFired:(id)a0;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;
- (void)trim;

@end
