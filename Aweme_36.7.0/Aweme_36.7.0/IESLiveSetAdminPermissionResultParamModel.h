@class NSString, NSNumber;

@interface IESLiveSetAdminPermissionResultParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *permissionId;
@property (retain, nonatomic) NSNumber *permissionSwitch;
@property (copy, nonatomic) NSString *removeAdminId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
