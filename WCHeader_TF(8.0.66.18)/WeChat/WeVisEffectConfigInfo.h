@class NSString;

@interface WeVisEffectConfigInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *configKey;
@property (retain, nonatomic) NSString *aliasName;
@property (nonatomic) float configValue;
@property (retain, nonatomic) NSString *scenario;
@property (retain, nonatomic) NSString *validDevice;

+ (void)initialize;

- (void)setValidDevice:(id)a0;
- (id)validDevice;
- (void)setScenario:(id)a0;
- (id)scenario;
- (void)setConfigValue:(float)a0;
- (float)configValue;
- (void)setAliasName:(id)a0;
- (id)aliasName;
- (void)setConfigKey:(id)a0;
- (id)configKey;

@end
