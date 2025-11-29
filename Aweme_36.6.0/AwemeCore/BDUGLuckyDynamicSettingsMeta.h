@interface BDUGLuckyDynamicSettingsMeta : BDUGLuckyBDModel

@property (nonatomic) double pollingInterval;
@property (nonatomic) long long version;

+ (id)modelCustomPropertyMapper;

@end
