@class CADisplayLink;

@interface EnhanceTranslatingRectBoardView : UIView

@property (nonatomic) BOOL isAnimating;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectBoardFrame;
@property (nonatomic) struct CGPoint { double x; double y; } headPoint;
@property (nonatomic) struct CGPoint { double x; double y; } tailPoint;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double beginTimeInterval;
@property (nonatomic) double animationDuration;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showRectBoardAnimation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetRectBoard;
- (void)displayLinkTicked;
- (struct CGPoint { double x0; double x1; })convertPointFromMovingDistance:(double)a0;
- (void)drawLinesInRectangle:(id)a0 headPoint:(struct CGPoint { double x0; double x1; })a1 tailPoint:(struct CGPoint { double x0; double x1; })a2;
- (void).cxx_destruct;

@end
