@class NSString, BDLRUDiskIOControl, BDImageWeakCache, NSOperationQueue, NSMutableDictionary, NSMutableSet, NSObject, NSFileManager;
@protocol OS_dispatch_queue;

@interface BDImageLruFileCache : NSObject <BDDiskCache> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _index_lock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _io_lock;
}

@property (copy, nonatomic) NSString *diskCachePath;
@property (retain, nonatomic) NSFileManager *fileManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;
@property (nonatomic) unsigned long long countLimit;
@property (nonatomic) unsigned long long sizeLimit;
@property (nonatomic) double trimmingRate;
@property (nonatomic) double fileSizeUpdatePeriod;
@property (nonatomic) unsigned long long ageLimit;
@property (retain, nonatomic) BDImageWeakCache *stagingArea;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) NSMutableSet *resourceIndexs;
@property (retain, nonatomic) NSMutableDictionary *expirationResources;
@property (retain, nonatomic) NSMutableDictionary *cacheResources;
@property double lastUpdateCacheSizeTime;
@property (retain, nonatomic) NSOperationQueue *trimQueue;
@property int trimTasks;
@property (nonatomic) unsigned long long dateType;
@property (retain, nonatomic) BDLRUDiskIOControl *diskControl;
@property (copy, nonatomic) id /* block */ trimBlock;
@property (readonly, nonatomic) BOOL trimDiskInBG;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllData;
- (void)setData:(id)a0 forKey:(id)a1 withBlock:(id /* block */)a2;
- (id)cachePathForKey:(id)a0;
- (void)removeDataForKey:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)containsDataForKey:(id)a0;
- (void)removeAllDataWithBlock:(id /* block */)a0;
- (BOOL)containsDataForPath:(id)a0;
- (BOOL)enableUpdateAccessDate;
- (void)updateStagingAreaAccessDateForKey:(id)a0;
- (void)maybeTrimFiles;
- (void)removeDataForPath:(id)a0;
- (void)removeAllDataForCache;
- (void)updateFileCacheSizeAndIndex;
- (id)lruCacheContentDateKey;
- (id)lruCacheUrlResourceKeysWithContentDateKey:(id)a0;
- (void)updateDiskAccessDate:(id)a0 forFilePath:(id)a1;
- (void)updateCacheResourcesAccessDate:(id)a0 forFilePath:(id)a1;
- (BOOL)maybeUpdateFileCacheSize;
- (void)trimFilesReal;
- (void)containsDataForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)dataForKey:(id)a0 withBlock:(id /* block */)a1;
- (id)dataForKey:(id)a0;
- (void)setConfig:(id)a0;
- (void)setData:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)totalCount;
- (id)initWithCachePath:(id)a0;
- (void)removeDataForKey:(id)a0;
- (void)writeData:(id)a0 toPath:(id)a1;
- (unsigned long long)totalSize;
- (void)removeExpiredData;
- (id)readDataFromPath:(id)a0;

@end
