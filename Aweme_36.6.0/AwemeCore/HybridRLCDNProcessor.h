@class NSArray, DownloadGlobalParameters;

@interface HybridRLCDNProcessor : HybridRLBaseProcessor

@property (retain) DownloadGlobalParameters *downloadParameters;
@property (retain, nonatomic) NSArray *endRetryCodes;
@property (copy, nonatomic) id /* block */ downloadCompletion;
@property (nonatomic) double lastAbsoluteTime;

+ (void)deleteCDNCacheForResource:(id)a0;
+ (id)identityWithUrl:(id)a0;

- (id)resourceLoaderName;
- (void)fetchResourceWithURL:(id)a0 container:(id)a1 loaderConfig:(id)a2 taskConfig:(id)a3 resolve:(id /* block */)a4 reject:(id /* block */)a5;
- (void)configDownloadParams;
- (void)fetchShuffleDomains:(id)a0 resolve:(id /* block */)a1 reject:(id /* block */)a2;
- (void)_fetchResourceWithSourceURL:(id)a0 resolve:(id /* block */)a1 reject:(id /* block */)a2;
- (void)downloadWithIdentity:(id)a0 URLString:(id)a1;
- (void)appendFlagOfCurrentProcessor:(BOOL)a0 url:(id)a1;
- (void).cxx_destruct;
- (void)cancelLoad;
- (id)init;
- (void)appendFlag:(id)a0;
- (void)dealloc;

@end
