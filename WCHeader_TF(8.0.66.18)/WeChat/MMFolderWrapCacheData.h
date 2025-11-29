@class NSString, NSRecursiveLock;

@interface MMFolderWrapCacheData : NSObject <PBCoding>

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSString *cacheID;
@property (nonatomic) unsigned int totalProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_cacheID;
+ (void)PBArrayAdd_totalProgress;
+ (void)initialize;
+ (id)loadFolderWrapCache;
+ (id)getShortPathFromFullPath:(id)a0;
+ (id)getMd5KeyFromFullPath:(id)a0;

- (id)getPBPropertyTable;
- (id)init;
- (void)saveFolderWrapCache;
- (id)getWrapCacheByFullPath:(id)a0;
- (void)setWrapCache:(id)a0 withFullPath:(id)a1;
- (void)deleteCacheByFullPath:(id)a0;
- (id)getWrapCacheKeys;
- (id)getWrapCacheByKey:(id)a0;
- (void).cxx_destruct;

@end
