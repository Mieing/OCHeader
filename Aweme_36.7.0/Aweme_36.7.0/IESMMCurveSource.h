@class NSArray;

@interface IESMMCurveSource : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *xPoints;
@property (retain, nonatomic) NSArray *yPoints;
@property (nonatomic) float avgRatio;
@property (nonatomic) long long srcDuration;
@property (nonatomic) BOOL needReverse;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } spinCycleTime;

- (void)p_copyFrom:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
