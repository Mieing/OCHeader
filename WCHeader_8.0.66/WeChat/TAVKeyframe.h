@protocol TAVKeyframeValue;

@interface TAVKeyframe : NSObject <NSCopying>

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (retain, nonatomic) id<TAVKeyframeValue> value;
@property (copy, nonatomic) id /* block */ timingFunction;

- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 value:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
