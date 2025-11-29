@class WCFinderDataItem, NSString, NSData;

@interface WCFinderJoinLiveCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *entranceQRCodeURL;
@property (retain, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) NSString *livePkId;
@property (copy, nonatomic) NSString *sessionBuffer;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) int commentScene;
@property (nonatomic) unsigned long long fromSrc;
@property (nonatomic) unsigned long long fetchType;
@property (nonatomic) unsigned long long requestTime;

+ (id)prefetchCacheHashKey:(int)a0 taskKey:(id)a1 scene:(unsigned long long)a2 liveId:(unsigned long long)a3;

- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 scene:(unsigned long long)a2 entranceQRCodeURL:(id)a3 liveCookies:(id)a4 livePkId:(id)a5 sessionBuffer:(id)a6 commentScene:(int)a7 fromSrc:(unsigned long long)a8 fetchType:(unsigned long long)a9 successBlock:(id /* block */)a10 failBlock:(id /* block */)a11;
- (void)start;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (id)getRoomStateWithAvgSpeed:(unsigned int)a0;
- (void)addRefSessionBuffer:(id)a0;
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
