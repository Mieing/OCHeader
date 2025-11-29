@class NSString, NSNumber;

@interface BDXBridgeSocialRequestSystemContactPermissionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSNumber *allowGrantUidPermission;
@property (copy, nonatomic) NSString *denyNotAskDialogTitle;
@property (copy, nonatomic) NSString *denyNotAskToast;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
