@interface ValFeature : WXPBGeneratedMessage

@property (nonatomic) unsigned int vidPlayLen;
@property (nonatomic) unsigned int stayTime;
@property (nonatomic) unsigned long long stayTimeMs;
@property (nonatomic) unsigned long long vidPlayTimeMs;
@property (nonatomic) unsigned long long vidPlayingTimeMs;
@property (nonatomic) unsigned long long exposeTimeMs;
@property (nonatomic) unsigned long long startPlayTime;
@property (nonatomic) unsigned long long endPlayTime;
@property (nonatomic) unsigned long long lastPlayTime;
@property (nonatomic) unsigned long long stopTimes;
@property (nonatomic) unsigned int autoPlay;

+ (void)initialize;

- (void)setAutoPlay:(unsigned int)a0;
- (unsigned int)autoPlay;
- (void)setStopTimes:(unsigned long long)a0;
- (unsigned long long)stopTimes;
- (void)setLastPlayTime:(unsigned long long)a0;
- (unsigned long long)lastPlayTime;
- (void)setEndPlayTime:(unsigned long long)a0;
- (unsigned long long)endPlayTime;
- (void)setStartPlayTime:(unsigned long long)a0;
- (unsigned long long)startPlayTime;
- (void)setExposeTimeMs:(unsigned long long)a0;
- (unsigned long long)exposeTimeMs;
- (void)setVidPlayingTimeMs:(unsigned long long)a0;
- (unsigned long long)vidPlayingTimeMs;
- (void)setVidPlayTimeMs:(unsigned long long)a0;
- (unsigned long long)vidPlayTimeMs;
- (void)setStayTimeMs:(unsigned long long)a0;
- (unsigned long long)stayTimeMs;
- (void)setStayTime:(unsigned int)a0;
- (unsigned int)stayTime;
- (void)setVidPlayLen:(unsigned int)a0;
- (unsigned int)vidPlayLen;

@end
