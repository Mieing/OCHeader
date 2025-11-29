@class BDUGLuckyEntryInfo, BDUGLuckyPersonalSettingsMeta, NSDictionary, BDUGLuckyPersonalCommonInfo, NSString;

@interface BDUGLuckyPersonalSettingsData : BDUGLuckyBDModel

@property (retain, nonatomic) BDUGLuckyPersonalSettingsMeta *settingsMeta;
@property (copy, nonatomic) NSDictionary *activityInfo;
@property (retain, nonatomic) BDUGLuckyEntryInfo *entryInfo;
@property (retain, nonatomic) BDUGLuckyPersonalCommonInfo *commonInfo;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL noUpdate;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
