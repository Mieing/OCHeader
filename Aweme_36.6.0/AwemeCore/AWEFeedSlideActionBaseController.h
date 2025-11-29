@class NSString, AWEFeedSlideActionView, AWEAwemeModel;

@interface AWEFeedSlideActionBaseController : AWEBaseController <AWEFeedSlideActionBaseControllerProtocol>

@property (retain, nonatomic) AWEFeedSlideActionView *actionView;
@property (nonatomic) struct CGPoint { double x; double y; } slideActionViewStartAnimationPoint;
@property (nonatomic) struct CGPoint { double x; double y; } slideActionBeginDraggingPoint;
@property (retain, nonatomic) AWEAwemeModel *slideActionBeginDraggingAweme;
@property (nonatomic) BOOL slideActionViewShowInProcess;
@property (nonatomic) BOOL slideActionViewHideInProcess;
@property (nonatomic) BOOL slideActionViewShouldCheckCurrentAweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerSlideAction;
- (void)slideAction_scrollViewWillBeginDragging:(id)a0;
- (void)slideAction_scrollViewDidScroll:(id)a0;
- (void)slideAction_scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)lottiePath;
- (BOOL)shouldEnableCurrentTableView;
- (BOOL)shouldTrySwitchActionView:(double)a0;
- (BOOL)continuousDraggingPointMeetsRecognizeThresholdWithScrollView:(id)a0;
- (long long)slideActionConfirmIconBottomPercent;
- (double)slideActionViewMinHeight;
- (void)trackShowButton;
- (void)scaleActionButtonWithScrollView:(id)a0;
- (void)hideButtonWithDuration:(double)a0;
- (double)slideActionViewFinalWidth;
- (double)slideActionViewFinalHeight;
- (void)afterShow;
- (void)buttonWillShow;
- (double)slideActionViewMinWidth;
- (void)afterHide;
- (void)buttonWillHide;
- (BOOL)actionShouldVibrate;
- (id)highlightButtonMaskImage;
- (id)highlightButtonTextColor;
- (id)highlightButtonText;
- (double)slideActionViewIconChangeFrame;
- (double)slideActionViewIconTotalFrame;
- (id)highlightButtonImage;
- (double)slideActionViewWidth;
- (double)slideActionViewHeight;
- (struct CGSize { double x0; double x1; })highlightButtonImageSize;
- (id)defaultButtonMaskImage;
- (id)defaultButtonTextColor;
- (id)defaultButtonImage;
- (struct CGSize { double x0; double x1; })defaultButtonImageSize;
- (void)buttonDidShow;
- (void)buttonDidHide;
- (long long)slideActionStartupThreshold;
- (long long)slideActionRecognizeThreshold;
- (BOOL)beginDraggingPointMeetsStartupThreshold;
- (BOOL)shouldCheckCurrentAweme;
- (id)beginDraggingAweme;
- (BOOL)isButtonShowing;
- (void).cxx_destruct;
- (unsigned long long)priority;
- (id)backgroundImage;
- (void)triggerAction;
- (id)defaultButtonText;
- (void)showButton;

@end
