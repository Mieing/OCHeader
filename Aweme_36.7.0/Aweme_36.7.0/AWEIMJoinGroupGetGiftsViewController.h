@class UIView, AWEIMJoinGroupGetGiftsViewModel, NSString, AWEIMCouponListView, UIImageView, UIButton, UIPanGestureRecognizer, UILabel;
@protocol IESIMLoadingViewProtocol;

@interface AWEIMJoinGroupGetGiftsViewController : UIViewController <AWEIMCouponListViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWEIMJoinGroupGetGiftsViewModel *viewModel;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UIButton *closeButtton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWEIMCouponListView *couponListView;
@property (retain, nonatomic) UIImageView *emptyIconImageView;
@property (retain, nonatomic) UILabel *emptyDescribeLabel;
@property (retain, nonatomic) UIButton *emptyTransferButton;
@property (retain, nonatomic) UIImageView *errorIconImageView;
@property (retain, nonatomic) UILabel *errorDescribeLabel;
@property (retain, nonatomic) UIButton *errorButton;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) struct CGPoint { double x; double y; } origionCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__dismiss;
- (void)__updateUI;
- (void)__setupUI;
- (id)initWithExtraParams:(id)a0;
- (void)__showWithDuration:(double)a0;
- (void)__show;
- (void)__config;
- (void)couponListView:(id)a0 clickedWithItemViewModel:(id)a1;
- (void)__handleWillEnterForegroundNotification:(id)a0;
- (struct CGSize { double x0; double x1; })__contentViewSize;
- (void)__updateContentViewLayoutToShow:(BOOL)a0;
- (void)__dismissWithDuration:(double)a0;
- (void)__handleMaskViewTap:(id)a0;
- (void)__handleMaskViewPan:(id)a0;
- (void)__handleContentViewPan:(id)a0;
- (void)__handleEmptyTransferButtonClicked:(id)a0;
- (void)__handleErrorButtonClicked:(id)a0;
- (void)__handleSelfPan:(id)a0;
- (void)__updateContentViewLayoutToCenterY:(double)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
