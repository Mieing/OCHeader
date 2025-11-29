@class UIViewController, IESECCommentBarExpandContext, NSString, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol IESECCommentBarExpandContentProtocol;

@interface IESECCommentBarExpandContainerViewController : UIViewController <IESECGoodsDetailHostInjectable, IESECCommentBarExpandContainerProtocol>

@property (retain, nonatomic) IESECCommentBarExpandContext *context;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *horizontalDismissPanGesture;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isSlideInteraction;
@property (nonatomic) BOOL isFullMode;
@property (nonatomic) BOOL firstAppear;
@property (retain, nonatomic) UIViewController<IESECCommentBarExpandContentProtocol> *contentViewController;
@property (nonatomic) BOOL isSelfDisplayedOnScreen;
@property (readonly, nonatomic) BOOL willShowAsChildVC;
@property (copy, nonatomic) id /* block */ willDismiss;
@property (copy, nonatomic) id /* block */ didAppear;
@property (nonatomic) BOOL unPlayWhenClose;
@property (readonly, copy, nonatomic) NSString *animationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)containerMode;
- (void)callWillDismiss;
- (void)registerNotfications;
- (void)forbidContentInteraction;
- (void)resumeContentInteraction;
- (void)createContentViewController;
- (void)setupInteraction;
- (id)switchModeAction;
- (void)horizontalDismissPanGestureHandler:(id)a0;
- (void)closeByMethod:(id)a0;
- (void)enterOtherPageWithFullScreen:(BOOL)a0;
- (void)animateFromFullToHalfWithEndingVelocity:(double)a0 currentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)restoreToFullWithEndingVelocity:(double)a0 currentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)animateFromHalfToFullWithEndingVelocity:(double)a0 currentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)animateToDismissWithEndingVelocity:(double)a0 currentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)restoreToHalfWithEndingVelocity:(double)a0 currentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithContext:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)panGestureHandler:(id)a0;
- (void)setupUI;
- (void)tapGestureHandler:(id)a0;

@end
