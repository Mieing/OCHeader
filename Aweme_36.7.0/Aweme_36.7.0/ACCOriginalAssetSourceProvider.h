@interface ACCOriginalAssetSourceProvider : NSObject

+ (void)acc_checkAndTrimCacheIfNeeded;
+ (BOOL)accessCache:(id)a0 completion:(id /* block */)a1;
+ (void)fetchOriginalPhoto:(id)a0 inputCache:(id)a1 completion:(id /* block */)a2;
+ (void)exportVideo:(id)a0 completion:(id /* block */)a1;
+ (id)update:(id)a0 forCache:(id)a1;
+ (id)cachePathWithFileName:(id)a0;
+ (void)_checkAndTrimCache;
+ (BOOL)accessCache:(id)a0 checkSame:(id)a1 completion:(id /* block */)a2;
+ (id)saveCacheURL:(id)a0 forAsset:(id)a1;
+ (void)prepareOriginFileForAssetId:(id)a0 cachePrint:(id)a1 completion:(id /* block */)a2;
+ (void)initialize;

@end
