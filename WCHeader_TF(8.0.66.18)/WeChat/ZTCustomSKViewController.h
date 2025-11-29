@class UIView;

@interface ZTCustomSKViewController : SKStoreProductViewController

@property (retain, nonatomic) UIView *mBgView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mRect;

- (BOOL)prefersStatusBarHidden;
- (id)initWithBackgroundView:(id)a0 viewFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void).cxx_destruct;

@end
