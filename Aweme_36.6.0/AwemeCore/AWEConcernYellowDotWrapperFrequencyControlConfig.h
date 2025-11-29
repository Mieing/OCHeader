@class AWEConcernYellowDotNoClickFrequencyConfig, AWEConcernYellowDotNaturalDayCountFrequencyConfig, AWEConcernYellowDotMaxCountMinIntervalFrequencyConfig;

@interface AWEConcernYellowDotWrapperFrequencyControlConfig : NSObject

@property (nonatomic) long long groupID;
@property (retain, nonatomic) AWEConcernYellowDotNoClickFrequencyConfig *noClickFrequency;
@property (retain, nonatomic) AWEConcernYellowDotMaxCountMinIntervalFrequencyConfig *maxCountMinIntervalFrequency;
@property (retain, nonatomic) AWEConcernYellowDotNaturalDayCountFrequencyConfig *naturalDayCountFrequency;

- (id)configWithGroupID:(long long)a0;
- (id)findConfigWithGroupID:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
