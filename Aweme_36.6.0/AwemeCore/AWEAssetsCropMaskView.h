@class UIVisualEffectView, UIView;

@interface AWEAssetsCropMaskView : UIView

@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIView *frameView;
@property (nonatomic) struct CGSize { double width; double height; } frameSize;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) BOOL hideBorderLine;

- (void)animateForBlurEffect:(BOOL)a0 animate:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isBlackMask:(BOOL)a1;
- (void).cxx_destruct;
- (void)refresh;
- (void)layoutSubviews;

@end
