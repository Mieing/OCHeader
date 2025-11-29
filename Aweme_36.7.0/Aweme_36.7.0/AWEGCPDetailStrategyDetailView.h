@class NSString, AWEGCPStrategyListView;
@protocol AWEGCPVideoPlayService;

@interface AWEGCPDetailStrategyDetailView : IESGCPDetailBaseView <AWEGCPFullscreenTransitionOuterContextProvider, IESGCPDIContextSubscriber, AWEGCPStrategyListViewDelegate, IESGCPDetailFilterViewDelegate, AWEGCPStrategyActions, IESGCPAudienceDetailActions, IESGCPInteractScrollChildScrollable, IESGCPGameDetailTabNavigatorActions, AWEGCPDetailStrategyExposureProtocol>

@property (nonatomic) long long transitionIndex;
@property (nonatomic) long long transitionToIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double startWatchTime;
@property (nonatomic) double watchDuration;
@property (retain, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isActiveBeforeAppEnterBackground;
@property (retain, nonatomic) id<AWEGCPVideoPlayService> videoPlayService;
@property (retain, nonatomic) AWEGCPStrategyListView *strategyListView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveTransitionContext;
- (id)modernTransitionContext;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (void)modernTransitionDidCompleteWithOffset:(long long)a0;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)a0;
- (void)bindViewModel:(id)a0;
- (void)scrollToDisplayItemAtIndex:(long long)a0 offset:(double)a1 animated:(BOOL)a2;
- (void)didSetGameCPDIContext;
- (void)modernTransitionUpdateIndexOfMix:(long long)a0;
- (void)modernTransitionDidCompleteWithIndexOfMix:(long long)a0;
- (id)modernTransitionContextOfMix:(long long)a0;
- (id)liveTransitionContextOfMix:(long long)a0;
- (void)enterDetailWithIndex:(long long)a0 extra:(id)a1;
- (void)videoIsMuteDidChange:(BOOL)a0;
- (void)didCloseGameDetailView;
- (void)willDisplayTab:(id)a0 tabId:(id)a1 withParams:(id)a2;
- (void)willEndDisplayTab:(id)a0 tabId:(id)a1;
- (void)reportDuration;
- (BOOL)shouldResponseToTabActionsWithTabId:(id)a0 tabView:(id)a1;
- (void)trackShowForStrategy;
- (void)strategyListView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)trackEvent:(id)a0 extraParams:(id)a1;
- (void)onTapSeeMoreButtonWithModel:(id)a0 index:(long long)a1;
- (void)playViewDidClick:(id)a0 index:(long long)a1;
- (void)speakerButtonDidClickedWithModel:(id)a0 index:(long long)a1;
- (void)setScrollViewToTopAnimated:(BOOL)a0;
- (void)doOnContentOffsetChanged:(id /* block */)a0;
- (void)onStrategyViewExpose;
- (void)onStrategyViewDisExpose;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)scrollView;
- (void)dealloc;
- (void)setup;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
- (void)addObservers;
- (void)appWillResignActive;

@end
