@interface IESECLLRectangleView : IESECLLShapeView

@property (nonatomic) struct { double top_left; double top_right; double bottom_left; double bottom_right; } radius_map;

- (struct CGPath { } *)rectPathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
