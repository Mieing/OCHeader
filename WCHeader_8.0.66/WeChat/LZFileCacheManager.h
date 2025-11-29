@class NSString, NSMutableDictionary, lzCacheCleanManager, NSObject;
@protocol OS_dispatch_queue;

@interface LZFileCacheManager : NSObject {
    NSMutableDictionary *_fileCacheMgrDic;
    NSObject<OS_dispatch_queue> *_fileOptQueue;
    void *_lzCacheMgrQueueKey;
}

@property (readonly, nonatomic) lzCacheCleanManager *cleanMgr;
@property (retain, nonatomic) NSString *cachePath;
@property (copy) id /* block */ normalFilterBlock;

+ (void)initialize;
+ (void)validCachePath:(id)a0 obj:(id)a1;

- (id)init;
- (id)initWithQueueName:(const char *)a0;
- (void)dealloc;
- (void)cleanCacheDir:(id /* block */)a0;
- (id)acquireFileCacheMgr:(id)a0 type:(unsigned long long)a1;
- (id)acquireFileCacheMgr:(id)a0 type:(unsigned long long)a1 bLargeFile:(BOOL)a2;
- (void)releaseFileCacheMgr:(id)a0 forceClean:(BOOL)a1;
- (id)buildFileSavePath:(id)a0 fileVid:(id)a1 fileExt:(id)a2;
- (BOOL)cacheLocalFile:(id)a0 fileVid:(id)a1 fileExt:(id)a2 removeSrc:(BOOL)a3;
- (BOOL)isFileAlreadyCached:(id)a0;
- (BOOL)isFileCaching:(id)a0;
- (id)fileNameForItem:(id)a0 fileExt:(id)a1;
- (BOOL)createDirectoryIfNeed:(id)a0;
- (void)cleanFileCaching:(id)a0;
- (void).cxx_destruct;

@end
