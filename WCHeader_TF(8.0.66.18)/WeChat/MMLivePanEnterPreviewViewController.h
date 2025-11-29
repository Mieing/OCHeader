@class CdnRenderViewBase, MMLivePanEnterPreviewParameters, UIView;

@interface MMLivePanEnterPreviewViewController : MMUIViewController

@property (retain, nonatomic) MMLivePanEnterPreviewParameters *parameters;
@property (retain, nonatomic) UIView *backgroundBlurView;
@property (retain, nonatomic) CdnRenderViewBase *renderView;

- (id)initWithParameters:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })additionalSafeAreaInsets;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void)renderPixelBuffer:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;

@end
