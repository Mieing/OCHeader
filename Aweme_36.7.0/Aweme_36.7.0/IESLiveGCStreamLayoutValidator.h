@interface IESLiveGCStreamLayoutValidator : NSObject

+ (void)checkLayoutInputValid:(id)a0;
+ (void)checkLayoutResultValid:(id)a0;
+ (BOOL)isOverlappingRectF:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rectS:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
