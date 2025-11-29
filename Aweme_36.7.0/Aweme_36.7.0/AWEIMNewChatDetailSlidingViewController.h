@class AWEIMPopExitCoordinatorGesture, AWEIMNewChatDetailContext, NSString, UIView, UIScrollView;
@protocol IESIMSlidingViewControllerDelegate;

@interface AWEIMNewChatDetailSlidingViewController : AWESlidingViewController <IESIMChatDetailSlidingViewControllerProtocol>

@property (retain, nonatomic) UIView *headerMaskView;
@property (readonly, nonatomic) AWEIMPopExitCoordinatorGesture *coordinatorGesture;
@property (retain, nonatomic) AWEIMNewChatDetailContext *context;
@property (retain, nonatomic) UIView *tabbarView;
@property (nonatomic) long long selectedIndex;
@property (weak, nonatomic) id<IESIMSlidingViewControllerDelegate> delegate;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentScrollView;
- (id)currentVC;
- (Class)scrollViewClass;
- (void)setupBackgroudColor;
- (void)trackSettingPageShow;
- (id)p_currentVC;
- (BOOL)isEmptyScrollView;
- (void)updateHeaderMaskViewWithHeight:(double)a0;
- (void)reloadAllTabVC;
- (void)adjustCurrentVCContentOffsetWithHeaderViewFrameY:(double)a0 headerHeight:(double)a1;
- (void)adjustCurrentVCContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)adjustOtherVCContentOffset:(struct CGPoint { double x0; double x1; })a0 thresholdOffsetY:(double)a1 forceAdjust:(BOOL)a2;
- (void)willTransitionToViewController:(id)a0;
- (void)didTransitionToViewControllerAtIndex:(long long)a0;
- (id)baseViewForHeaderView;
- (double)contrntOffsetYOfCurrentVC;
- (void)adjustOtherVCContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
