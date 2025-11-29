@class AWEConcernYellowDotDemotionSetting, AWEConcernHighFollowSettings;

@interface AWEConcernYellowDotModel : AWEBaseApiModel

@property (retain, nonatomic) AWEConcernYellowDotDemotionSetting *yellowDotDemotionSettings;
@property (retain, nonatomic) AWEConcernHighFollowSettings *highFollowSettings;

+ (id)landingTabSettingsJSONTransformer;
+ (id)yellowDotDemotionSettingsJSONTransformer;
+ (id)highFollowSettingsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
