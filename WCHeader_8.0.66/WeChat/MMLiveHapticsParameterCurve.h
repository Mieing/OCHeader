@class NSMutableArray;

@interface MMLiveHapticsParameterCurve : NSObject

@property (retain, nonatomic) NSMutableArray *controlPoints;
@property (nonatomic) unsigned long long parameterType;
@property (nonatomic) double beginTimeOffset;

+ (id)intensityParameterCurve;
+ (id)sharpnessParameterCurve;
+ (id)attackTimeParameterCurve;
+ (id)decayTimeParameterCurve;
+ (id)releaseTimeParameterCurve;

- (id)init;
- (id)initWithParameterType:(unsigned long long)a0;
- (id)coreHapticsParameterCurve;
- (void).cxx_destruct;

@end
