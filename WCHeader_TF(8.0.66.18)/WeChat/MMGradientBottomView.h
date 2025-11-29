@class UIColor, MMGradientView, UIView;

@interface MMGradientBottomView : UIView

@property (retain, nonatomic) MMGradientView *gradientView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL ignoreHitTest;

+ (double)gradientHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
