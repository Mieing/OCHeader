@class LongVideoClientInfo;

@interface FinderSyncClientInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int finderEntranceTitleLengthLimit;
@property (nonatomic) unsigned int finderEntranceSingleTitleLengthLimit;
@property (nonatomic) unsigned int bubbleSingleTitleLengthLimit;
@property (nonatomic) unsigned int recommendReasonSingleTitleLengthLimit;
@property (nonatomic) unsigned int liveEntranceSingleTitleLengthLimit;
@property (nonatomic) BOOL enableStreamCityTab;
@property (retain, nonatomic) LongVideoClientInfo *longvideoClientInfo;

+ (void)initialize;

- (void)setLongvideoClientInfo:(id)a0;
- (id)longvideoClientInfo;
- (void)setEnableStreamCityTab:(BOOL)a0;
- (BOOL)enableStreamCityTab;
- (void)setLiveEntranceSingleTitleLengthLimit:(unsigned int)a0;
- (unsigned int)liveEntranceSingleTitleLengthLimit;
- (void)setRecommendReasonSingleTitleLengthLimit:(unsigned int)a0;
- (unsigned int)recommendReasonSingleTitleLengthLimit;
- (void)setBubbleSingleTitleLengthLimit:(unsigned int)a0;
- (unsigned int)bubbleSingleTitleLengthLimit;
- (void)setFinderEntranceSingleTitleLengthLimit:(unsigned int)a0;
- (unsigned int)finderEntranceSingleTitleLengthLimit;
- (void)setFinderEntranceTitleLengthLimit:(unsigned int)a0;
- (unsigned int)finderEntranceTitleLengthLimit;

@end
