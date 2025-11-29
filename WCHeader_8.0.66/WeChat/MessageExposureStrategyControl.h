@class ExposureSilent;

@interface MessageExposureStrategyControl : WXPBGeneratedMessage

@property (nonatomic) unsigned int userExposureLimit;
@property (nonatomic) unsigned int exposureCooldownSecond;
@property (nonatomic) unsigned int clickCooldownSecond;
@property (retain, nonatomic) ExposureSilent *exposureSilentConf;
@property (nonatomic) unsigned int exposureIntervalSecond;

+ (void)initialize;

- (void)setExposureIntervalSecond:(unsigned int)a0;
- (unsigned int)exposureIntervalSecond;
- (void)setExposureSilentConf:(id)a0;
- (id)exposureSilentConf;
- (void)setClickCooldownSecond:(unsigned int)a0;
- (unsigned int)clickCooldownSecond;
- (void)setExposureCooldownSecond:(unsigned int)a0;
- (unsigned int)exposureCooldownSecond;
- (void)setUserExposureLimit:(unsigned int)a0;
- (unsigned int)userExposureLimit;

@end
