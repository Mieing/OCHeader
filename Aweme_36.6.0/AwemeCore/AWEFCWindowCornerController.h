@class AWECornerMaskUIImageView, UIImageView;

@interface AWEFCWindowCornerController : AWEBaseController

@property (retain, nonatomic) AWECornerMaskUIImageView *cornerMaskViewFeedAutoPlay;
@property (retain, nonatomic) UIImageView *cornerMaskView;

- (void)addCornerMaskView;
- (void)showCornerMaskView;
- (void)hideCornerMaskView;
- (id)cornerMaskImage;
- (void)genarateCornerMask;
- (id)genarateCornerLayerWithClipImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;

@end
