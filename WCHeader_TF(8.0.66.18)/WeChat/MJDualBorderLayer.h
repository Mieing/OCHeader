@class CALayer;

@interface MJDualBorderLayer : CALayer {
    CALayer *_innerBorderLayer;
}

@property (nonatomic) struct CGColor { } *outerBorderColor;
@property (nonatomic) struct CGColor { } *innerBorderColor;
@property (nonatomic) double outerBorderWidth;
@property (nonatomic) double innerBorderWidth;

- (id)init;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animationDuration:(double)a1 timingFunction:(id)a2;
- (void)setCornerRadius:(double)a0;
- (void).cxx_destruct;

@end
