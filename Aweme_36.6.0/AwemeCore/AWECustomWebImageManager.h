@class HMDThreadSafeArray, NSMutableDictionary;

@interface AWECustomWebImageManager : NSObject

@property (retain, nonatomic) HMDThreadSafeArray *cacheNames;
@property (retain, nonatomic) NSMutableDictionary *reuseCacheImageInfoDictionary;
@property (nonatomic) BOOL imageResourcePersistenceFlag;
@property (retain, nonatomic) NSMutableDictionary *memoryCacheSize;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;

+ (void)runOnceForLazyRegister;
+ (id)sharedInstance;

- (id)getCacheImageInfoWithIdentificationKey:(id)a0;
- (void)stagingImageInfo:(id)a0 cacheName:(id)a1 identificationKey:(id)a2;
- (id)getRegisteredCacheName:(id)a0;
- (void)registerCustomWebImage:(Class)a0;
- (void)removeCacheForName:(id)a0;
- (void)enableImageResourcePersistence:(BOOL)a0;
- (unsigned long long)getOriginalMemorySizeWithName:(id)a0;
- (void)setCache:(id)a0 originalMemorySize:(unsigned long long)a1;
- (void)removeCustomMemoryCache;
- (void)removeCustomDiskCache;
- (void)removeMemoryCacheForName:(id)a0;
- (void)getCustomBDWebImageManager:(id)a0 cacheName:(id)a1;
- (void)updateBDWebImageConfig:(id)a0 cacheName:(id)a1;
- (void)removeDiskCacheForName:(id)a0;
- (id)getRegisterBDImageCache:(id)a0;
- (BOOL)isRegisteredCacheName:(id)a0;
- (void)updateCustomWebImageConfig:(id)a0 cacheName:(id)a1;
- (unsigned long long)totalCustomDiskCost;
- (void)removeCacheImageInfoWithIdentificationKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
