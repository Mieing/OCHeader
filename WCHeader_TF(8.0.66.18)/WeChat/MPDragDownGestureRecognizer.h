@interface MPDragDownGestureRecognizer : UIPanGestureRecognizer

@property (nonatomic) struct CGPoint { double x; double y; } beganLocation;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })translationInView:(id)a0;

@end
