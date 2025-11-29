@class NSData, LVReddotInfo;

@interface WCFinderGetLongVideoCGI : WCFinderBaseCgi

@property (nonatomic) unsigned long long pullType;
@property (nonatomic) int tabType;
@property (retain, nonatomic) LVReddotInfo *reddotInfo;
@property (retain, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

+ (id)prefetchCacheHashKey:(int)a0;

- (id)initWithWithPullType:(unsigned long long)a0 tabType:(int)a1 reddotInfo:(id)a2 lastBuffer:(id)a3 successful:(id /* block */)a4 failure:(id /* block */)a5;
- (void)createRequest;
- (id)genFinderUnreadItemList:(int)a0;
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
