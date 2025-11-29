@interface MAMediaTimingFunction : NSObject

@property (nonatomic) long long type;

+ (id)functionWithType:(long long)a0;

- (double)normalizeValue:(double)a0;
- (double)easeInQuadraticInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeOutQuadraticInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeInEaseOutQuadraticInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeInCubicInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeOutCubicInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeInEaseOutCubicInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeInQuarticInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeOutQuarticInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeInEaseOutQuarticInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeInQuinticInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeOutQuinticInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeInEaseOutQuinticInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeInSinInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeOutSinInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeInEaseOutSinInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeInExpInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeOutExpInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeInEaseOutExpInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeInCircularInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeOutCircularInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)easeInEaseOutCircularInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)linearInterpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (double)interpolateBySlice:(double)a0 start:(double)a1 end:(double)a2;
- (id)initWithType:(long long)a0;

@end
