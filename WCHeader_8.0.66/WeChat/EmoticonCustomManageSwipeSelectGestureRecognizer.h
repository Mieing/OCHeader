@interface EmoticonCustomManageSwipeSelectGestureRecognizer : UIGestureRecognizer

@property (nonatomic) BOOL gestureRecognized;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } lastPoint;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)cleanAll;

@end
