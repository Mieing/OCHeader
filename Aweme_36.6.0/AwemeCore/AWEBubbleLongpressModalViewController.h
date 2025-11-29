@class AWEAwemeModel, NSString, AFDLongPressContext, UIView, UIButton, AFDHoverableContainerView, MASConstraint, UIViewController, NSObject;
@protocol AWEAwemeLongPressViewControllerProtocol, AFDLongPressDynamicDurationProtocol;

@interface AWEBubbleLongpressModalViewController : UIViewController <UIGestureRecognizerDelegate, AWEAwemeLongPressModalViewControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEAwemeLongPressViewControllerProtocol> *collectionViewController;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) double collectionViewHeight;
@property (retain, nonatomic) MASConstraint *contentViewShowingConstraint;
@property (retain, nonatomic) MASConstraint *contentViewDismissedConstraint;
@property (retain, nonatomic) UIView *disabledView;
@property (copy, nonatomic) id /* block */ triggerBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) BOOL hasScrolled;
@property (retain, nonatomic) AWEAwemeModel *adAweme;
@property (retain, nonatomic) AFDLongPressContext *context;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isAnimating;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) NSObject<AFDLongPressDynamicDurationProtocol> *interactionPanelTarget;
@property (nonatomic) struct CGPoint { double x; double y; } wakePosition;
@property (nonatomic) BOOL disableImpactFeedback;
@property (retain, nonatomic) AFDHoverableContainerView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)closeButtonDidClick:(id)a0;
- (id)initWithTriggerBlock:(id /* block */)a0 dismissBlock:(id /* block */)a1 referString:(id)a2;
- (void)configWithFucntionModels:(id)a0;
- (void)configWithFucntionModels:(id)a0 aweme:(id)a1;
- (void)tweakDismissBlock;
- (void)dismissAnimated:(BOOL)a0 enterMethod:(id)a1;
- (double)calculateCollectionViewHeightWithAdAttitudeHeight:(double)a0;
- (double)modalViewHeight;
- (void)tappedDismiss;
- (void)updateWithReasonModels:(id)a0;
- (void)unfoldDislikeModelWithInsertModels:(id)a0;
- (void)unfoldDislikeReasonsListWithModels:(id)a0 aweme:(id)a1;
- (void)unfoldDislikeReasonsList;
- (void)showSpeedControl;
- (void)dismissWithoutBlockAnimated:(BOOL)a0;
- (void)toggleDislikeReasonList:(BOOL)a0;
- (void)dismissByPan:(id)a0;
- (id)longPressContext;
- (void)addPageIdentifierForTranspondIMShareModels:(id)a0;
- (void)clickedDismiss;
- (void).cxx_destruct;
- (void)dismissAnimated:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)collectionView;
- (void)setupUI;

@end
