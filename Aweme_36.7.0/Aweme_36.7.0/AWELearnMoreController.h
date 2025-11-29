@class UIView, AWEPageContext, AWEAwemeModel, AWEPlayInteractionBaseElement, AWELearnMoreModifyContainView;
@protocol AWEPlayInteractionContextProtocol;

@interface AWELearnMoreController : NSObject

@property (weak, nonatomic) AWEAwemeModel *aweme;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (weak, nonatomic) AWEPlayInteractionBaseElement *element;
@property (copy, nonatomic) id /* block */ promptViewAppearingHandler;
@property (copy, nonatomic) id /* block */ promptViewDisappearingHandler;
@property (copy, nonatomic) id /* block */ playAdLearnMoreViewAnimationHandler;
@property (copy, nonatomic) id /* block */ showLearnMoreNormalViewHandler;
@property (copy, nonatomic) id /* block */ learnMoreTransformHandler;
@property (copy, nonatomic) id /* block */ learnMoreAlphaHandler;
@property (copy, nonatomic) id /* block */ flashLearnMoreViewWithAnimationHandler;
@property (retain, nonatomic) AWELearnMoreModifyContainView *containView;
@property (retain, nonatomic) UIView *extraClickArea;
@property (nonatomic) BOOL hasSetAlpha;
@property (nonatomic) BOOL hasFlash;
@property (nonatomic) BOOL isCellAppeared;

- (void)viewController_willDisplay;
- (void)layoutElementView;
- (id)initWithAweme:(id)a0 context:(id)a1 element:(id)a2;
- (void)buttonShowTrack;
- (void)runAIModelTask;
- (void)downgradeTrack;
- (BOOL)checkButtonProhibit;
- (void)showLearnMoreNormalView:(BOOL)a0;
- (void)flashLearnMoreNormalViewWithAnimation:(BOOL)a0;
- (void)onLearnMoreViewClicked:(id)a0;
- (double)elementContainerWidth;
- (double)containViewHeight;
- (void)trackOthershowFinish;
- (void)runDolphinAIModelTask:(id)a0 model:(id)a1 dict:(id)a2;
- (void)setupExtraClickArea:(id)a0;
- (double)calculateTouchAreaOverlapPercentage;
- (void)processOthershowFinish;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupContext;

@end
