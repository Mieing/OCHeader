@interface MAVCMTimeUtil : NSObject

+ (long long)toMillisecond:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })min:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 right:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (long long)startMs:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
+ (long long)endMs:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;

@end
