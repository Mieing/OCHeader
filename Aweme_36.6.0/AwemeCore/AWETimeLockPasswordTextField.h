@interface AWETimeLockPasswordTextField : UITextField

@property (nonatomic) BOOL needFixKeyboard;
@property (nonatomic) BOOL isKeyboardShowing;

- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
