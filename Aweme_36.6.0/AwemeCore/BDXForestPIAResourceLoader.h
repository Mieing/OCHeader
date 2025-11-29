@class NSString, BDXForestPIAResourceCacheStore, WKWebView;

@interface BDXForestPIAResourceLoader : NSObject <PIAInterfaceResourceLoaderProtocol>

@property (retain, nonatomic) BDXForestPIAResourceCacheStore *cacheStore;
@property (weak, nonatomic) WKWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchResourceForConfiguration:(id)a0 chunkCompletion:(id /* block */)a1 completion:(id /* block */)a2;
- (void)injectCacheCustomProcessor:(id)a0 instance:(id)a1;
- (void)removeCacheCustomProcessor:(id)a0 instance:(id)a1;
- (id)resolveConfig:(id)a0 urlString:(id)a1 preload:(BOOL)a2;
- (long long)statusCodeFromResponse:(id)a0;
- (id)headerFromResponse:(id)a0;
- (void)fetchResourceForConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)preloadResourceForConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)removeCacheCustomProcessor:(id)a0;
- (void)injectCacheCustomProcessor:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
