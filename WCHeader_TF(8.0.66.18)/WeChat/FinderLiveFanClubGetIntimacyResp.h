@class FinderLiveAllRightsInfo, NSString, FinderLiveSuperFanRightInfo, FinderLiveNewRightsInfo, FinderJumpInfo, TaskProgressInfo, BaseResponse, NSMutableArray, FinderLiveFanClubFloatMsgInfo;

@interface FinderLiveFanClubGetIntimacyResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int curIntimacy;
@property (retain, nonatomic) NSMutableArray *badgeInfos;
@property (nonatomic) unsigned int nextLevelNeedIntimacy;
@property (retain, nonatomic) FinderLiveNewRightsInfo *newRightsInfo;
@property (retain, nonatomic) TaskProgressInfo *taskProgressInfo;
@property (retain, nonatomic) NSString *introductionUrl;
@property (nonatomic) BOOL noticeReserved;
@property (nonatomic) BOOL canReserveNotice;
@property (retain, nonatomic) FinderLiveAllRightsInfo *allRightsInfo;
@property (retain, nonatomic) FinderLiveFanClubFloatMsgInfo *floatMsgInfo;
@property (retain, nonatomic) FinderLiveSuperFanRightInfo *superFanRightsInfo;
@property (retain, nonatomic) FinderJumpInfo *cancelSubscriptionEntrance;

+ (void)initialize;

@end
