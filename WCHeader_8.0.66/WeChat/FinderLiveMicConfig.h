@class NSMutableArray;

@interface FinderLiveMicConfig : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *modeConfigList;
@property (nonatomic) unsigned int displayIntervalS;
@property (nonatomic) unsigned int anchorPkPanelChangeSessionOpenTimes;
@property (nonatomic) unsigned int anchorPkPanelChangeSessionDurationTimeS;

+ (void)initialize;

@end
