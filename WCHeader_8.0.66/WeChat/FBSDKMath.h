@interface FBSDKMath : NSObject

+ (struct CGPoint { double x0; double x1; })ceilForPoint:(struct CGPoint { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })ceilForSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGPoint { double x0; double x1; })floorForPoint:(struct CGPoint { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })floorForSize:(struct CGSize { double x0; double x1; })a0;
+ (unsigned long long)hashWithCGFloat:(double)a0;
+ (unsigned long long)hashWithCString:(const char *)a0;
+ (unsigned long long)hashWithDouble:(double)a0;
+ (unsigned long long)hashWithFloat:(float)a0;
+ (unsigned long long)hashWithInteger:(unsigned long long)a0;
+ (unsigned long long)hashWithInteger:(unsigned long long)a0 andInteger:(unsigned long long)a1;
+ (unsigned long long)hashWithIntegerArray:(unsigned long long *)a0 count:(unsigned long long)a1;
+ (unsigned long long)hashWithLong:(unsigned long long)a0;
+ (unsigned long long)hashWithPointer:(const void *)a0;

@end
