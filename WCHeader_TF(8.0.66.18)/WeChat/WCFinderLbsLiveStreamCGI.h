@class FinderLiveClientStatus, NSString, NSData, FinderLbsTabTipsInfo, FinderLiveBeforeJoinLiveRoomStatus, WCFinderLiveTabInfo, NSMutableArray, FinderClientStatus;

@interface WCFinderLbsLiveStreamCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (retain, nonatomic) FinderClientStatus *clientStatus;
@property (retain, nonatomic) FinderLiveClientStatus *liveClientStatus;
@property (nonatomic) unsigned long long pullType;
@property (retain, nonatomic) NSMutableArray *readStats;
@property (retain, nonatomic) NSMutableArray *markUnreadList;
@property (nonatomic) int fromScene;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) FinderLbsTabTipsInfo *tabTipsInfo;
@property (copy, nonatomic) NSString *byPass;
@property (copy, nonatomic) NSString *jumpNavliveBufferEncode;
@property (retain, nonatomic) FinderLiveBeforeJoinLiveRoomStatus *beforeJoinLiveStatus;
@property (retain, nonatomic) WCFinderLiveTabInfo *liveTabInfo;
@property (nonatomic) unsigned long long relatedObjectId;
@property (nonatomic) unsigned long long cacheDurationInSeconds;

+ (id)prefetchCacheHashKey:(int)a0 tabId:(unsigned long long)a1;

- (id)initWithLastBuffer:(id)a0 longitude:(double)a1 latitude:(double)a2 clientStatus:(id)a3 liveClientStatus:(id)a4 pullType:(unsigned long long)a5 readStats:(id)a6 markUnreadList:(id)a7 fromScene:(int)a8 commentScene:(int)a9 tabTipsInfo:(id)a10 byPass:(id)a11 beforeJoinLiveStatus:(id)a12 relatedObjectId:(unsigned long long)a13 liveTabInfo:(id)a14 onlyFollowFeed:(BOOL)a15 cacheDurationInSeconds:(unsigned long long)a16 jumpNavliveBufferEncode:(id)a17 successful:(id /* block */)a18 failure:(id /* block */)a19;
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
