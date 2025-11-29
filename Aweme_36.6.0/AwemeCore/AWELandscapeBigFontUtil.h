@interface AWELandscapeBigFontUtil : NSObject

+ (id)adapterFontValueWith:(id)a0 middle:(id)a1 large:(id)a2;
+ (long long)adapterIntValueWith:(long long)a0 middle:(long long)a1 large:(long long)a2;
+ (double)adapterCGFloatValueWith:(double)a0 middle:(double)a1 large:(double)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adapterCGRectValueWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 middle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 large:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (struct CGSize { double x0; double x1; })adapterCGSizeValueWith:(struct CGSize { double x0; double x1; })a0 middle:(struct CGSize { double x0; double x1; })a1 large:(struct CGSize { double x0; double x1; })a2;

- (id)init;

@end
