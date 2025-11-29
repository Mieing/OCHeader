@class NSString, NSMutableDictionary, ACCAIEnhanceFeatureCache, AWEVideoPublishViewModel;

@interface AWEAIEnhanceProcessManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *effectCache;
@property (retain, nonatomic) NSString *requestID;
@property (nonatomic) double featureStartTime;
@property (nonatomic) double featureDuration;
@property (nonatomic) double epFetchStartTime;
@property (nonatomic) double epFetchDuration;
@property (nonatomic) double epDownloadStartTime;
@property (nonatomic) double epDownloadDuration;
@property (nonatomic) double epTotalDuration;
@property (nonatomic) double geckoJSDuration;
@property (nonatomic) double aipStartTime;
@property (nonatomic) double aipDuration;
@property (nonatomic) double preFeatureStartTime;
@property (nonatomic) double preFeatureDuration;
@property (nonatomic) double preEpFetchStartTime;
@property (nonatomic) double preEpFetchDuration;
@property (nonatomic) double preEpDownloadStartTime;
@property (nonatomic) double preEpDownloadDuration;
@property (nonatomic) double preEpTotalDuration;
@property (nonatomic) double preGeckoJSDuration;
@property (retain, nonatomic) ACCAIEnhanceFeatureCache *cache;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) BOOL isLoading;

- (id)currentProject;
- (id)originImagePath;
- (id)trackInfos;
- (id)trimMainTrackCachePath;
- (void)processImageWithFeatureCompletion:(id /* block */)a0 downloadEffectsCompletion:(id /* block */)a1 aipProgress:(id /* block */)a2 aipCompletion:(id /* block */)a3 finalCompletion:(id /* block */)a4;
- (id)currentInputImageIdentifier;
- (BOOL)checkEffectDownloadFinished;
- (id)preloadTrackInfos;
- (void)preprocess:(id)a0 completion:(id /* block */)a1;
- (id)effectModelFromResourceId:(id)a0;
- (id)resultCacheKey;
- (void)downloadEffectModels:(id)a0 downloadEffectsCompletion:(id /* block */)a1;
- (void)requestAIP:(id)a0 aipProgress:(id /* block */)a1 aipCompletion:(id /* block */)a2;
- (void)addEffectCache:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)resetFlags;
- (void)cancel;

@end
