@class NSObject, NSString, CSJAdFileCacheConfig;
@protocol OS_dispatch_queue;

@interface CSJAdFileCache : NSObject

@property (retain, nonatomic) CSJAdFileCacheConfig *cacheConfig;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;
@property (copy, nonatomic) NSString *currentCacheParentDir;

+ (id)parentDirectoryName;
+ (void)setupParentDirectoryName:(id)a0;

- (void)clearAllCache;
- (id)_prx_currentCacheParentDir;
- (void)_prx_updateModifyDateWithKey:(id)a0;
- (void)_prx_LRU_clear;
- (id)_prx_arraySortedByModifyDateASC;
- (void)_prx_LRU_clear_useFileCount;
- (void)_prx_LRU_clear_useSize;
- (id)_prx_cacheParentDir;
- (void)_prx_createIfNeedWithDirectoryFullPath:(id)a0;
- (id)initWithCacheConfig:(id)a0;
- (void)setData:(id)a0 withKey:(id)a1;
- (void)existWithKey:(id)a0 completionBlock:(id /* block */)a1;
- (void)dataWithKey:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_logWithFormat:(id)a0;

@end
