@class NSArray;

@interface AWEEntertainmentPlayletVIPChargeInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *vipConfigs;

+ (id)vipConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
