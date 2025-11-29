@class AWEDouplusToastModel, NSString, NSArray;

@interface AWECommerceSettingsModel : AWEBaseApiModel

@property (retain, nonatomic) AWEDouplusToastModel *douplusToastModel;
@property (copy, nonatomic) NSString *IAPRefundString;
@property (copy, nonatomic) NSString *avatarDecorationURL;
@property (nonatomic) BOOL avatarDecorationEnabled;
@property (nonatomic) BOOL isAlertIAPUnwork;
@property (copy, nonatomic) NSArray *douplusIAPProductIDs;
@property (nonatomic) BOOL douplusNativeSceneSwitch;
@property (nonatomic) long long douplusNativeScenePeriod;

+ (id)douplusToastModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
