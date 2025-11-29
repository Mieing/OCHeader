@class NSArray;

@interface AWEEntertainmentPlayletVIPModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *vipConfigs;
@property (nonatomic) long long chargeCount;

+ (id)vipConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
