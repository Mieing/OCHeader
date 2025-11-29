@interface AWECodeGenModuleDiffConfModel : AWEBaseDataModel

@property (nonatomic) int forbidCompanyEdit;
@property (nonatomic) int forbidSettingsPermission;
@property (nonatomic) int forbidSocialTag;
@property (nonatomic) int forbidPostWorkCompanyBanner;
@property (nonatomic) int forbidPostWorkPlayletBar;
@property (nonatomic) int forbidSettingsTwoList;

+ (id)JSONKeyPathsByPropertyKey;

@end
