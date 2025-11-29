@class NSString, NSMutableSet, NSMutableDictionary;
@protocol PuzzleGeckoServiceProtocol;

@interface PuzzleGurdResourceManager : NSObject <IESFalconCustomInterceptor>

@property (copy, nonatomic) NSString *accessKey;
@property (retain, nonatomic) id<PuzzleGeckoServiceProtocol> geckoService;
@property (copy, nonatomic) NSMutableSet *falconPatterns;
@property (retain, nonatomic) NSMutableDictionary *runningRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backPackAccessKey;
+ (id)avatorAccessKey;
+ (id)annieAccessKey;
+ (void)regsiterBackPackAccesskey;
+ (id)sharedManager;

- (id)dataForPath:(id)a0 channel:(id)a1;
- (id)falconMetaDataForURLRequest:(id)a0;
- (id)_gurdMetaDataWithURLString:(id)a0;
- (id)_gurdMetaDataWithURLString:(id)a0 ignorePrefix:(id)a1 accessKey:(id)a2 regex:(id)a3;
- (BOOL)enableCancelLazyRequest;
- (void)cancelLazyResourceRequest;
- (void)setupWithAccessKey:(id)a0 patterns:(id)a1;
- (void)registerPuzzleFalconPatterns:(id)a0;
- (void)syncGeckoResourceWithGroupName:(id)a0;
- (void)_didFetchGurdMetaData:(id)a0;
- (BOOL)enableChannelLazyRequest;
- (void)syncLazyResourceWithChannel:(id)a0 completion:(id /* block */)a1;
- (void)cancelDownloadWithChannel:(id)a0;
- (id)jsDataDictForUrl:(id)a0 context:(id)a1;
- (id)getLatchInitJsUrl:(id)a0 channel:(id)a1 anniePretchResModeConfig:(id)a2;
- (id)getLatchPrefetchJsUrl:(id)a0 bundle:(id)a1 anniePretchResModeConfig:(id)a2;
- (void)monitorJsDataDictUsingForest:(int)a0 context:(id)a1 url:(id)a2 channel:(id)a3 bundle:(id)a4 initJsUrlSourceType:(int)a5 prefetchJsUrlSourceType:(int)a6 initJsVersion:(long long)a7 prefetchJsVersion:(long long)a8 error:(id)a9;
- (void)geckoJsDataDictUsingForestForUrl:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)cdnJsDataDictUsingForestForUrl:(id)a0 context:(id)a1 queue:(id)a2 anniePretchResModeConfig:(id)a3 completion:(id /* block */)a4;
- (id)jsDataDictForUrl:(id)a0 container:(id)a1;
- (void)jsDataDictForURL:(id)a0 completion:(id /* block */)a1;
- (id)jsDataDictUsingForestForUrl:(id)a0 container:(id)a1;
- (void)jsDataDictUsingForestForUrl:(id)a0 context:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
