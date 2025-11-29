@class IESAccountVCDAccountModel;

@interface IESAccountVCDAccountListModel : IESAccountPassportResponseModel

@property (nonatomic) unsigned long long loginWay;
@property (retain, nonatomic) IESAccountVCDAccountModel *currentUser;
@property (retain, nonatomic) IESAccountVCDAccountModel *canSwitchUser;

+ (id)currentUserJSONTransformer;
+ (id)canSwitchUserJSONTransformer;
+ (id)loginWayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
