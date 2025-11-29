@class WCFinderGetRecommendReasonHeaderRequestParams;

@interface WCFinderGetRecommendReasonHeaderCGI : WCFinderBaseCgi

@property (retain, nonatomic) WCFinderGetRecommendReasonHeaderRequestParams *params;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithParams:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (int)requestType;
- (id)cachedHashKey;
- (BOOL)isEqualWithRequest:(id)a0 extraData:(id)a1;
- (unsigned long long)cacheValidityPeriod:(id)a0;
- (void).cxx_destruct;

@end
