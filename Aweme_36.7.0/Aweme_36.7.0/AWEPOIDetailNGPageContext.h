@class AWEPOIDetailFooterManager, AWEPOITrackerManager, AWEPOIDetailBubbleManager, AWEPOIDetailNGDataManager, AWEPOIPadAdapterManager, AWEPOIDetailTempoPreloadManager, AWEPOIDetailCardPerfTrackUtil, AWEPOIDynamicTrackUtil, AWEPOIOffset, NSMutableSet, AWEPOIDetailTempoExtension, NSString;

@interface AWEPOIDetailNGPageContext : DitoGeneralContainerPageContext <AWEPOIDynamicTrackUtilDelegateProtocol, AWEPOIUGCRateContextProtocol, IESLLFusePOIDetailNGPageContextProtocol>

@property (retain, nonatomic) AWEPOIDetailNGDataManager *dataManager;
@property (retain, nonatomic) NSMutableSet *ignoreHeightNodeTagSetInHeader;
@property (retain, nonatomic) AWEPOITrackerManager *trackerManager;
@property (copy, nonatomic) AWEPOIOffset *topOffset;
@property (copy, nonatomic) AWEPOIOffset *expandOffset;
@property (retain, nonatomic) AWEPOIOffset *bodyInContainerOffset;
@property (nonatomic) BOOL showUGCBar;
@property (nonatomic) long long currentBarStyle;
@property (nonatomic) BOOL ugcItemFullDisplay;
@property (nonatomic) double COIComponentHasShown;
@property (nonatomic) long long maxCOICount;
@property (nonatomic) double headerImageHeight;
@property (nonatomic) BOOL isSketchVisible;
@property (retain, nonatomic) AWEPOIDetailBubbleManager *bubbleManager;
@property (retain, nonatomic) AWEPOIDynamicTrackUtil *dynamicTracker;
@property (nonatomic) long long networkPrefetchStatus;
@property (retain, nonatomic) AWEPOIDetailFooterManager *footerManager;
@property (nonatomic) BOOL isHitCacheRequest;
@property (retain, nonatomic) AWEPOIPadAdapterManager *padManager;
@property (retain, nonatomic) AWEPOIDetailTempoExtension *poiTempoExtension;
@property (retain, nonatomic) AWEPOIDetailCardPerfTrackUtil *cardPerfTracker;
@property (retain, nonatomic) AWEPOIDetailTempoPreloadManager *poiTempoPreloadManager;
@property (nonatomic) double currentModalViewRatio;
@property (nonatomic) long long modalViewState;
@property (nonatomic) unsigned long long modalViewDirection;
@property (nonatomic) BOOL shouldSendModalViewStateEvent;
@property (nonatomic) BOOL shouldSendModalViewDirectionEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rx_store:(id)a0 didSetWithModule:(id)a1;
- (id)poiDetail;
- (double)headerContainerHeight;
- (id)constData;
- (id)iesll_poiDetail;
- (id)lastChunkName;
- (id)listUtil;
- (double)calculateCurrentBodyContainerRatioInScreen;
- (BOOL)isGrouponTabHalfStyle;
- (double)poiPageTopInset;
- (double)modalViewBarNodeHeight;
- (double)bodyTopInset;
- (void)subscribeActions;
- (double)fullScreenTopInset;
- (double)maxAnchorOffset;
- (void)didReceiveIgnoreHeightNodeTagInHeaderAction:(id)a0;
- (void)didEndUpdateSessionInfo:(id)a0;
- (void)trackDismissByType:(id)a0;
- (double)tapViewBottomValue;
- (void)setCurrentModalViewOffset:(double)a0;
- (double)expandTopInset;
- (double)maxUnfoldInset;
- (BOOL)enableFling;
- (double)scrollOffsetToUnfold;
- (double)scrollOffsetToFold;
- (void).cxx_destruct;
- (id)init;
- (id)store;
- (void)setup;

@end
