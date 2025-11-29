@class NSString;

@interface FinderLiveKtvSongScoreReportRequest_ScoreInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int score;
@property (retain, nonatomic) NSString *level;
@property (nonatomic) unsigned int sentenceCnt;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int goodCnt;
@property (nonatomic) unsigned int prefectCnt;
@property (nonatomic) unsigned int ktvScoreEngineFlag;
@property (nonatomic) unsigned int ktvSoundEngineFlag;

+ (void)initialize;

@end
