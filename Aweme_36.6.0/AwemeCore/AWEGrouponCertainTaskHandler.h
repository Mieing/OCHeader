@class AWEGrouponLifeFeedsScrollGuideConfig, NSString, NSTimer, AWEBinding, AWEGrouponC2ContainerViewController, AWEGrouponLifeFeedsScrollGuideWidgetView, AWEGrouponLifeSwipeUpGuideView;

@interface AWEGrouponCertainTaskHandler : NSObject <AWEGrouponLifeFeedsScrollGuideTaskProtocol>

@property (nonatomic) double totalScrollTime;
@property (retain, nonatomic) NSTimer *dialogCheckTimer;
@property (nonatomic) double dialogCheckGap;
@property (nonatomic) BOOL shouldShowSwipeUpWhenPageVisible;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL wasDialogShowing;
@property (nonatomic) BOOL tabSwitched;
@property (nonatomic) double dialogDisappearedTime;
@property (nonatomic) double taskCheckTimeStart;
@property (retain, nonatomic) AWEGrouponLifeSwipeUpGuideView *swipeUpGuideView;
@property (retain, nonatomic) AWEGrouponLifeFeedsScrollGuideWidgetView *widgetView;
@property (retain, nonatomic) AWEBinding *grouponPageVisibleBinding;
@property (retain, nonatomic) AWEGrouponC2ContainerViewController *nearbyC2Container;
@property (nonatomic) long long pageType;
@property (retain, nonatomic) AWEGrouponLifeFeedsScrollGuideConfig *taskConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBindings;
- (void)hideAndCancelSwipeUpGuideWith:(unsigned long long)a0;
- (void)hideSwipeWhenTimeOut;
- (void)startCertainTask;
- (void)didFinishScrollTask;
- (id)generateSwipeUpGuideTipTitle;
- (void)cancelShowSwipeUpTask;
- (void)stopDialogCheckTimer;
- (void)trackLifeFeedTriggerSlideTipResult;
- (void)trackLifeFreshSlideTipShow;
- (void)updateWidgetWithScrollDuration:(float)a0;
- (void)trackLifeFeedLuckyBagShowWithHasCountdown:(BOOL)a0 countDownTime:(double)a1;
- (void)hideReturnTopButton;
- (void)prepareShowSwipeUpWithDialog;
- (void)prepareShowSwipeUpWithoutDialog;
- (BOOL)isDialogShowing;
- (void)showSwipeUpGuide;
- (void)stopTaskDueToUserAction;
- (void)checkDialogStatus;
- (BOOL)checkValidBehaviorWhenLeaveGrouponPage;
- (void)pauseTaskDueToTabSwitched;
- (void)restartCertainTask;
- (void)checkWhetherShouldPauseOrResumeTaskWith:(BOOL)a0;
- (void)showReturnTopButton;
- (void)sendRequestForSnackBar;
- (void)handleScrollWithDuration:(double)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
