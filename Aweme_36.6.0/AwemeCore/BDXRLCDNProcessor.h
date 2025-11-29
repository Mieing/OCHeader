@class NSArray, DownloadGlobalParameters;

@interface BDXRLCDNProcessor : BDXRLBaseProcessor

@property (retain) DownloadGlobalParameters *downloadParameters;
@property (retain, nonatomic) NSArray *endRetryCodes;
@property (copy, nonatomic) id /* block */ downloadCompletion;
@property (nonatomic) double lastAbsoluteTime;
@property (copy) NSArray *taskURLIdentities;

+ (void)deleteCDNCacheForResource:(id)a0;

- (void)fetchResourceWithURL:(id)a0 loaderConfig:(id)a1 taskConfig:(id)a2 resolve:(id /* block */)a3 reject:(id /* block */)a4;
- (id)resourceLoaderName;
- (id)initWithMonitorDelegate:(id)a0;
- (void)configDownloadParams;
- (void)fetchShuffleDomains:(id)a0 resolve:(id /* block */)a1 reject:(id /* block */)a2;
- (void)appendFlagOfCurrentProcessor:(BOOL)a0 url:(id)a1 error:(id)a2;
- (void)_fetchResourceWithSourceURL:(id)a0 resolve:(id /* block */)a1 reject:(id /* block */)a2;
- (BOOL)isCDNMultiVersionResource:(id)a0;
- (id)addMultiCommonParams:(id)a0;
- (void)downloadWithIdentity:(id)a0 URLString:(id)a1;
- (Class)forestClass;
- (id)mergePrams:(id)a0 withURL:(id)a1;
- (id)getTTnetEnv;
- (void).cxx_destruct;
- (void)cancelLoad;
- (void)appendFlag:(id)a0;
- (void)dealloc;

@end
