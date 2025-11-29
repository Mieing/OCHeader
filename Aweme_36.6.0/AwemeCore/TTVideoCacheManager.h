@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TTVideoCacheManager : NSObject {
    NSMutableDictionary *_keyCacheInfos;
    NSMutableArray *_cacheInfos;
    NSMutableDictionary *_protectedKeys;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) NSString *dir;
@property (nonatomic) unsigned long long maxSize;
@property (nonatomic) unsigned long long totalSize;
@property (readonly, nonatomic) unsigned long long videoCacheSize;

+ (id)cacheFilePath:(id)a0 dir:(id)a1;
+ (id)shared;

- (void)updateCacheInfo:(id)a0;
- (void)removeCacheInfoIfNeeds:(BOOL)a0;
- (void)loadCacheInfos;
- (void)removeCacheFiles:(id)a0;
- (id)getCacheInfo:(id)a0;
- (void)addCacheInfo:(id)a0 filePath:(id)a1;
- (void)setCacheParameter:(id)a0 maxSize:(unsigned long long)a1;
- (void)addProtectKey:(id)a0;
- (void)removeProtectKey:(id)a0;
- (BOOL)checkCacheFileComplete:(id)a0;
- (BOOL)checkCacheFileIntegrity:(id)a0 fileHash:(id)a1 fileSize:(unsigned long long)a2;
- (void)compact;
- (void).cxx_destruct;
- (id)init;
- (void)start;

@end
