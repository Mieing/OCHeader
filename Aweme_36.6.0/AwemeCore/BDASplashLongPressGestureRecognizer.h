@class UIEvent;

@interface BDASplashLongPressGestureRecognizer : UILongPressGestureRecognizer

@property (readonly, nonatomic) struct CGPoint { double x; double y; } beganPoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (readonly, nonatomic) UIEvent *endEvent;

- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
