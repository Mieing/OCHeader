@class WCFinderGetTopicInfoRequestParams;

@interface WCFinderGetTopicInfoCGI : WCFinderBaseCgi

@property (retain, nonatomic) WCFinderGetTopicInfoRequestParams *params;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

+ (id)prefetchCacheHashKey:(int)a0 topicWording:(id)a1 topicId:(unsigned long long)a2 encryptedEventTopicId:(id)a3;

- (id)initWithParams:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)createRequest;
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
