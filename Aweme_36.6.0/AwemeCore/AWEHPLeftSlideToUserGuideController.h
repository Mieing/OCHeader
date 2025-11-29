@class AWEHPLeftSlideToUserGuideTask, NSString;

@interface AWEHPLeftSlideToUserGuideController : AWEBaseController <AWEHPHomeContainerViewControllerLifeCycle, AWEHPLeftSlideToUserGuideViewControllerDelegate>

@property (retain, nonatomic) AWEHPLeftSlideToUserGuideTask *curTask;
@property (nonatomic) BOOL isContainerAppear;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNotification;
- (void)removeNotification;
- (void)hpSlidingViewControllerWillTransition:(id)a0;
- (void)hpDidStartTransitionWithContext:(id)a0;
- (void)hpDidChangePercentDrivenTransitionWithContext:(id)a0;
- (void)hpDidCancelPercentDrivenTransitionWithContext:(id)a0;
- (void)hpDidPopDoneTransitionWithContext:(id)a0;
- (double)interactionRightContainerHeight;
- (void)onVideoPlayTimeTriggerShowLeftToUserGuideNotification:(id)a0;
- (void)onFeedTableVCWillDisplayCellNotification:(id)a0;
- (void)onFeedTableVCDidEndDisplayingCellNotification:(id)a0;
- (void)tryShowNoticeGuide;
- (void)tryDismissGuide;
- (void)tryShowInteractiveGuide;
- (void)tryUpdateInteractiveGuideWithContext:(id)a0;
- (BOOL)canShowGuideWithGuideType:(long long)a0;
- (id)currentComponentID;
- (void)showGuideWithTask:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })containerSize;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
