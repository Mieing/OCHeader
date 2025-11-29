@interface YYTextEffectWindow : UIWindow

+ (id)sharedWindow;

- (unsigned long long)_keyboardDirection;
- (struct CGPoint { double x0; double x1; })_correctedCaptureCenter:(struct CGPoint { double x0; double x1; })a0;
- (double)_updateMagnifier:(id)a0;
- (struct CGPoint { double x0; double x1; })_correctedCenter:(struct CGPoint { double x0; double x1; })a0 forMagnifier:(id)a1 rotation:(double)a2;
- (void)_updateSelectionGrabberDot:(id)a0 selection:(id)a1;
- (void)showMagnifier:(id)a0;
- (void)moveMagnifier:(id)a0;
- (void)hideMagnifier:(id)a0;
- (void)showSelectionDot:(id)a0;
- (void)hideSelectionDot:(id)a0;
- (id)rootViewController;
- (void)becomeKeyWindow;
- (void)_updateWindowLevel;

@end
