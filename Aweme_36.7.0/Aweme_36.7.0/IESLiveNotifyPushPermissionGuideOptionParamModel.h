@class NSString, NSDictionary;

@interface IESLiveNotifyPushPermissionGuideOptionParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *permissionScene;
@property (copy, nonatomic) NSString *optionName;
@property (copy, nonatomic) NSDictionary *extraParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
