@class NSString, NSMutableArray;

@interface FinderLiveReplayTransitionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *cdnTransInfo;
@property (nonatomic) unsigned int recommendVideoQualityLevel;
@property (nonatomic) unsigned int forceRecommend;
@property (nonatomic) unsigned long long replayTransitionVideoId;
@property (retain, nonatomic) NSString *replayTransitionUrl;
@property (nonatomic) unsigned int disableReplayTransition;

+ (void)initialize;

@end
