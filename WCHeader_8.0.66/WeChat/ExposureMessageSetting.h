@interface ExposureMessageSetting : WXPBGeneratedMessage

@property (nonatomic) BOOL forceShutdown;
@property (nonatomic) unsigned long long forceDuration;

+ (void)initialize;

- (void)setForceDuration:(unsigned long long)a0;
- (unsigned long long)forceDuration;
- (void)setForceShutdown:(BOOL)a0;
- (BOOL)forceShutdown;

@end
