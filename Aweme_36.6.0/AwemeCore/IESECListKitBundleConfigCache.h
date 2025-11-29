@class NSSet, NSMutableDictionary;

@interface IESECListKitBundleConfigCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *bundleConfigCache;
@property (nonatomic) BOOL enableMemoryCache;
@property (nonatomic) BOOL enableDiskCache;
@property (nonatomic) double diskCacheValidTime;
@property (retain, nonatomic) NSSet *supportDiskCacheUrls;

+ (id)shareInstance;

- (unsigned long long)readConfigVersion;
- (void)preloadBundleWith:(id)a0;
- (void)fetchBundle:(id)a0 completion:(id /* block */)a1;
- (id)readCacheWithURL:(id)a0;
- (BOOL)supportDiskCache:(id)a0;
- (id)loadDiskBundleCache:(id)a0;
- (void)refreshDiskBundleCache:(id)a0 cacheModel:(id)a1;
- (void)refreshCacheWithURL:(id)a0 Response:(id)a1 bundleConfig:(id)a2;
- (id)bundleCacheModelFromStorageDic:(id)a0;
- (id)storageDicFromCacheModel:(id)a0;
- (void)updateCacheConfig:(id)a0;
- (void).cxx_destruct;
- (BOOL)enableCache;

@end
