@interface DisturbTimeSpan : WXPBGeneratedMessage

@property (nonatomic) unsigned int beginTime;
@property (nonatomic) unsigned int endTime;

+ (void)initialize;

- (void)setEndTime:(unsigned int)a0;
- (unsigned int)endTime;
- (void)setBeginTime:(unsigned int)a0;
- (unsigned int)beginTime;

@end
