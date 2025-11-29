@class IESGCPNavigationBar, NSString, AWEGCPStrategyDetailViewControllerRouterModel, IESGCPExposureTrackHelper, AWEGCPStrategyListViewModel, AWEGCPStrategyListView;
@protocol AWEGCPVideoPlayService;

@interface AWEGCPStrategyDetailViewController : UIViewController <AWEGCPFullscreenTransitionOuterContextProvider, IESGCPDIContextSubscriber, AWEGCPStrategyListViewDelegate, AWEGCPStrategyActions>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEGCPStrategyDetailViewControllerRouterModel *routerModel;
@property (retain, nonatomic) IESGCPNavigationBar *navigationBar;
@property (retain, nonatomic) id<AWEGCPVideoPlayService> videoPlayService;
@property (retain, nonatomic) AWEGCPStrategyListViewModel *strategyVM;
@property (retain, nonatomic) AWEGCPStrategyListView *strategyListView;
@property (nonatomic) double startWatchTime;
@property (nonatomic) double watchDuration;
@property (retain, nonatomic) NSString *enterFrom;
@property (nonatomic) long long transitionIndex;
@property (nonatomic) long long transitionToIndex;
@property (retain, nonatomic) IESGCPExposureTrackHelper *exposureTrackHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveTransitionContext;
- (id)modernTransitionContext;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (void)modernTransitionDidCompleteWithOffset:(long long)a0;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)a0;
- (void)scrollToDisplayItemAtIndex:(long long)a0 offset:(double)a1 animated:(BOOL)a2;
- (void)makeViewTrackNode;
- (void)didSetGameCPDIContext;
- (void)modernTransitionUpdateIndexOfMix:(long long)a0;
- (void)modernTransitionDidCompleteWithIndexOfMix:(long long)a0;
- (id)modernTransitionContextOfMix:(long long)a0;
- (id)liveTransitionContextOfMix:(long long)a0;
- (void)enterDetailWithIndex:(long long)a0 extra:(id)a1;
- (void)videoIsMuteDidChange:(BOOL)a0;
- (void)reportDuration;
- (id)innerFlowTrackParams;
- (void)trackShowForStrategy;
- (void)strategyListView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)trackEvent:(id)a0 extraParams:(id)a1;
- (void)onTapSeeMoreButtonWithModel:(id)a0 index:(long long)a1;
- (void)playViewDidClick:(id)a0 index:(long long)a1;
- (void)speakerButtonDidClickedWithModel:(id)a0 index:(long long)a1;
- (id)initWithRouterModel:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
- (void)addObservers;
- (void)appWillResignActive;

@end
