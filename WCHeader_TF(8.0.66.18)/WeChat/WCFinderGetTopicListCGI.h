@class WCFinderTopicListParamsModel;

@interface WCFinderGetTopicListCGI : WCFinderBaseCgi

@property (retain, nonatomic) WCFinderTopicListParamsModel *paramsModel;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

+ (id)prefetchCacheHashKey:(int)a0 topicWording:(id)a1 topicId:(unsigned long long)a2 encryptedEventTopicId:(id)a3;

- (id)initWithParamsModel:(id)a0 successful:(id /* block */)a1 failure:(id /* block */)a2;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (int)requestType;
- (id)cachedHashKey;
- (unsigned long long)cacheValidityPeriod:(id)a0;
- (BOOL)isEqualWithRequest:(id)a0 extraData:(id)a1;
- (void)prefetchCacheWillBeDropped:(id)a0;
- (void).cxx_destruct;

@end
