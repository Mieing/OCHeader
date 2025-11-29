@interface HybridRLGurdProcessor : HybridRLBaseProcessor

+ (void)deleteGurdCacheForResource:(id)a0;

- (id)resourceLoaderName;
- (void)fetchResourceWithURL:(id)a0 container:(id)a1 loaderConfig:(id)a2 taskConfig:(id)a3 resolve:(id /* block */)a4 reject:(id /* block */)a5;
- (void)saveCacheIfNeeded:(id)a0;
- (id)getProviderWith:(id)a0 loaderConfig:(id)a1;
- (void)doTaskWith:(id)a0 loaderConfig:(id)a1 container:(id)a2 warpResolveHandler:(id /* block */)a3 warpRejectHandler:(id /* block */)a4;
- (void)cancelLoad;
- (id)init;
- (void)dealloc;

@end
