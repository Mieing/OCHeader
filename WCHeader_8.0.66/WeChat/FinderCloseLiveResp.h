@class FinderLiveAutoGenReplayOption, BaseResponse;

@interface FinderCloseLiveResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int liveDurationSeconds;
@property (nonatomic) unsigned int liveAudiencesNum;
@property (nonatomic) unsigned int liveBeLikedNum;
@property (nonatomic) unsigned int liveNewFansNum;
@property (nonatomic) unsigned int maxOnlineCount;
@property (nonatomic) unsigned int audiencesAvgSeconds;
@property (nonatomic) unsigned int replayPrivilege;
@property (retain, nonatomic) FinderLiveAutoGenReplayOption *autoGenReplayOption;

+ (void)initialize;

@end
