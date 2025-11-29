@class BDUGLuckyStaticSettingsMeta, BDUGLuckyPollingSettingsMeta;

@interface BDUGLuckyStaticGeneralSettingsMeta : BDUGLuckyBDModel

@property (retain, nonatomic) BDUGLuckyStaticSettingsMeta *staticSettingsMeta;
@property (retain, nonatomic) BDUGLuckyPollingSettingsMeta *pollingSettingsMeta;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
