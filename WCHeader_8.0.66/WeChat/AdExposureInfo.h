@interface AdExposureInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int startPositionType;
@property (nonatomic) unsigned int endPositionType;
@property (nonatomic) float readHeight;
@property (nonatomic) float unReadTopHeight;
@property (nonatomic) float unReadBottomHeight;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) unsigned long long halfStartTime;
@property (nonatomic) unsigned long long halfEndTime;
@property (nonatomic) unsigned long long allStartTime;
@property (nonatomic) unsigned long long allEndTime;

+ (void)initialize;

- (void)setAllEndTime:(unsigned long long)a0;
- (unsigned long long)allEndTime;
- (void)setAllStartTime:(unsigned long long)a0;
- (unsigned long long)allStartTime;
- (void)setHalfEndTime:(unsigned long long)a0;
- (unsigned long long)halfEndTime;
- (void)setHalfStartTime:(unsigned long long)a0;
- (unsigned long long)halfStartTime;
- (void)setEndTime:(unsigned long long)a0;
- (unsigned long long)endTime;
- (void)setStartTime:(unsigned long long)a0;
- (unsigned long long)startTime;
- (void)setUnReadBottomHeight:(float)a0;
- (float)unReadBottomHeight;
- (void)setUnReadTopHeight:(float)a0;
- (float)unReadTopHeight;
- (void)setReadHeight:(float)a0;
- (float)readHeight;
- (void)setEndPositionType:(unsigned int)a0;
- (unsigned int)endPositionType;
- (void)setStartPositionType:(unsigned int)a0;
- (unsigned int)startPositionType;

@end
