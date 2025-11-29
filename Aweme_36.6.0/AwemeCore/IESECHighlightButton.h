@class UIImageView, UILabel;

@interface IESECHighlightButton : UIButton

@property (nonatomic) double selectedAlpha;
@property (retain, nonatomic) UIImageView *imageContentView;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } hitTestEdgeInsets;
@property (retain, nonatomic) UILabel *subTextLabel;

+ (id)buttonWithSelectedAlpha:(double)a0;
+ (id)imageButtonWithSelectedAlpha:(double)a0;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
