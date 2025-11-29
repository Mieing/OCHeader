@class BDUGLuckyStaticGeneralSettingsMeta, NSString, NSDictionary, BDUGLuckyEntryInfo, BDUGLuckyStaticCommonInfo;

@interface BDUGLuckyStaticSettingsData : BDUGLuckyBDModel

@property (retain, nonatomic) BDUGLuckyStaticGeneralSettingsMeta *settingsMeta;
@property (copy, nonatomic) NSDictionary *activityInfo;
@property (retain, nonatomic) BDUGLuckyStaticCommonInfo *commonInfo;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL noUpdate;
@property (retain, nonatomic) BDUGLuckyEntryInfo *entryInfo;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
