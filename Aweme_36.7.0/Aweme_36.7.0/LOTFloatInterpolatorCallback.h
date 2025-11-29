@class NSString;

@interface LOTFloatInterpolatorCallback : NSObject <LOTNumberValueDelegate>

@property (nonatomic) double fromFloat;
@property (nonatomic) double toFloat;
@property (nonatomic) double currentProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withFromFloat:(double)a0 toFloat:(double)a1;

- (double)floatValueForFrame:(double)a0 startKeyframe:(double)a1 endKeyframe:(double)a2 interpolatedProgress:(double)a3 startValue:(double)a4 endValue:(double)a5 currentValue:(double)a6;

@end
