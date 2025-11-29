@class AWEVCDAlertModel, AWEVCDUserModel;

@interface AWEVCDAccountAlertModel : AWEBaseApiModel

@property (nonatomic) long long accountAlertType;
@property (retain, nonatomic) AWEVCDAlertModel *authorizeAlert;
@property (retain, nonatomic) AWEVCDAlertModel *closeInterActionAlert;
@property (retain, nonatomic) AWEVCDAlertModel *importFansAlert;
@property (retain, nonatomic) AWEVCDAlertModel *finishInterActionAlert;
@property (retain, nonatomic) AWEVCDUserModel *vcdUserInfo;
@property (retain, nonatomic) AWEVCDAlertModel *relationAlert;

+ (id)accountAlertTypeJSONTransformer;
+ (id)authorizeAlertJSONTransformer;
+ (id)relationAlertJSONTransformer;
+ (id)closeInterActionAlertJSONTransformer;
+ (id)importFansAlertJSONTransformer;
+ (id)finishInterActionAlertJSONTransformer;
+ (id)vcdUserInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
