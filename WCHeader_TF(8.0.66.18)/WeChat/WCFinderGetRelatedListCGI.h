@class WCFinderGetRelatedListParams;

@interface WCFinderGetRelatedListCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (retain, nonatomic) WCFinderGetRelatedListParams *params;

+ (id)prefetchCacheHashKey:(id)a0 viewScene:(int)a1;

- (id)initWithParams:(id)a0 successful:(id /* block */)a1 failure:(id /* block */)a2;
- (void)createRequestWithFromSessionId:(id)a0;
- (unsigned int)additionalExptFlag;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (BOOL)needADDeviceInfo;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (int)requestType;
- (id)cachedHashKey;
- (id)prefetchExtraData;
- (unsigned long long)cacheValidityPeriod:(id)a0;
- (BOOL)isEqualWithRequest:(id)a0 extraData:(id)a1;
- (void)prefetchCacheWillBeDropped:(id)a0;
- (void).cxx_destruct;

@end
