@interface BDUGLuckyPollingSettingsMeta : BDUGLuckyBDModel

@property (nonatomic) double pollingInterval;
@property (nonatomic) double startTimeMs;
@property (nonatomic) double endTimeMs;
@property (nonatomic) long long version;

+ (id)modelCustomPropertyMapper;

@end
