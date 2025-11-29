@interface MMBubbleLayer : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double arrowHeight;
@property (nonatomic) double arrowWidth;
@property (nonatomic) int arrowDirection;
@property (nonatomic) double arrowPosition;

- (id)init;
- (void)setArrowPositionAtPos:(double)a0 baseLen:(double)a1;
- (id)layerForSize:(struct CGSize { double x0; double x1; })a0;
- (id)arrowPoints;
- (id)keyPointAtcorner;
- (id)centerOfCorner;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrame;
- (id)bubblePath;

@end
