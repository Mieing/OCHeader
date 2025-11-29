@interface AWECodeGenPermissionControlModel : AWEBaseDataModel

@property (nonatomic) BOOL unsubCanSet;
@property (nonatomic) BOOL showDisturbButton;
@property (nonatomic) BOOL showUnsubButton;
@property (nonatomic) long long defaultStatus;
@property (nonatomic) long long disturbStatus;
@property (nonatomic) long long subStatus;

+ (id)JSONKeyPathsByPropertyKey;

@end
