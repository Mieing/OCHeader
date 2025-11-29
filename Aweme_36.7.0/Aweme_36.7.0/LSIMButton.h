@class UIImageView;

@interface LSIMButton : UIButton

@property (nonatomic) double selectedAlpha;
@property (retain, nonatomic) UIImageView *imageContentView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } enlargeInsets;

+ (id)buttonWithSelectedAlpha:(double)a0;
+ (id)imageButtonWithSelectedAlpha:(double)a0;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
