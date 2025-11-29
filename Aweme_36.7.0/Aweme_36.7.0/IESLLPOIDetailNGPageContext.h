@class IESLLPOIDetailBubbleManager, IESLLPOIDetailCardPerfTrackUtil, IESLLPOIDetailNGDataManager, IESLLPOIDetailTempoPreloadManager, IESLLPOIDetailTempoExtension, NSString, IESLLPOIDetailFooterManager, NSMutableSet, IESLLPOIPadAdapterManager, IESLLPOIDynamicTrackUtil, IESLLPOIOffset;
@protocol IESLLFusePOITrackerManagerProtocol;

@interface IESLLPOIDetailNGPageContext : LLDitoGeneralContainerPageContext <IESLLPOIDynamicTrackUtilDelegateProtocol, IESLLFusePOIDetailNGPageContextProtocol>

@property (retain, nonatomic) IESLLPOIDetailNGDataManager *dataManager;
@property (retain, nonatomic) NSMutableSet *ignoreHeightNodeTagSetInHeader;
@property (retain, nonatomic) id<IESLLFusePOITrackerManagerProtocol> trackerManager;
@property (copy, nonatomic) IESLLPOIOffset *topOffset;
@property (copy, nonatomic) IESLLPOIOffset *expandOffset;
@property (retain, nonatomic) IESLLPOIOffset *bodyInContainerOffset;
@property (nonatomic) BOOL showUGCBar;
@property (nonatomic) long long currentBarStyle;
@property (nonatomic) double COIComponentHasShown;
@property (nonatomic) long long maxCOICount;
@property (nonatomic) double headerImageHeight;
@property (nonatomic) BOOL isSketchVisible;
@property (retain, nonatomic) IESLLPOIDetailBubbleManager *bubbleManager;
@property (retain, nonatomic) IESLLPOIDynamicTrackUtil *dynamicTracker;
@property (nonatomic) long long networkPrefetchStatus;
@property (retain, nonatomic) IESLLPOIDetailFooterManager *footerManager;
@property (retain, nonatomic) IESLLPOIPadAdapterManager *padManager;
@property (retain, nonatomic) IESLLPOIDetailTempoExtension *poiTempoExtension;
@property (retain, nonatomic) IESLLPOIDetailCardPerfTrackUtil *cardPerfTracker;
@property (nonatomic) BOOL isHitCacheRequest;
@property (retain, nonatomic) IESLLPOIDetailTempoPreloadManager *poiTempoPreloadManager;
@property (nonatomic) double currentModalViewRatio;
@property (nonatomic) long long modalViewState;
@property (nonatomic) unsigned long long modalViewDirection;
@property (nonatomic) BOOL shouldSendModalViewStateEvent;
@property (nonatomic) BOOL shouldSendModalViewDirectionEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iesll_rx_store:(id)a0 didSetWithModule:(id)a1;
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
