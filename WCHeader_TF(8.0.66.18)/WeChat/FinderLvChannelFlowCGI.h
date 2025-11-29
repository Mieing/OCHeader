@class NSData, WCFinderRedDotCtrlInfo;

@interface FinderLvChannelFlowCGI : WCFinderBaseCgi

@property (nonatomic) unsigned long long pullType;
@property (nonatomic) int tabType;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *finderCtrlInfo;
@property (retain, nonatomic) NSData *prefetchData;
@property (retain, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

+ (id)prefetchCacheHashKey:(int)a0;

- (id)initWithWithPullType:(unsigned long long)a0 tabType:(int)a1 finderCtrlInfo:(id)a2 prefetchData:(id)a3 lastBuffer:(id)a4 successful:(id /* block */)a5 failure:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (int)requestType;
- (id)cachedHashKey;
- (id)prefetchExtraData;
- (unsigned long long)cacheValidityPeriod:(id)a0;
- (void)prefetchCacheWillBeDropped:(id)a0;
- (BOOL)isEqualWithRequest:(id)a0 extraData:(id)a1;
- (void).cxx_destruct;

@end
