@class YYCache, NSString;
@protocol AWEStorageServiceFileKitResourceMetricInterface;

@interface AWEECOMIMPigeonCacheIMP : NSObject <AWEECOMIMPaasCacheProtocol>

@property (class, nonatomic) BOOL didUseCache;

@property (retain) YYCache *cache;
@property (retain, nonatomic) id<AWEStorageServiceFileKitResourceMetricInterface> resourceMetric;
@property (copy, nonatomic) NSString *rootPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllObjectsWithBlock:(id /* block */)a0;
- (void)setObject:(id)a0 forKey:(id)a1 withBlock:(id /* block */)a2;
- (void)removeObjectForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)objectForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)containsObjectForKey:(id)a0 withBlock:(id /* block */)a1;
- (id)diskCacheRelativePath;
- (BOOL)cacheIsWithinTheValidityPeriod:(id)a0;
- (void)loadWithName:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 validityPeriod:(double)a2;
- (void)setObject:(id)a0 forKey:(id)a1 validityPeriod:(double)a2 withBlock:(id /* block */)a3;
- (id)objectFromMemoryCacheForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (BOOL)containsObjectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
