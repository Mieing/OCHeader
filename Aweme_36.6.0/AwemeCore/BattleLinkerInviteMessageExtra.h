@class BattleConfigSetting, NSString, ActivityUser, IESLiveLinkMicBizExtra, BattleLinkerInviteMessageExtra_RankSeasonInfo, BattleLinkerInviteMessageExtra_GameInfo, VoteSetting, NSMutableArray, BattleLinkerInviteMessageExtra_InviterRivalExtra, HTSLiveRoom;

@interface BattleLinkerInviteMessageExtra : IESLivePBBaseMessage

@property (nonatomic) long long matchType;
@property (copy, nonatomic) NSString *tips;
@property (nonatomic) long long inviteType;
@property (nonatomic) long long subType;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *theme;
@property (nonatomic) long long duration;
@property (retain, nonatomic) BattleLinkerInviteMessageExtra_InviterRivalExtra *extra;
@property (nonatomic) BOOL hasExtra;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (readonly, nonatomic) unsigned long long tagsArray_Count;
@property (retain, nonatomic) HTSLiveRoom *inviteRoom;
@property (nonatomic) BOOL hasInviteRoom;
@property (nonatomic) BOOL previewLiveStream;
@property (retain, nonatomic) NSMutableArray *roomTagsArray;
@property (readonly, nonatomic) unsigned long long roomTagsArray_Count;
@property (retain, nonatomic) NSMutableArray *userTagsArray;
@property (readonly, nonatomic) unsigned long long userTagsArray_Count;
@property (copy, nonatomic) NSString *recommendReason;
@property (copy, nonatomic) NSString *activityName;
@property (retain, nonatomic) ActivityUser *activityUser;
@property (nonatomic) BOOL hasActivityUser;
@property (retain, nonatomic) BattleLinkerInviteMessageExtra_GameInfo *gameInfo;
@property (nonatomic) BOOL hasGameInfo;
@property (nonatomic) int anchorPkCheck;
@property (retain, nonatomic) NSMutableArray *canNotPassAnchorIdsArray;
@property (readonly, nonatomic) unsigned long long canNotPassAnchorIdsArray_Count;
@property (nonatomic) int switchPlayMode;
@property (retain, nonatomic) VoteSetting *voteSetting;
@property (nonatomic) BOOL hasVoteSetting;
@property (retain, nonatomic) BattleConfigSetting *battleConfigSetting;
@property (nonatomic) BOOL hasBattleConfigSetting;
@property (nonatomic) int inviteStatus;
@property (retain, nonatomic) NSMutableArray *inviterFollowedIdsArray;
@property (readonly, nonatomic) unsigned long long inviterFollowedIdsArray_Count;
@property (retain, nonatomic) NSMutableArray *matchTagsArray;
@property (readonly, nonatomic) unsigned long long matchTagsArray_Count;
@property (retain, nonatomic) IESLiveLinkMicBizExtra *linkMicBizExtra;
@property (nonatomic) BOOL hasLinkMicBizExtra;
@property (retain, nonatomic) NSMutableArray *halfFriendTagsArray;
@property (readonly, nonatomic) unsigned long long halfFriendTagsArray_Count;
@property (nonatomic) long long battleInvitePanelOpt;
@property (retain, nonatomic) BattleLinkerInviteMessageExtra_RankSeasonInfo *rankSeasonInfo;
@property (nonatomic) BOOL hasRankSeasonInfo;

+ (id)descriptor;

@end
