@interface AWEConcernYellowDotDemotionSetting : AWEBaseApiModel

@property (nonatomic) long long yellowDotDemotionSwitch;
@property (nonatomic) long long followDotDemotionThreshold;
@property (nonatomic) long long familiarDotDemotionThreshold;
@property (nonatomic) long long yellowDotDemotionMaxTime;

+ (id)JSONKeyPathsByPropertyKey;

@end
