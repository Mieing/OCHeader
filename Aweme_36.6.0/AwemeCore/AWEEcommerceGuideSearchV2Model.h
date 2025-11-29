@class NSArray, AWEEcommerceGuideSearchV2ActivityAtmosphereModel;

@interface AWEEcommerceGuideSearchV2Model : AWEBaseApiModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *tabs;
@property (nonatomic) unsigned long long cardStyle;
@property (retain, nonatomic) AWEEcommerceGuideSearchV2ActivityAtmosphereModel *activityAtmosphere;
@property (nonatomic) unsigned long long heightStyle;

+ (id)tabsJSONTransformer;
+ (id)activityAtmosphereJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
