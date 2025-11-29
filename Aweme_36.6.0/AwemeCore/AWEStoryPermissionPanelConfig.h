@class NSString;

@interface AWEStoryPermissionPanelConfig : AWEBaseSettingsModel

@property (copy, nonatomic) NSString *permissionTitle;
@property (copy, nonatomic) NSString *permissionItemTitle;
@property (copy, nonatomic) NSString *globalSettingsTitle;
@property (copy, nonatomic) NSString *ttlTitle;
@property (copy, nonatomic) NSString *interactiveTitle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
