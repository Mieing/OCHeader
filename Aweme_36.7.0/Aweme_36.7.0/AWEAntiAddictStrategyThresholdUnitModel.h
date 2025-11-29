@class NSNumber, NSString;

@interface AWEAntiAddictStrategyThresholdUnitModel : MTLModel <MTLJSONSerializing, AWEAntiAddictStrategyThresholdUnitProtocol>

@property (readonly, copy, nonatomic) NSNumber *liveTimeWorkday;
@property (readonly, copy, nonatomic) NSNumber *fatigueValueWorkday;
@property (readonly, copy, nonatomic) NSNumber *liveTimeWeekend;
@property (readonly, copy, nonatomic) NSNumber *fatigueValueWeekend;
@property (readonly, nonatomic) long long timeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (double)currentFatigueValueAtDate:(id)a0;
- (long long)currentLiveTimeInSecondAtDate:(id)a0;
- (id)initWithLiveTimeWorkday:(long long)a0 fatigueValueWorkday:(double)a1 liveTimeWeekend:(long long)a2 fatigueValueWeekend:(double)a3;
- (void).cxx_destruct;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;

@end
