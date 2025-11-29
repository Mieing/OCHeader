@class BDUGLuckyEntryInfo, NSString, NSDictionary, BDUGLuckyPollingCommonInfo, NSArray, BDUGLuckyPollingGeneralSettingsMeta, BDUGLuckyPollingSettingsDowngradeModel;
@protocol BDUGLuckyPollingSettingsActivityModel;

@interface BDUGLuckyPollingSettingsData : BDUGLuckyBDModel

@property (retain, nonatomic) BDUGLuckyPollingGeneralSettingsMeta *settingsMeta;
@property (copy, nonatomic) NSDictionary *activityInfo;
@property (retain, nonatomic) BDUGLuckyPollingCommonInfo *commonInfo;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSArray<BDUGLuckyPollingSettingsActivityModel> *activityModels;
@property (copy, nonatomic) BDUGLuckyPollingSettingsDowngradeModel *downgrade;
@property (nonatomic) BOOL needUpdatePersonalSettings;
@property (retain, nonatomic) BDUGLuckyEntryInfo *entryInfo;

+ (id)keyMapper;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
