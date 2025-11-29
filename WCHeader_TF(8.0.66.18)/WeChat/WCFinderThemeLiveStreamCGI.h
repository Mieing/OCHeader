@interface WCFinderThemeLiveStreamCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) unsigned long long pullType;
@property (nonatomic) unsigned long long prefetchCacheSecond;

+ (id)prefetchCacheHashKey:(int)a0 containerId:(unsigned long long)a1 themeId:(id)a2 themeTag:(id)a3 cardType:(unsigned long long)a4;

- (id)initWithLastBuffer:(id)a0 longitude:(double)a1 latitude:(double)a2 clientStatus:(id)a3 liveClientStatus:(id)a4 pullType:(unsigned long long)a5 readStats:(id)a6 markUnreadList:(id)a7 fromScene:(int)a8 commentScene:(int)a9 tabTipsInfo:(id)a10 byPass:(id)a11 beforeJoinLiveStatus:(id)a12 containerId:(unsigned long long)a13 relatedObjectId:(unsigned long long)a14 containerContext:(id)a15 themeId:(id)a16 themeTag:(id)a17 entryBuffer:(id)a18 aggregationCardType:(unsigned long long)a19 prefetchCacheSecond:(unsigned long long)a20 successBlock:(id /* block */)a21 failedBlock:(id /* block */)a22;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
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
