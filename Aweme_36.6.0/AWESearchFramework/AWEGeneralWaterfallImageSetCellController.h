@class AWEGeneralWaterfallVideoTag, NSString, UIView;

@interface AWEGeneralWaterfallImageSetCellController : AWEGeneralWaterfallBaseCellController <AWESearchImageSetViewDelegate, AWESearchRichAlbumTransitionOuterContextProvider, AWEZoomTransitionOuterContextProvider, AWESearchPreferredTransitionProtocol, AFDFullPageFeedContainerViewControllerDelegate>

@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL enterFullPage;
@property (nonatomic) BOOL isWaitingChunkModel;
@property (retain, nonatomic) UIView *forbidInteractionView;
@property (nonatomic) BOOL clipFinish;
@property (nonatomic) BOOL isFeelGoodLynxShow;
@property (retain, nonatomic) AWEGeneralWaterfallVideoTag *ugcShowcaseTagView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (id)logExtraDict;
- (void)fullPageFeedViewDidDisappear:(id)a0;
- (void)didPlayError:(id)a0;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)a0;
- (id)searchTransitionProviderClassNameForContext:(id)a0;
- (void)trackShow;
- (id)createPlayerView;
- (void)trackClick;
- (BOOL)shouldNotActive;
- (void)didEndShowing;
- (void)didStartShowing;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)didRecallResource;
- (void)resetShouldActiveStatus;
- (void)didItemChangeAtIndex:(long long)a0;
- (id)createCoverView;
- (id)getInflowExtra;
- (void)updateWithChunkModel:(id)a0;
- (void)restoreStateAfterChunkModel;
- (void)addObserverForChunkModel;
- (void)gotoAlbumDetailPage;
- (void)selectAlbumBitRate:(id)a0;
- (void)updatePlayerScaleMode;
- (void)cardSingleTapped:(id)a0;
- (id)getTrackBaseParams;
- (BOOL)isUseStaticCardCoverWithModel:(id)a0;
- (id)getBTMInfoDictWithArea:(id)a0;
- (id)getSourceBtmTokenWithDict:(id)a0 area:(id)a1;
- (void)updateStateForChunkModel;
- (void)setBcmUnitParamsWithResponder:(id)a0;
- (void)jumpNewPageWithHost:(id)a0 btm:(id)a1 clickArea:(id)a2;
- (id)getCustomExtraInnerflowLog;
- (void)configAlbumDetailPageLoopAndSoundStateForPayload:(id)a0;
- (long long)prefetchImageCount;
- (id)getSlideButtonType;
- (id)getBcmParamsWithResponder:(id)a0;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id)transitionContext;
- (void)didEnd;
- (id)navigationController;
- (id)videoView;
- (BOOL)hasVideo;
- (void)didResignActive;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;
- (id)activeView;
- (id)coverImage;
- (void)updateWithModel:(id)a0;

@end
