@class AWEGrouponCertainTaskConfig, AWEGrouponCommonFrequencyData, AWEGrouponUncertainTaskConfig;

@interface AWEGrouponLifeFeedsScrollGuideConfig : AWEBaseApiModel

@property (nonatomic) unsigned long long taskType;
@property (retain, nonatomic) AWEGrouponCertainTaskConfig *certainTaskConfig;
@property (retain, nonatomic) AWEGrouponUncertainTaskConfig *uncertainTaskConfig;
@property (retain, nonatomic) AWEGrouponCommonFrequencyData *frequencyInfo;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
