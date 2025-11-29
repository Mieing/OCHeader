@class YYCache, NSString;
@protocol AWEStorageServiceFileKitResourceMetricInterface;

@interface AWEECOMIMPigeonCacheIMPV2 : NSObject <AWEECOMIMPaasCacheProtocolV2>

@property (class, nonatomic) BOOL didUseCache;

@property (retain) YYCache *cache;
@property (retain, nonatomic) id<AWEStorageServiceFileKitResourceMetricInterface> resourceMetric;
@property (copy, nonatomic) NSString *rootPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getObjectOfClass:(Class)a0 forKey:(id)a1;
- (id)diskCacheRelativePath;
- (BOOL)cacheIsWithinTheValidityPeriod:(id)a0;
- (void)loadWithName:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 validityPeriod:(double)a2;
- (void)setDictData:(id)a0 forKey:(id)a1 validityPeriod:(double)a2;
- (id)getDictDataForKey:(id)a0;
- (id)getDictDataFromMemoryCacheForKey:(id)a0;
- (id)getObjectFromMemoryCacheOfClass:(Class)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (BOOL)containsObjectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
