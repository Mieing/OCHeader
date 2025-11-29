@class AFDRecommendVisibleChangePanelModel, AFDModalViewHelper, NSString, AFDRecommendVisibleChangePanel;

@interface AFDRecommendVisibleChangePanelViewController : UIViewController <AWEPanelTransitionWithBackground>

@property (retain, nonatomic) AFDRecommendVisibleChangePanelModel *model;
@property (retain, nonatomic) AFDRecommendVisibleChangePanel *panelView;
@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ activeCloseAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)a0;
- (void)presentedViewPanFinished;
- (void)bindActions;
- (void)clickConfirmButton;
- (void)clickClose;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewDidLoad;
- (void)setupUI;

@end
