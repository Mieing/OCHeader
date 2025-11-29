@interface LynxConverter : NSObject

+ (id)toLynxPropName:(unsigned long long)a0;
+ (id)toNSString:(id)a0;
+ (double)toNSTimeInterval:(id)a0;
+ (id)toCAMediaTimingFunction:(id)a0;
+ (int)toint:(id)a0;
+ (unsigned long long)toLynxAnimationDirectionType:(id)a0;
+ (id)toCAMediaTimingFillMode:(id)a0;
+ (unsigned long long)toLynxAnimationPlayStateType:(id)a0;
+ (unsigned long long)toLynxAnimationProp:(id)a0;
+ (id)toKeyframeAnimationInfo:(id)a0;
+ (id)toTransitionAnimationInfo:(id)a0;
+ (long long)toLynxBorderStyle:(id)a0;
+ (unsigned long long)toNSUInteger:(id)a0;
+ (double)toCGFloat:(id)a0;
+ (id)toUIColor:(id)a0;
+ (long long)toNSInteger:(id)a0;
+ (id)toLynxBoxShadow:(id)a0;
+ (id)toNSShadow:(id)a0;
+ (unsigned long long)toLynxOverflowType:(id)a0;
+ (unsigned long long)toLynxVisibilityType:(id)a0;
+ (unsigned long long)toLynxDirectionType:(id)a0;
+ (unsigned long long)toLynxFontWeightType:(id)a0;
+ (unsigned long long)toLynxWordBreakType:(id)a0;
+ (long long)toLynxBackgroundClipType:(id)a0;
+ (unsigned long long)toLynxFontStyleType:(id)a0;
+ (unsigned long long)toLynxTextAlignType:(id)a0;
+ (unsigned long long)toLynxWhiteSpaceType:(id)a0;
+ (unsigned long long)toLynxTextOverflowType:(id)a0;
+ (unsigned long long)toLynxTextDecorationType:(id)a0;
+ (long long)toLynxVerticalAlign:(id)a0;
+ (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })toCATransform3D:(id)a0 ui:(id)a1 newFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 rotationType:(char *)a3 rotationX:(double *)a4 rotationY:(double *)a5 rotationZ:(double *)a6;
+ (double)getPerspectiveLength:(id)a0 perspective:(id)a1;
+ (BOOL)isDefaultTransformOrigin:(id)a0;
+ (id)toTransformOrigin:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })toCATransform3D:(id)a0 ui:(id)a1 newFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 transformWithoutRotate:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } *)a3 transformWithoutRotateXY:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } *)a4 rotationType:(char *)a5 rotationX:(double *)a6 rotationY:(double *)a7 rotationZ:(double *)a8;
+ (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })toCATransform3D:(id)a0 rotationType:(char *)a1 rotationX:(double *)a2 rotationY:(double *)a3 rotationZ:(double *)a4 ui:(id)a5;
+ (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })toCATransform3D:(id)a0 ui:(id)a1;
+ (unsigned long long)toAccessibilityTraits:(id)a0;
+ (BOOL)isBoolNumber:(id)a0;
+ (id)toNSNumber:(id)a0;
+ (id)toid:(id)a0;
+ (struct CGColor { } *)toCGColorRef:(id)a0;
+ (BOOL)toBOOL:(id)a0;
+ (long long)toUIViewContentMode:(id)a0;

@end
