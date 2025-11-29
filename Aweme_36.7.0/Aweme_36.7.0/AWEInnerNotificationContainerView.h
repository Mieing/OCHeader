@class UIStackView, NSTimer, UITapGestureRecognizer, UIView, AWEInnerPushDisplayDurationConfig, NSString, AWEInnerNotificationRequest, UIPanGestureRecognizer, NSNumber, AWEInnerNotificationOperator;
@protocol AWEInnerNotificationContent;

@interface AWEInnerNotificationContainerView : UIView <UIGestureRecognizerDelegate>

@property (readonly, nonatomic) AWEInnerNotificationRequest *request;
@property (readonly, weak, nonatomic) AWEInnerNotificationOperator *operator;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) id<AWEInnerNotificationContent> notificationContent;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIStackView *contentContainerView;
@property (readonly, nonatomic) UIView *panDismissIndicatorView;
@property (readonly, nonatomic) UIPanGestureRecognizer *panDismissGesture;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture;
@property (readonly, nonatomic) NSTimer *dismissTimer;
@property (retain, nonatomic) AWEInnerPushDisplayDurationConfig *innerPushDisplayDurationConfig;
@property (retain, nonatomic) NSNumber *showDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)resetDismissTimer;
- (void)relatedRequestHasClosedWithReason:(long long)a0;
- (void)__handleTapGesture:(id)a0;
- (void)__configureComponents;
- (void)__createTapGesture;
- (void)setInnerPushAnimationTime:(id)a0;
- (id)containerViewConstructTime;
- (id)contentViewConstructTime;
- (id)innerPushAnimationTime;
- (void)setContentViewConstructTime:(id)a0;
- (void)setContainerViewConstructTime:(id)a0;
- (void)trackingInnerPushRenderViewShowWithRequest:(id)a0 animationBeginTime:(double)a1;
- (void)recordContentViewConstructTime:(double)a0;
- (void)recordContainerViewConstructTime:(double)a0;
- (void)trackInnerPushForScene:(unsigned long long)a0;
- (void)trackInnerPushReuse;
- (void)__customTransition:(long long)a0 animationBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)__createDismissTimer;
- (void)__createContainerView;
- (void)__createContentView;
- (void)__createPanDismissGesture;
- (void)__createPanDismissIndicatorview;
- (BOOL)isUiControlPassedWithView:(id)a0;
- (void)trackUiControlUnpassed;
- (void)__handlePanGesture:(id)a0;
- (double)customizeDismissTimeIntervalOptimized;
- (double)customizeDismissTimeIntervalWithContent:(id)a0 defaultDuration:(double)a1;
- (BOOL)__useWhiteStyle;
- (void)pauseDismissTimer;
- (void)viewWillDisappear:(BOOL)a0 reason:(long long)a1;
- (void)viewDidDisappear:(BOOL)a0 reason:(long long)a1;
- (void)customAppearTransitionAnimationBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)customDisappearTransitionAnimationBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)resumeDismissTimer;
- (void).cxx_destruct;
- (void)invalidateIntrinsicContentSize;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)actualTime;

@end
