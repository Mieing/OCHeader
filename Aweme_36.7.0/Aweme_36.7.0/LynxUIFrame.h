@interface LynxUIFrame : LynxUI

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__711;
+ (id)__lynx_prop_config__772;

- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 border:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 withLayoutAnimation:(BOOL)a4;
- (void)attachPageUICallback;
- (void)onReceiveAppBundle:(id)a0;
- (void)updateData:(id)a0 requestReset:(BOOL)a1;
- (void)setUrl:(id)a0 requestReset:(BOOL)a1;
- (void)setContext:(id)a0;
- (id)createView;

@end
