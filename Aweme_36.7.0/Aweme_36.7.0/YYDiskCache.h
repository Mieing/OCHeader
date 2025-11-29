@class NSString, NSObject, YYKVStorage;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface YYDiskCache : NSObject {
    YYKVStorage *_kv;
    NSObject<OS_dispatch_semaphore> *_lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property double memoryWarningTime;
@property (copy) NSString *name;
@property (readonly) NSString *path;
@property (readonly) unsigned long long inlineThreshold;
@property (copy) id /* block */ customArchiveBlock;
@property (copy) id /* block */ customUnarchiveBlock;
@property (copy) id /* block */ customFileNameBlock;
@property unsigned long long countLimit;
@property unsigned long long costLimit;
@property unsigned long long walSizeLimit;
@property double ageLimit;
@property unsigned long long freeDiskSpaceLimit;
@property double autoTrimInterval;
@property BOOL errorLogsEnabled;

+ (void)setExtendedData:(id)a0 toObject:(id)a1;
+ (id)getExtendedDataFromObject:(id)a0;
+ (void)setYYCacheTrimEnableAfterMemoryWarning:(BOOL)a0 expirationSeconds:(long long)a1;

- (void)removeAllObjectsWithBlock:(id /* block */)a0;
- (void)setObject:(id)a0 forKey:(id)a1 withBlock:(id /* block */)a2;
- (void)removeObjectForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)objectForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)_trimInBackground;
- (void)_trimRecursively;
- (void)_trimToCost:(unsigned long long)a0;
- (void)_trimToCount:(unsigned long long)a0;
- (void)_trimToAge:(double)a0;
- (void)_trimToFreeDiskSpace:(unsigned long long)a0;
- (BOOL)hasMemoryWarning;
- (void)_trimWAL;
- (id)initWithPath:(id)a0 inlineThreshold:(unsigned long long)a1;
- (void)_appWillBeTerminated;
- (id)_filenameForKey:(id)a0;
- (void)trimToCount:(unsigned long long)a0;
- (void)trimToCost:(unsigned long long)a0;
- (void)trimToAge:(double)a0;
- (void)containsObjectForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)removeAllObjectsWithProgressBlock:(id /* block */)a0 endBlock:(id /* block */)a1;
- (void)totalCountWithBlock:(id /* block */)a0;
- (void)totalCostWithBlock:(id /* block */)a0;
- (void)trimToCount:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)trimToCost:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)trimToAge:(double)a0 withBlock:(id /* block */)a1;
- (void)removeObjectsForKeys:(id)a0;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)_handleMemoryWarning;
- (id)objectForKey:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (long long)totalCount;
- (BOOL)containsObjectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)_appDidEnterBackground;
- (unsigned long long)totalCost;

@end
