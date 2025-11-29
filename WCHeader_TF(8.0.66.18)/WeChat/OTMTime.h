@interface OTMTime : NSObject <NSCopying>

@property (nonatomic) struct XTMTime { long long _periodCount; unsigned int _type; } backingTime;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isNegative;
@property (readonly, nonatomic) BOOL isPositive;
@property (readonly, nonatomic) BOOL isNumeric;
@property (readonly, nonatomic) BOOL isFiniteNonNegative;
@property (readonly, nonatomic) BOOL isFinitePositive;
@property (readonly, nonatomic) BOOL isZero;
@property (readonly, nonatomic) double seconds;

+ (id)zeroTime;
+ (id)invalidTime;
+ (id)positiveInfinityTime;
+ (id)negativeInfinityTime;
+ (id)timeWithSeconds:(double)a0;
+ (id)timeWithBackingTime:(struct XTMTime { long long x0; unsigned int x1; })a0;

- (id)initWithBackingTime:(struct XTMTime { long long x0; unsigned int x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToTime:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)timecodeWithFrameDuration:(id)a0;
- (id).cxx_construct;

@end
