@class NSString;

@interface IESMMEffectTimeRange : NSObject <NSCopying>

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) unsigned long long effectType;
@property (nonatomic) long long timeMachineStatus;
@property (copy, nonatomic) NSString *effectPathId;
@property (retain, nonatomic) IESMMEffectTimeRange *sourceTimeRange;
@property (nonatomic) BOOL isTimeRangeConverted;
@property (retain, nonatomic) NSString *rangeID;
@property (nonatomic) long long filterType;

- (id)initWithTimeRange:(id)a0 moveDuration:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTimeRange:(id)a0;

@end
