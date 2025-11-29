@class UIImageView;

@interface IESIMButton : UIButton

@property (nonatomic) double selectedAlpha;
@property (retain, nonatomic) UIImageView *imageContentView;
@property (nonatomic) BOOL enableLeftHandOptimize;
@property (copy, nonatomic) id /* block */ pointInsideBlock;
@property (copy, nonatomic) id /* block */ tappedBlock;

+ (id)buttonWithSelectedAlpha:(double)a0;
+ (id)imageButtonWithSelectedAlpha:(double)a0;

- (void)invokeTouchUpInsideButtonBlock:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
