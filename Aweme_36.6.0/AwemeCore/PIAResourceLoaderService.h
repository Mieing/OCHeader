@class NSString;

@interface PIAResourceLoaderService : NSObject <PIAResourceLoaderService, PIACacheProcessorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)initService;
- (id)responseWithRequest:(id)a0;
- (id)p_addPIAKeyWithURL:(id)a0;
- (id)dataWithRequest:(id)a0;
- (void)fetchResourceForURL:(id)a0 context:(id)a1 Configuration:(id)a2 completion:(id /* block */)a3;
- (void)fetchResourceForURL:(id)a0 context:(id)a1 Configuration:(id)a2 chunkCompletion:(id /* block */)a3 completion:(id /* block */)a4;
- (void)preloadResourceWithConfig:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)injectCacheProcessorWithContext:(id)a0;
- (void)removeCacheProcessorWithContext:(id)a0;

@end
