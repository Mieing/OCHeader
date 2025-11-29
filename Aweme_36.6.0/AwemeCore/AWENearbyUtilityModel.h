@class AWENearbyUtilityMaskModel, AWENearbyUtilityBottomBarModel;

@interface AWENearbyUtilityModel : AWEBaseApiModel

@property (retain, nonatomic) AWENearbyUtilityBottomBarModel *barModel;
@property (retain, nonatomic) AWENearbyUtilityMaskModel *maskModel;

+ (id)barModelJSONTransformer;
+ (id)maskModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
