@interface VECurveTransConfig : NSObject

@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } spinCycleTime;

@end
