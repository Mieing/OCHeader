@class UIView, AWEBatManTransitionController;

@interface AWEBatManWebViewLandscapeViewController : AWEBatManWebViewBaseViewController

@property (retain, nonatomic) AWEBatManTransitionController *transitionController;
@property (retain, nonatomic) UIView *rightBlankView;
@property (retain, nonatomic) UIView *leftContainerView;

- (BOOL)awe_shouldBypassPresentationHook;
- (void)configUI;
- (void)addRoundedCorner;
- (void)onTapBlank;
- (id)initWithURL:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (double)viewWidth;

@end
