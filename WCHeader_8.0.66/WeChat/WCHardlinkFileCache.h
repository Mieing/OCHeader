@class MemoryMappedKV;

@interface WCHardlinkFileCache : NSObject

@property (retain, nonatomic) MemoryMappedKV *mmkv;
@property (nonatomic) unsigned int cacheVersion;

+ (unsigned int)currentCacheVersion;

- (id)init;
- (void)setFileCache:(id)a0 withKey:(id)a1;
- (id)getFileCacheWithKey:(id)a0;
- (void)clearAll;
- (void).cxx_destruct;

@end
