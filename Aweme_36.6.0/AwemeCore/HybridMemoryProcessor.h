@interface HybridMemoryProcessor : HybridRLBaseProcessor

- (id)resourceLoaderName;
- (void)fetchResourceWithURL:(id)a0 container:(id)a1 loaderConfig:(id)a2 taskConfig:(id)a3 resolve:(id /* block */)a4 reject:(id /* block */)a5;
- (void)updateCacheWithURL:(id)a0 container:(id)a1 loaderConfig:(id)a2 taskConfig:(id)a3;
- (id)init;

@end
