@class NSString;
@protocol WCTimelineDataProviderDelegate;

@interface WCTimelineDataProvider : MMObject <IStrangerBrandContactHeadImageExt, IContactMgrExt, PBMessageObserverDelegate> {
    unsigned long long uiClientLatestID;
    NSString *fpHash;
    BOOL isWorking;
}

@property (weak, nonatomic) id<WCTimelineDataProviderDelegate> delegate;
@property (readonly, nonatomic) BOOL isUpdating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)convertAdvertiseMsgListToList;
- (BOOL)hasExistAdItem:(id)a0;
- (id)converServerAdList2List:(id)a0;
- (id)convertServerRecList2List:(id)a0;
- (void)delAdWithSnsId:(id)a0 SnsId:(id)a1;
- (void)dumpAllNewAdList:(id)a0;
- (BOOL)isAdCommentOrLikeBySelf:(id)a0;
- (void)updateAdvertiserInfo:(id)a0;
- (void)onStrangerBrandHeadImageURLChange:(id)a0;
- (void)onBrandContactHeadImageURLChange:(id)a0;
- (void)clearSnsAdExpInfo:(id)a0;
- (void)addRecList:(id)a0 toAdList:(id)a1;
- (void)addUbdXmlAdtoAdList:(id)a0;
- (void)delAdList:(id)a0 retAdList:(id)a1;
- (void)changeAdTimeForPosition:(id)a0 retList:(id)a1 isFirstPage:(BOOL)a2;
- (void)processAdOperation:(id)a0 feedList:(id)a1 adList:(id)a2;
- (void)processAdOperationLift:(id)a0 feedList:(id)a1 adList:(id)a2;
- (void)reportAdLift:(long long)a0 uxInfo:(id)a1 snsId:(id)a2;
- (void)processAdOperationReplace:(id)a0;
- (void)reportTimelinePullCost:(id)a0 timelineRequest:(id)a1 userData:(id)a2;
- (void)tryToPullSnsAd:(id)a0;
- (void)responseForSnsAdPullResponse:(id)a0 Event:(unsigned int)a1;
- (void)processAdPullResponse:(id)a0 adDataItem:(id)a1;
- (void)onTimelinePullResponseWithAdDataList:(id)a0 forRequest:(id)a1;
- (BOOL)checkAdDataValid:(id)a0 sessionKeyAd:(id)a1;
- (BOOL)updateFirstPage:(unsigned long long)a0;
- (BOOL)updatePrePage:(unsigned long long)a0;
- (BOOL)updateNextPage:(unsigned long long)a0 bottomId:(unsigned long long)a1 minChangedTime:(unsigned int)a2 isUnReadJump:(BOOL)a3;
- (unsigned int)onServiceCleanCache;
- (id)init;
- (void)SafeMD5;
- (void)dealloc;
- (void)meggeObjectOperation:(id)a0 snsObject:(id)a1;
- (id)converListToList:(id)a0;
- (unsigned int)getNetworkType;
- (BOOL)requestForSnsTimeLineRequest:(unsigned long long)a0 minId:(unsigned long long)a1 lastRequestTime:(unsigned int)a2 pageType:(long long)a3 isUnReadJump:(BOOL)a4;
- (BOOL)responseForSnsTimeLineResponse:(id)a0 Event:(unsigned int)a1;
- (void)parseResposeWsInfo:(id)a0 requestIdentifier:(id)a1 output:(id *)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)reportKVStatSightRecieveWithMeidaItem:(id)a0;
- (void)updateConfig:(id)a0 isFirstPage:(BOOL)a1;
- (void)parsePattern:(id)a0;
- (void)saveServerSession:(id)a0;
- (void).cxx_destruct;

@end
