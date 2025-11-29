@interface BDXRLBuildInProcessor : BDXRLBaseProcessor

- (void)fetchResourceWithURL:(id)a0 loaderConfig:(id)a1 taskConfig:(id)a2 resolve:(id /* block */)a3 reject:(id /* block */)a4;
- (id)resourceLoaderName;
- (id)initWithMonitorDelegate:(id)a0;
- (void)cancelLoad;

@end
