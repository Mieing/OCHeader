@class DownloadGlobalParameters, NSArray, BDXRLOperator, NSString, IESForestRequest, NSMutableArray, BDXRLUrlParamConfig;

@interface AWESearchDynamicCDNProcessor : NSObject <BDXResourceLoaderProcessorProtocol, IESForestFetcherProtocol>

@property (retain) DownloadGlobalParameters *downloadParameters;
@property (retain, nonatomic) NSArray *endRetryCodes;
@property (copy, nonatomic) id /* block */ downloadCompletion;
@property (nonatomic) double lastAbsoluteTime;
@property (copy) NSArray *taskURLIdentities;
@property (retain, nonatomic) NSMutableArray *debugMessages;
@property (nonatomic) BOOL isCanceled;
@property (retain, nonatomic) BDXRLUrlParamConfig *paramConfig;
@property (retain, nonatomic) BDXRLOperator *advancedOperator;
@property (copy, nonatomic) NSString *debugMessage;
@property (retain, nonatomic) IESForestRequest *forestRequest;
@property (readonly, copy, nonatomic) NSString *resourceLoaderName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *name;

+ (void)deleteCDNCacheForResource:(id)a0;
+ (id)fetcherName;
+ (void)prefetchCDNResourceWithSurlList:(id)a0 completion:(id /* block */)a1;
+ (void)prefetchCDNResourceWithSurlList:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
+ (BOOL)isValidSurl:(id)a0;
+ (id)baseDownloadParameters;
+ (id)filePathForIdentity:(id)a0;
+ (long long)forestFetcherID;
+ (id)errorWithCode:(long long)a0 message:(id)a1;

- (void)fetchResourceWithURL:(id)a0 loaderConfig:(id)a1 taskConfig:(id)a2 resolve:(id /* block */)a3 reject:(id /* block */)a4;
- (void)fetchResourceWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)configDownloadParams;
- (void)fetchShuffleDomains:(id)a0 resolve:(id /* block */)a1 reject:(id /* block */)a2;
- (void)appendFlagOfCurrentProcessor:(BOOL)a0 url:(id)a1 error:(id)a2;
- (void)_fetchResourceWithSourceURL:(id)a0 resolve:(id /* block */)a1 reject:(id /* block */)a2;
- (void)downloadWithIdentity:(id)a0 URLString:(id)a1;
- (void)appendDebugMessage:(id)a0;
- (void).cxx_destruct;
- (void)cancelLoad;
- (id)init;
- (void)appendFlag:(id)a0;
- (void)dealloc;
- (void)cancelFetch;

@end
