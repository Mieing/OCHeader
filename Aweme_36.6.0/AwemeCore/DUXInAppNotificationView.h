@class UITapGestureRecognizer, NSTimer, DUXInAppNotificationMainContentView, UIView, DUXInAppNotificationConfig;
@protocol DUXInAppNotificationViewDelegate;

@interface DUXInAppNotificationView : UIView

@property (retain, nonatomic) DUXInAppNotificationConfig *config;
@property (nonatomic) double lastChangedY;
@property (retain, nonatomic) UIView *handlerView;
@property (retain, nonatomic) DUXInAppNotificationMainContentView *mainView;
@property (nonatomic) long long containerViewCurrentBreakPointHorizontal;
@property (nonatomic) double notificationWidth;
@property (retain, nonatomic) NSTimer *dismissTimer;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) UIView *hostView;
@property (weak, nonatomic) id<DUXInAppNotificationViewDelegate> delegate;

- (void)showOnView:(id)a0;
- (id)initWithConfig:(id)a0 andDelegate:(id)a1;
- (void)animateWithBezierPointOne:(float)a0 pointTwo:(float)a1 pointThree:(float)a2 pointFour:(float)a3 andDuration:(double)a4 andAnimations:(id /* block */)a5 andCompletion:(id /* block */)a6;
- (void)startDismissTimer;
- (void)timerDismiss:(id)a0;
- (void)setupViewProperties;
- (void)updateWithConfig:(id)a0 andDelegate:(id)a1;
- (void)updateViewPropertiesByBreakPointIfNeededWithView:(id)a0;
- (void)didChangePanningWithFactor:(double)a0;
- (void)didEndPanningWithFactor:(double)a0;
- (void)updateViewPropertiesWithView:(id)a0;
- (void)duxBreakPointDidUpdate;
- (void)generalActionTouched:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)pan:(id)a0;
- (id)initWithConfig:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)show;
- (void)dismiss:(BOOL)a0;
- (void)didBeginPanning;
- (void)setupLayout;

@end
