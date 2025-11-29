@interface MMLiveHapticsDynamicParameter : NSObject

@property (nonatomic) unsigned long long parameterType;
@property (nonatomic) double effectiveTimeOffset;
@property (nonatomic) double value;

+ (id)intensityDynamicParameter;
+ (id)sharpnessDynamicParameter;
+ (id)attackTimeDynamicParameter;
+ (id)decayTimeDynamicParameter;
+ (id)releaseTimeDynamicParameter;

- (id)initWithParameterType:(unsigned long long)a0;
- (id)coreHapticsDynamicParameter;

@end
