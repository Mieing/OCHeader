@interface WCFinderFittingSizeTool : NSObject

+ (struct CGPoint { double x0; double x1; })size:(struct CGSize { double x0; double x1; })a0 div:(struct CGSize { double x0; double x1; })a1 replaceNan:(struct CGPoint { double x0; double x1; })a2 replaceZero:(struct CGPoint { double x0; double x1; })a3;
+ (struct CGSize { double x0; double x1; })cutSize:(struct CGSize { double x0; double x1; })a0 putInSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })scaleSize:(struct CGSize { double x0; double x1; })a0 parcelSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })stretchSize:(struct CGSize { double x0; double x1; })a0 parcelSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })shrink:(struct CGSize { double x0; double x1; })a0 parcelSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })fitMinimizeFloatingSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })sizeThatFitCallFromSelf:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })sizeThatFit:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })sizeThatFit:(id)a0 size:(struct CGSize { double x0; double x1; })a1 ignoreCallSizeThatFit:(BOOL)a2;
+ (BOOL)_isViewUsingAutoLayout:(id)a0;

@end
