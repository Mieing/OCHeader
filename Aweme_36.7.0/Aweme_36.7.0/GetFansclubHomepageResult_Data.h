@class GetFansclubHomepageResult_Data_FansclubInfoHomePage, GetFansclubHomepageResult_Data_AnchorTaskInfo, NSMutableDictionary, GetFansclubHomepageResult_Data_UserTaskInfo, HTSLiveGuardInfo, GetFansclubHomepageResult_Data_UserFansclubInfoHomePage, GetFansclubHomepageResult_Data_GroupLiveInfo, HTSLiveFansclubParticipateIncentive;

@interface GetFansclubHomepageResult_Data : IESLivePBBaseMessage

@property (retain, nonatomic) GetFansclubHomepageResult_Data_FansclubInfoHomePage *clubInfo;
@property (nonatomic) BOOL hasClubInfo;
@property (retain, nonatomic) GetFansclubHomepageResult_Data_UserFansclubInfoHomePage *userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (retain, nonatomic) HTSLiveFansclubParticipateIncentive *participateIncentive;
@property (nonatomic) BOOL hasParticipateIncentive;
@property (retain, nonatomic) GetFansclubHomepageResult_Data_UserTaskInfo *userTask;
@property (nonatomic) BOOL hasUserTask;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;
@property (retain, nonatomic) GetFansclubHomepageResult_Data_AnchorTaskInfo *anchorTaskInfo;
@property (nonatomic) BOOL hasAnchorTaskInfo;
@property (retain, nonatomic) HTSLiveGuardInfo *guardInfo;
@property (nonatomic) BOOL hasGuardInfo;
@property (nonatomic) BOOL isSignUpGuard;
@property (nonatomic) long long guardOnlineTime;
@property (nonatomic) long long theme;
@property (nonatomic) BOOL isGroupLive;
@property (retain, nonatomic) GetFansclubHomepageResult_Data_GroupLiveInfo *groupLiveInfo;
@property (nonatomic) BOOL hasGroupLiveInfo;

+ (id)descriptor;

@end
