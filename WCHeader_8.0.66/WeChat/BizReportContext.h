@class NSString;

@interface BizReportContext : WXPBGeneratedMessage

@property (nonatomic) unsigned long long currScene;
@property (nonatomic) unsigned int currIsInAppBackground;
@property (nonatomic) unsigned long long actionInPage;
@property (nonatomic) unsigned long long actionTs;
@property (nonatomic) unsigned long long currSubScene;
@property (nonatomic) unsigned long long currBizUin;
@property (nonatomic) unsigned long long currMsgId;
@property (nonatomic) unsigned long long currItemIdx;
@property (retain, nonatomic) NSString *actionRecommendId;
@property (retain, nonatomic) NSString *playSessionId;
@property (nonatomic) unsigned long long durationSincePlaySessionStart;
@property (nonatomic) unsigned long long durationSincePageStartDurationSincePageStart;
@property (retain, nonatomic) NSString *currListenId;
@property (nonatomic) unsigned long long currListenIdstartTs;
@property (retain, nonatomic) NSString *playSameSongId;
@property (nonatomic) unsigned int currSongIndexInList;
@property (retain, nonatomic) NSString *currCategoryId;
@property (nonatomic) unsigned int currPlayMode;
@property (nonatomic) unsigned int playDurationOfListenId;
@property (nonatomic) unsigned int currProgressOfListenId;
@property (nonatomic) unsigned int maxProgressOfListenId;
@property (nonatomic) unsigned int listenIdtype;
@property (retain, nonatomic) NSString *finderUin;
@property (retain, nonatomic) NSString *actionExtraInfo;

+ (void)initialize;

@end
