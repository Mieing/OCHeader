@class DYAVCDAccountModel;

@interface DYAVCDAccountListModel : DYAPassportResponseModel

@property (nonatomic) unsigned long long loginWay;
@property (retain, nonatomic) DYAVCDAccountModel *currentUser;
@property (retain, nonatomic) DYAVCDAccountModel *canSwitchUser;

+ (id)currentUserJSONTransformer;
+ (id)canSwitchUserJSONTransformer;
+ (id)loginWayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
