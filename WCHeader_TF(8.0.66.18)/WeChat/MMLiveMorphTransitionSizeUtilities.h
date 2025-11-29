@interface MMLiveMorphTransitionSizeUtilities : NSObject

+ (struct CGSize { double x0; double x1; })sizeOf:(struct CGSize { double x0; double x1; })a0 scaledToFill:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })sizeOf:(struct CGSize { double x0; double x1; })a0 scaledToFit:(struct CGSize { double x0; double x1; })a1;
+ (unsigned long long)currentOrientationFlagsForVideoSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })estimatedTargetFrameForVideoSize:(struct CGSize { double x0; double x1; })a0 inContainerSize:(struct CGSize { double x0; double x1; })a1 withInsetReferenceView:(id)a2 hasVideoBottomView:(BOOL)a3;

@end
