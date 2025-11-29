@class IESECShopFollowConfigModel, NSString;

@interface IESECShopUnFollowRes : IESECBaseApiModel

@property (retain, nonatomic) IESECShopFollowConfigModel *followConfig;
@property (copy, nonatomic) NSString *followBtnDisplay;
@property (nonatomic) long long followIconType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
