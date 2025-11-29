@class NSString;

@interface FinderLiveUrlOption : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *streamUrl;
@property (nonatomic) unsigned int timeLimit;
@property (nonatomic) unsigned int remainTime;
@property (nonatomic) unsigned int endTime;

+ (void)initialize;

- (void)setEndTime:(unsigned int)a0;
- (unsigned int)endTime;
- (void)setRemainTime:(unsigned int)a0;
- (unsigned int)remainTime;
- (void)setTimeLimit:(unsigned int)a0;
- (unsigned int)timeLimit;
- (void)setStreamUrl:(id)a0;
- (id)streamUrl;

@end
