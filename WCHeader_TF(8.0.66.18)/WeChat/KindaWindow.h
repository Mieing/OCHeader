@interface KindaWindow : UIWindow

+ (id)shareInstance;

- (id)init;
- (void)dealloc;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setRootViewController:(id)a0;
- (void)willRemoveSubview:(id)a0;
- (void)didAddSubview:(id)a0;
- (void)didBecomeVisible;
- (void)didBecomeHidden;
- (void)didBecomeKey;
- (void)didResignKey;
- (void)keyboardWillShow;
- (void)keyboardDidShow;
- (void)keyboardWillHide;
- (void)keyboardDidHide;

@end
