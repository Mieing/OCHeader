@class NSNumber, NSString;

@interface AWEAntiAddictStrategyFCModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *pDaysPerPeriod;
@property (copy, nonatomic) NSNumber *pMaxTimesPerPeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)secondsPerPeriod;
- (long long)maxTimesPerPeriod;
- (id)initWithSecondsPerPeriod:(long long)a0 maxTimesPerperiod:(long long)a1;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
