@class UIImageView;

@interface AWEButton : UIButton

@property (nonatomic) double selectedAlpha;
@property (retain, nonatomic) UIImageView *imageContentView;
@property (nonatomic) BOOL enableLeftHandOptimize;
@property (copy, nonatomic) id /* block */ pointInsideBlock;

+ (id)buttonWithSelectedAlpha:(double)a0;
+ (id)imageButtonWithSelectedAlpha:(double)a0;

- (void)didMoveToSuperview;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
