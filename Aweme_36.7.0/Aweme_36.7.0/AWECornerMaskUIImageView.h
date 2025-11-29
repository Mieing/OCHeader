@interface AWECornerMaskUIImageView : UIImageView

@property (nonatomic) struct CGPoint { double x; double y; } lastPoint;

- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
