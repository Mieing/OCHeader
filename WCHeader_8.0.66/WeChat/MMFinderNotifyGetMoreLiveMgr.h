@class NSArray, NSMutableDictionary, NSMutableSet, WCFinderLiveHomePageViewController, MMTimer, NSString;

@interface MMFinderNotifyGetMoreLiveMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *getMoreLiveCacheRespDict;
@property (retain, nonatomic) NSMutableSet *requestingGetMoreLiveKeys;
@property (retain, nonatomic) NSArray *liveIDArray;
@property (retain, nonatomic) NSMutableDictionary *getLiveInfoRespCacheDict;
@property (nonatomic) unsigned long long maxRequestCount;
@property (nonatomic) unsigned long long currentRequestCount;
@property (retain, nonatomic) WCFinderLiveHomePageViewController *homePageVC;
@property (nonatomic) unsigned long long homePageVCRelatedRequestId;
@property (nonatomic) unsigned long long homePageVCLastLeaveTs;
@property (retain, nonatomic) MMTimer *homePageVCCacheTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uniqueKeyWithObjectId:(id)a0 tipsId:(id)a1;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)requestMoreLiveWithObjectID:(id)a0 cacheKey:(id)a1 reportExtInfo:(id)a2 noticeType:(unsigned int)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)clearExipredCacheWithKey:(id)a0;
- (BOOL)isCacheStillValid:(id)a0;
- (void)recordEnterServiceMsgPageWithLiveIdArray:(id)a0;
- (void)recordGetLiveInfoResp:(id)a0;
- (void)markGetLiveInfoRespFailedWithLiveId:(unsigned long long)a0;
- (void)removeGetLiveInfoRespCacheWithLiveId:(unsigned long long)a0;
- (void)clearAllGetLiveInfoRespCache;
- (id)getMoreLiveResponseWithUniqueKey:(id)a0;
- (void)liveHomePageVCDidLeave:(id)a0;
- (void)jumpWithMoreLiveInfo:(id)a0 key:(id)a1 liveId:(id)a2 chnlExtra:(id)a3;
- (void)scheduleHomePageVCCacheTimerIfNeeded;
- (void)invalidateHomePageVCCacheTimer;
- (void)createHomePageVCIfNeededWithMoreLiveInfo:(id)a0 liveId:(id)a1;
- (void)releaseHomePageVCCacheOnTimeout;
- (BOOL)releaseHomePageVCCache;
- (void)setupRequestLimitWithResp:(id)a0;
- (void)getMoreLiveIfNeeded;
- (void)preloadHomePageVCIfNeededWithMoreLiveResp:(id)a0 liveId:(id)a1;
- (void).cxx_destruct;

@end
