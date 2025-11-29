@class NSData, NSMutableArray, WCFinderStreamRequestParams;

@interface WCFinderStreamCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (retain, nonatomic) NSData *buffer;
@property (nonatomic) unsigned long long pullType;
@property (nonatomic) int tabType;
@property (retain, nonatomic) NSMutableArray *unreadItems;
@property (nonatomic) BOOL isCancel;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (nonatomic) int commentscene;
@property (retain, nonatomic) WCFinderStreamRequestParams *params;

+ (id)prefetchCacheHashKey:(int)a0;
+ (id)getStreamRequestTopObjectsWithTabType:(int)a0 tabTipsObjectId:(unsigned long long)a1 containerId:(id)a2 guideBarObjectId:(unsigned long long)a3 h5ByPass:(id)a4 topObjects:(id)a5 bubbleInfo:(id)a6 relateTid:(unsigned long long)a7;
+ (BOOL)hasReddotFinderObjectWithTab:(int)a0 bubbleInfo:(id)a1;
+ (BOOL)isStreamCacheRequestTopObjects:(id)a0 equalWithTopObjects:(id)a1;
+ (id)getUnreadItemsWithParams:(id)a0 tabType:(int)a1 commentScene:(int)a2;
+ (id)convertFinderObjectListToUnreadItems:(id)a0 tabType:(int)a1;

- (id)initWithPullType:(unsigned long long)a0 buffer:(id)a1 tabType:(int)a2 commentscene:(int)a3 params:(id)a4 successBlock:(id /* block */)a5 failureBlock:(id /* block */)a6;
- (void)createRequest;
- (id)createBackupInfoRequest;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void)cancelCGI;
- (void)cancelCGIWithBlock:(id /* block */)a0;
- (BOOL)needADDeviceInfo;
- (void)reportCGIStart;
- (void)reportCGIFinishWithDebugMessage:(id)a0;
- (void)reportCGIFail;
- (id)getRoomStateWithAvgSpeed:(unsigned int)a0;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (int)requestType;
- (id)cachedHashKey;
- (id)prefetchExtraData;
- (unsigned long long)cacheValidityPeriod:(id)a0;
- (BOOL)isEqualWithRequest:(id)a0 extraData:(id)a1;
- (id)getStreamRequestTopObjects:(id)a0 bubbleInfo:(id)a1;
- (void)prefetchCacheWillBeDropped:(id)a0;
- (void).cxx_destruct;

@end
