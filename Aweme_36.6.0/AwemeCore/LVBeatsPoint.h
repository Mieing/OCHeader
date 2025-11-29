@interface LVBeatsPoint : NSObject

@property (nonatomic) long long threshold;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;

- (id)initWithThreshold:(long long)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
