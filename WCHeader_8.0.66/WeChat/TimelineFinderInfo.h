@interface TimelineFinderInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int cardDisplayTime;
@property (nonatomic) BOOL displayBreathingLight;
@property (nonatomic) unsigned int getLiveInfoInterval;

+ (void)initialize;

- (void)setGetLiveInfoInterval:(unsigned int)a0;
- (unsigned int)getLiveInfoInterval;
- (void)setDisplayBreathingLight:(BOOL)a0;
- (BOOL)displayBreathingLight;
- (void)setCardDisplayTime:(unsigned int)a0;
- (unsigned int)cardDisplayTime;

@end
