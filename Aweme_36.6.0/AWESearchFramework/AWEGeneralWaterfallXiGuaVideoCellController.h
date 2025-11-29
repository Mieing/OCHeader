@class NSString;

@interface AWEGeneralWaterfallXiGuaVideoCellController : AWEGeneralWaterfallBaseCellController <AWESearchVideoViewPlayerDelegate>

@property (nonatomic) BOOL videoClipFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)didPlayError:(id)a0;
- (void)trackShow;
- (id)createPlayerView;
- (void)trackClick;
- (BOOL)shouldNotActive;
- (void)didStartShowing;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)didRecallResource;
- (void)resetShouldActiveStatus;
- (id)createCoverView;
- (void)enterXiguaPersonalPage:(id)a0;
- (void)preloadTimor;
- (void)cardSingleTapped:(id)a0;
- (id)getTrackBaseParams;
- (void)userInfoTapped:(id)a0;
- (BOOL)isUseStaticCardCoverWithModel:(id)a0;
- (BOOL)shouldHideAnchorView;
- (BOOL)isCountNewStyle;
- (id)countNewStyleFormatTimeString;
- (void)didBecomeActive;
- (id)transitionContext;
- (void)didEnd;
- (id)videoView;
- (BOOL)hasVideo;
- (void)didResignActive;
- (id)activeView;
- (void)updateWithModel:(id)a0;

@end
