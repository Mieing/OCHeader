@interface GameLifeSettingControl_TickleInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int tickleInterval;
@property (nonatomic) unsigned int tickleStrongInterval;

+ (void)initialize;

- (void)setTickleStrongInterval:(unsigned int)a0;
- (unsigned int)tickleStrongInterval;
- (void)setTickleInterval:(unsigned int)a0;
- (unsigned int)tickleInterval;

@end
