@class AWEFeedConcernLeftPanGuideViewModel, AWEFeedConcernLeftPanGuideView, NSString, UIViewController;
@protocol AWEAwemeConcernFeedLeftPanGuideViewControllerDelegate;

@interface AWEAwemeConcernFeedLeftPanGuideViewController : UIViewController <CAAnimationDelegate, AWEFollowFeedAlertShowDelegate, AWEAwemeConcernLeftPanGuideProtocol>

@property (retain, nonatomic) AWEFeedConcernLeftPanGuideViewModel *viewModel;
@property (retain, nonatomic) AWEFeedConcernLeftPanGuideView *leftPanGuideView;
@property (weak, nonatomic) UIViewController *parentVC;
@property (nonatomic) BOOL isReachFollowLeftPanaGuideShowTime;
@property (weak, nonatomic) id<AWEAwemeConcernFeedLeftPanGuideViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindObserver;
- (void)__addObserver;
- (void)showFollowFeedAlert:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)canShowFollowFeedAlert:(id)a0;
- (void)stopGuideAnimation;
- (id)initWithParentVC:(id)a0;
- (void)concernHandleTransition:(long long)a0 context:(id)a1 parentViewController:(id)a2;
- (void)startAnimationPhaseOne;
- (void)startAnimationPhaseTwo;
- (void)awe_nunkiForbidLeftPanGuideView;
- (void)leftPanGuideViewAnimation:(BOOL)a0;
- (void)__videoWillLoop:(id)a0;
- (void)__stopGuideAnimation:(BOOL)a0;
- (struct { struct CGPoint { double x0; double x1; } x0; double x1; })originModelContext;
- (BOOL)shouldAvoidGuideView;
- (void)__addViewOnParentVC;
- (void)__triggleAnimation;
- (void)__addAnimationViewOnParentSingleColumnVC;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;

@end
