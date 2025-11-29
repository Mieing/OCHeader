@class NSString, ActivityUser, HTSLiveImage, BattleStarActivityGradeMedal, NSMutableDictionary, BattleRival_RankSeasonInfo, NSMutableArray, IESLiveRivalExtraInfo, BattleRivalSortInfo, BattleRival_InviteButton, HTSLiveRoom;

@interface BattleRival : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) BOOL hasRoom;
@property (retain, nonatomic) IESLiveRivalExtraInfo *extraInfo;
@property (nonatomic) BOOL hasExtraInfo;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (readonly, nonatomic) unsigned long long tagsArray_Count;
@property (retain, nonatomic) NSMutableArray *roomTagsArray;
@property (readonly, nonatomic) unsigned long long roomTagsArray_Count;
@property (retain, nonatomic) NSMutableArray *userTagsArray;
@property (readonly, nonatomic) unsigned long long userTagsArray_Count;
@property (copy, nonatomic) NSString *recommendReason;
@property (nonatomic) BOOL isHighlight;
@property (retain, nonatomic) BattleStarActivityGradeMedal *activityMedal;
@property (nonatomic) BOOL hasActivityMedal;
@property (retain, nonatomic) BattleRival_InviteButton *inviteButton;
@property (nonatomic) BOOL hasInviteButton;
@property (retain, nonatomic) ActivityUser *activityUser;
@property (nonatomic) BOOL hasActivityUser;
@property (nonatomic) BOOL isNewAnchor;
@property (copy, nonatomic) NSString *signExtra;
@property (nonatomic) int fromServerInviteType;
@property (retain, nonatomic) NSMutableArray *participantRoomsArray;
@property (readonly, nonatomic) unsigned long long participantRoomsArray_Count;
@property (nonatomic) int scene;
@property (nonatomic) long long linkStatus;
@property (copy, nonatomic) NSString *linkText;
@property (copy, nonatomic) NSString *recommendInfo;
@property (copy, nonatomic) NSString *battleAttachedInfo;
@property (retain, nonatomic) HTSLiveImage *pkStageMedal;
@property (nonatomic) BOOL hasPkStageMedal;
@property (retain, nonatomic) NSMutableDictionary *linkerMapStr;
@property (readonly, nonatomic) unsigned long long linkerMapStr_Count;
@property (retain, nonatomic) BattleRivalSortInfo *sortInfo;
@property (nonatomic) BOOL hasSortInfo;
@property (copy, nonatomic) NSString *pkStageDesc;
@property (copy, nonatomic) NSString *roomStatusDesc;
@property (retain, nonatomic) NSMutableArray *halfFriendTagsArray;
@property (readonly, nonatomic) unsigned long long halfFriendTagsArray_Count;
@property (copy, nonatomic) NSString *reserveButton;
@property (copy, nonatomic) NSString *reserveDesc;
@property (retain, nonatomic) BattleRival_RankSeasonInfo *rankSeasonInfo;
@property (nonatomic) BOOL hasRankSeasonInfo;

+ (id)descriptor;

@end
