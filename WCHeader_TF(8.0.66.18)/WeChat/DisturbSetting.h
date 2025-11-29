@class DisturbTimeSpan;

@interface DisturbSetting : WXPBGeneratedMessage

@property (nonatomic) unsigned int nightSetting;
@property (retain, nonatomic) DisturbTimeSpan *nightTime;
@property (nonatomic) unsigned int allDaySetting;
@property (retain, nonatomic) DisturbTimeSpan *allDayTime;

+ (void)initialize;

- (void)setAllDayTime:(id)a0;
- (id)allDayTime;
- (void)setAllDaySetting:(unsigned int)a0;
- (unsigned int)allDaySetting;
- (void)setNightTime:(id)a0;
- (id)nightTime;
- (void)setNightSetting:(unsigned int)a0;
- (unsigned int)nightSetting;

@end
