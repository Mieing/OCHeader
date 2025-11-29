@class NSString, GetRecommendFeedsResp_RecommendFeedsConfig, NSData, GetRecommendFeedsResp, NSDate;
@protocol BTRecoFlowLogicDelegate;

@interface BTRecoFlowLogic : NSObject <MMImageLoaderObserver>

@property (retain, nonatomic) GetRecommendFeedsResp *cachedFirstScreenResp;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) unsigned int fetchingEventId;
@property (nonatomic) int fetchingScene;
@property (retain, nonatomic) NSData *currentRequestBuffer;
@property (nonatomic) BOOL hasMoreData;
@property (nonatomic) BOOL isMoreSubscribedMsgExpanded;
@property (nonatomic) unsigned long long dividingLineSequenceId;
@property (nonatomic) BOOL recoFlowDisabled;
@property (nonatomic) BOOL recoSwitchFromXLab;
@property (nonatomic) unsigned int refreshFreq;
@property (nonatomic) unsigned int sectionGapToPreload;
@property (nonatomic) BOOL hasSubscribedCardClickAction;
@property (nonatomic) unsigned int subscribedCardClickActionCnt;
@property (retain, nonatomic) NSDate *lastReqDateForSceneRefreshAfterClick;
@property (nonatomic) long long lastRecoCardClickIndex;
@property (retain, nonatomic) NSDate *lastReqDateForSceneSupplement;
@property (weak, nonatomic) id<BTRecoFlowLogicDelegate> delegate;
@property (readonly, nonatomic) GetRecommendFeedsResp_RecommendFeedsConfig *config;
@property (readonly, nonatomic) NSString *recommendFeedsWording;
@property (readonly, nonatomic) unsigned int subscribeMsgLimit;
@property (nonatomic) BOOL isSubscribedItemReachMaxNum;
@property (nonatomic) BOOL latestSubscribedGroupMsgReachEnd;
@property (nonatomic) BOOL allSubscribedMsgReachEnd;
@property (nonatomic) BOOL isEdgeMarked;
@property (nonatomic) long long edgeSectionIndex;
@property (nonatomic) BOOL markDidTryRefreshFirstScreenCache;
@property (nonatomic) BOOL markForceToRefreshFirstScreenCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (int)getBrandTimelineVCStayTime;
- (BOOL)isCachedFirstScreenExpired;
- (id)loadFirstScreenCacheCards;
- (BOOL)canFetchTimelineForScene:(int)a0;
- (void)cancelFetching;
- (void)fetchTimeline:(int)a0 fetchStartBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_fetchTimeline:(int)a0 fetchStartBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)handleResp:(id)a0 scene:(int)a1 fromCache:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)hasMoreFlowData;
- (BOOL)shouldLoadFlowData;
- (void)expandMoreSubscribedMsg;
- (void)tryClearSpecifiedCacheCardMsgWithCardId:(id)a0;
- (void)sendFeedBackReq:(id)a0 selectedReasonArr:(id)a1 exposedReasonArr:(id)a2 sessionId:(unsigned int)a3 completion:(id /* block */)a4;
- (void)downloadRecoFlowCoverImageIfNeeded:(id)a0;
- (void)advancePreloadCanvasSectionIfNeed:(id)a0;
- (void)tryToSetDividingLineSequenceId:(unsigned long long)a0;
- (unsigned long long)tryToGetDividingLineSequenceId;
- (BOOL)shouldShowDividingLineViewWithSequenceId:(unsigned long long)a0 isSectionLastNewMsgSection:(BOOL)a1 isSectionFirstMsgSection:(BOOL)a2 sectionData:(id)a3;
- (void)markSubscribedCardClickAction;
- (void)clearSubscribedCardClickAction;
- (void)markRecoFlowCardClickAction:(long long)a0;
- (void)clearRecoFlowCardClickAction;
- (BOOL)canCardItemMsgDownloadCoverImage:(id)a0;
- (id)getCardItemMsgDownloadCoverImgArr:(id)a0 withStyle:(int)a1;
- (void)ImageDidLoadWithData:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
