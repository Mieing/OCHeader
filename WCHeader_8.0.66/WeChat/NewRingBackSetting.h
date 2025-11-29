@class MusicRingBackSetting, FinderRingBackSetting;

@interface NewRingBackSetting : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int startTime;
@property (nonatomic) unsigned int endTime;
@property (retain, nonatomic) MusicRingBackSetting *music;
@property (retain, nonatomic) FinderRingBackSetting *finder;

+ (void)initialize;

- (void)setFinder:(id)a0;
- (id)finder;
- (void)setMusic:(id)a0;
- (id)music;
- (void)setEndTime:(unsigned int)a0;
- (unsigned int)endTime;
- (void)setStartTime:(unsigned int)a0;
- (unsigned int)startTime;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;

@end
