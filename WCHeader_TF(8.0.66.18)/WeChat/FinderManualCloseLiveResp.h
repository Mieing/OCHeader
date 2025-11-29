@class NSString, FinderLiveAutoGenReplayOption, BaseResponse;

@interface FinderManualCloseLiveResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int liveDurationSeconds;
@property (nonatomic) unsigned int liveAudiencesNum;
@property (nonatomic) unsigned int liveBeLikedNum;
@property (nonatomic) unsigned int liveNewFansNum;
@property (nonatomic) unsigned int maxOnlineCount;
@property (nonatomic) unsigned int audiencesAvgSeconds;
@property (nonatomic) unsigned int bizLiveNewFansNum;
@property (nonatomic) unsigned int replayPrivilege;
@property (nonatomic) unsigned long long newLiveBeLikedNum;
@property (nonatomic) unsigned int replaySwitchStatus;
@property (nonatomic) unsigned int guideGenerationReplay;
@property (retain, nonatomic) NSString *generateReplayPageDisplayInfo;
@property (retain, nonatomic) FinderLiveAutoGenReplayOption *autoGenReplayOption;

+ (void)initialize;

@end
