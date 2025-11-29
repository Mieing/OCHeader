@interface MMSightCameraOptionUtil : NSObject

+ (id)createIconButtonWithSVGName:(id)a0 viewTag:(long long)a1 accessibilityText:(id)a2;
+ (id)createIconButtonWithSVGName:(id)a0 viewSize:(struct CGSize { double x0; double x1; })a1 imageSize:(struct CGSize { double x0; double x1; })a2 viewTag:(long long)a3 accessibilityText:(id)a4;
+ (id)createIconButtonWithTitle:(id)a0 font:(id)a1 viewTag:(long long)a2 accessibilityText:(id)a3;
+ (double)topBarBtnLen;
+ (id)createTopBarButtonWithIconName:(id)a0;
+ (id)createPureTitleButtonForText:(id)a0 withAccessibilityText:(id)a1;
+ (id)createAvgViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromSubviewList:(id)a1 justified:(BOOL)a2 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;
+ (void)transformView:(id)a0 rotateToOrientation:(long long)a1 animated:(BOOL)a2;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_rotateTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 toDeviceOrientation:(long long)a1;
+ (double)_getRotateFromTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

- (double)_getScaleXFromTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (double)_getScaleYFromTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
