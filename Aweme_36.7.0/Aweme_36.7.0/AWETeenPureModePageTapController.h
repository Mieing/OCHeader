@class UITapGestureRecognizer;

@interface AWETeenPureModePageTapController : AWEBaseController

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) double lastClickTimestamp;

- (void)playDiggAnimationInView:(id)a0 location:(struct CGPoint { double x0; double x1; })a1 image:(id)a2;
- (void)onVideoPlayerViewClicked:(id)a0;
- (void)onVideoPlayerViewSingleClicked:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1;
- (void)onVideoPlayerViewDoubleClicked:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
