@class NSString, IESECShopFollowConfigModel;

@interface IESECShopFollowStateModel : IESECBaseApiModel

@property (copy, nonatomic) NSString *followBtnDisplay;
@property (nonatomic) long long shopBtnLocation;
@property (nonatomic) long long followStatus;
@property (nonatomic) BOOL shouldShowShopEntry;
@property (retain, nonatomic) IESECShopFollowConfigModel *followConfig;

- (void).cxx_destruct;

@end
