@interface AWEStoryPublishCreatUtils : NSObject

+ (id)resizeImageWithSize:(struct CGSize { double x0; double x1; })a0 originImage:(id)a1;
+ (id)scaleAspectFillmageWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)sizeIsVaild:(struct CGSize { double x0; double x1; })a0;
+ (id)suitableColorFromColor:(id)a0;
+ (id)colorFromImage:(id)a0 needSuitColor:(BOOL)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })makeRectWithAspectRatioOutsideRect:(struct CGSize { double x0; double x1; })a0 boundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (BOOL)p_widthIsValid:(double)a0;
+ (id)pureColorImageWithPrimaryImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 needSuitColor:(BOOL)a2;

@end
