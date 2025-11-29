@interface MMMVSafeSlider : WCNetworkMediaSlider

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)safeSetMinimumValue:(float)a0 defValue:(float)a1;
- (void)safeSetMaximumValue:(float)a0 defValue:(float)a1;
- (void)safeSetValue:(float)a0 defValue:(float)a1;
- (void)safeSetValue:(float)a0 defValue:(float)a1 animated:(BOOL)a2;

@end
