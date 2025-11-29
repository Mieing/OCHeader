@class NSString, UIView;
@protocol AWEAdLearnMoreLynxButton;

@interface AWEPlayInteractionLearnMoreLynxTopElement : AWEPlayInteractionLeftElement <AWEAdLearnMoreLynxButtonDelegate, AWEElementSelfFilterProtocol, AWEPlayInteractionLearnMoreLynxTopElementProtocol>

@property (nonatomic) BOOL shouldShow;
@property (copy, nonatomic) id /* block */ sendLoopTimeHandler;
@property (readonly, nonatomic) BOOL isLynxButtonOptABTest;
@property (nonatomic) BOOL isCellAppeared;
@property (nonatomic) BOOL isDelayLoad;
@property (retain, nonatomic) UIView<AWEAdLearnMoreLynxButton> *learnMoreLynxButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_viewWillAppear;
- (void)viewController_viewWillDisappear;
- (void)detectAbnormalDisplay;
- (void)flashLearnMoreViewWithAnimation:(BOOL)a0;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (id)currentInfoForSubUnits;
- (void)learnMoreLynxButtonDidClick:(id)a0 adExtraData:(id)a1;
- (id)feedElementStatusForLynx;
- (void)learnMoreLynxButton:(id)a0 willStartAnimationToHeight:(double)a1;
- (void)learnMoreLynxButton:(id)a0 didStartAnimationToHeight:(double)a1;
- (void)learnMoreLynxButton:(id)a0 sendEventToLikeWithName:(id)a1 eventParam:(id)a2;
- (void)promptViewDisappearingDebugHandler;
- (void)onLearnMoreViewClicked:(id)a0;
- (void)showLearnMoreLynxView:(BOOL)a0;
- (void)onLearnMoreViewClicked:(id)a0 extParam:(id)a1;
- (void)trackAdButtonShow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realFrame;
- (void)updateLearnMoreLynxTopButton;
- (void)flashLearnMoreLynxViewWithAnimation:(BOOL)a0;
- (id)trackReferWithLynxButton:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)context;
- (id)currentInfo;

@end
