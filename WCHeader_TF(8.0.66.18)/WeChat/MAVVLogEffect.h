@interface MAVVLogEffect : NSObject

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;

- (long long)type;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)setTimeRange:(unsigned long long)a0 end:(unsigned long long)a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })getTimeRange;

@end
