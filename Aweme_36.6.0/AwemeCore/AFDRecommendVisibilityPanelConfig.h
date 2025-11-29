@class NSNumber;

@interface AFDRecommendVisibilityPanelConfig : AWEBaseSettingsModel

@property (retain, nonatomic) NSNumber *style;
@property (retain, nonatomic) NSNumber *defaultSelectItem;
@property (retain, nonatomic) NSNumber *showLimit;

+ (id)defaultConfig;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
