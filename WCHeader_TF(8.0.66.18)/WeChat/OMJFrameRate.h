@interface OMJFrameRate : NSObject

@property (nonatomic) struct XMFFrameRate { struct XTMTime { long long _periodCount; unsigned int _type; } _frameDuration; float _numericValue; int _frameRateType; } backingFrameRate;
@property (readonly, nonatomic) BOOL isNull;
@property (readonly, nonatomic) float numericValue;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } frameDuration;
@property (readonly, nonatomic) unsigned long long type;

+ (id)fromType:(unsigned long long)a0;
+ (id)fromNumericValue:(float)a0;

- (id)initWithBackingFrameRate:(const void *)a0;
- (long long)frameCountForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)toStringWithCustomUnit:(id)a0;
- (id)roundToStandard;
- (id)roundToStandardNonFractional;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
