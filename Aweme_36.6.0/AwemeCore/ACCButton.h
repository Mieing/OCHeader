@class UIImageView;

@interface ACCButton : UIButton

@property (nonatomic) double selectedAlpha;
@property (nonatomic) double normalAlpha;
@property (retain, nonatomic) UIImageView *imageContentView;

+ (id)buttonWithSelectedAlpha:(double)a0;
+ (id)imageButtonWithSelectedAlpha:(double)a0;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 primaryAction:(id)a1;

@end
