@interface BDPVConsoleButton : UIButton

@property (nonatomic) struct CGPoint { double x; double y; } beganPoint;
@property (nonatomic) BOOL isMoved;
@property (nonatomic) BOOL isTaged;

- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
