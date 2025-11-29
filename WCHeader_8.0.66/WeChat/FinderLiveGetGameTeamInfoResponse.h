@class FinderLiveGamePlayTogether, FinderLiveGameTeamInfo, BaseResponse;

@interface FinderLiveGetGameTeamInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveGameTeamInfo *gameTeamInfo;
@property (retain, nonatomic) FinderLiveGamePlayTogether *playTogetherInfo;
@property (nonatomic) BOOL notPassOpenidToGame;

+ (void)initialize;

@end
