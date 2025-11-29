@interface AWEPayNumberKeyboardLongPressButton : UIButton

@property (nonatomic) double deltaTime;

- (void)invokePressTarget;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (double)delayTime;

@end
