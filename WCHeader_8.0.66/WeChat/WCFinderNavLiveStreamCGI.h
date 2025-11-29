@class FinderLiveDiscoverPreloadInfo, WCFinderNavLiveStreamRequestModel, NSData, WCFinderNavLiveStreamPrefetchExtraData;

@interface WCFinderNavLiveStreamCGI : WCFinderLiveStreamBaseCGI

@property (retain, nonatomic) FinderLiveDiscoverPreloadInfo *discoverPreloadInfo;
@property (retain, nonatomic) NSData *preNavliveMoreLiveObjectsBuffer;
@property (nonatomic) BOOL isPreRecommendRequest;
@property (nonatomic) BOOL overLiteCgi;
@property (retain, nonatomic) NSData *jumpNavliveBuffer;
@property (retain, nonatomic) WCFinderNavLiveStreamRequestModel *model;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failedBlock;
@property (retain, nonatomic) WCFinderNavLiveStreamPrefetchExtraData *prefetchExtra;

+ (id)prefetchCacheHashKey:(int)a0 containerId:(unsigned long long)a1 tabId:(unsigned long long)a2 relatedObjectId:(unsigned long long)a3 homePageScene:(unsigned long long)a4;

- (id)initWithModel:(id)a0 overLiteCgi:(BOOL)a1 successBlock:(id /* block */)a2 failedBlock:(id /* block */)a3;
- (void)createRequest;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void)reportPrefetch:(unsigned long long)a0 request:(id)a1;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (int)requestType;
- (id)cachedHashKey;
- (id)prefetchExtraData;
- (BOOL)isEqualWithRequest:(id)a0 extraData:(id)a1;
- (unsigned long long)cacheValidityPeriod:(id)a0;
- (void)prefetchCacheWillBeDropped:(id)a0;
- (void).cxx_destruct;

@end
