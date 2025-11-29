@class UIColor, UIView;

@interface GXProgressView : UIView

@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) UIColor *trailColor;

- (void)updateProgress:(double)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
