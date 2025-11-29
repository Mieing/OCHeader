@interface CGMathFunctions : NSObject

+ (struct CGSize { double x0; double x1; })size:(struct CGSize { double x0; double x1; })a0 aspectFit:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })size:(struct CGSize { double x0; double x1; })a0 aspectFill:(struct CGSize { double x0; double x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 aspectFit:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 aspectFill:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformBySourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 aspectFitInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformBySourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 aspectFillInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformBySize:(struct CGSize { double x0; double x1; })a0 aspectFitInSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformBySize:(struct CGSize { double x0; double x1; })a0 aspectFillInSize:(struct CGSize { double x0; double x1; })a1;

@end
