@interface AWEHPFirstLandingTrackerConfig : AWEBaseBizConfigModel

@property (nonatomic) BOOL enable;
@property (nonatomic) long long secondCheckDelayTime;

+ (id)JSONKeyPathsByPropertyKey;

@end
