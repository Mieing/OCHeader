@class UIEvent;

@interface BDASplashTapGestureRecognizer : UITapGestureRecognizer

@property (readonly, nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (readonly, nonatomic) UIEvent *endEvent;

- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
