@class NSString, NSDictionary, IESECShopActivityDynamicComponentModel;

@interface IESECShopFollowRes : IESECBaseApiModel

@property (copy, nonatomic) NSString *showMsg;
@property (copy, nonatomic) NSDictionary *followGift;
@property (retain, nonatomic) IESECShopActivityDynamicComponentModel *module;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
