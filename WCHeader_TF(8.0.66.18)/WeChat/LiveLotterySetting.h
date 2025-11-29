@interface LiveLotterySetting : WXPBGeneratedMessage

@property (nonatomic) unsigned long long settingFlag;
@property (nonatomic) unsigned int attendType;

+ (void)initialize;

- (void)setAttendType:(unsigned int)a0;
- (unsigned int)attendType;
- (void)setSettingFlag:(unsigned long long)a0;
- (unsigned long long)settingFlag;

@end
