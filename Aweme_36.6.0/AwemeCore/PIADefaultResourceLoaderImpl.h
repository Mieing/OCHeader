@class NSString;

@interface PIADefaultResourceLoaderImpl : NSObject <PIAInterfaceResourceLoaderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeAfterPrepareTask;

- (void)fetchResourceForConfiguration:(id)a0 chunkCompletion:(id /* block */)a1 completion:(id /* block */)a2;
- (void)injectCacheCustomProcessor:(id)a0 instance:(id)a1;
- (void)removeCacheCustomProcessor:(id)a0 instance:(id)a1;
- (void)fetchResourceForConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)preloadResourceForConfiguration:(id)a0 completion:(id /* block */)a1;

@end
