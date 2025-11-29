@class UIView, AWEBatManTransitionController;

@interface AWEBatManQualityLandscapeViewController : AWEBatManQualityBaseViewController

@property (retain, nonatomic) AWEBatManTransitionController *transitionController;
@property (retain, nonatomic) UIView *rightBlankView;
@property (retain, nonatomic) UIView *leftContainerView;

- (BOOL)awe_shouldBypassPresentationHook;
- (void)configUI;
- (void)addRoundedCorner;
- (void)onTapBlank;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (id)initWithCompletion:(id /* block */)a0;
- (unsigned long long)supportedInterfaceOrientations;

@end
