@class BDXGurdSyncTask;

@interface BDXRLGurdProcessor : BDXRLBaseProcessor

@property (retain, nonatomic) BDXGurdSyncTask *task;

+ (void)deleteGurdCacheForResource:(id)a0;

- (void)fetchResourceWithURL:(id)a0 loaderConfig:(id)a1 taskConfig:(id)a2 resolve:(id /* block */)a3 reject:(id /* block */)a4;
- (id)resourceLoaderName;
- (id)initWithMonitorDelegate:(id)a0;
- (void)saveCacheIfNeeded:(id)a0;
- (id)getProviderWith:(id)a0 loaderConfig:(id)a1;
- (void)doTaskWith:(id)a0 loaderConfig:(id)a1 geckoTag:(id)a2 warpResolveHandler:(id /* block */)a3 warpRejectHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (void)cancelLoad;
- (void)dealloc;

@end
