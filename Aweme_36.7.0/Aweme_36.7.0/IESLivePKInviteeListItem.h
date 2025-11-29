@class HTSLiveRoom, NSString, BattleRival_RankSeasonInfo, NSArray, BattleRival_InviteButton, HTSLiveImage, NSMutableArray, IESLiveRivalExtraInfo, NSNumber, NSIndexPath;

@interface IESLivePKInviteeListItem : IESLiveDynamicModel

@property (retain, nonatomic) HTSLiveRoom *room;
@property (retain, nonatomic) HTSLiveRoom *ownRoom;
@property (retain, nonatomic) NSIndexPath *loadIndex;
@property (nonatomic) BOOL hasInvited;
@property (copy, nonatomic) NSString *infoText;
@property (copy, nonatomic) NSString *inviteeLabel;
@property (retain, nonatomic) NSMutableArray *userTagsArray;
@property (retain, nonatomic) NSMutableArray *roomTagsArray;
@property (retain, nonatomic) NSMutableArray *halfFriendTagsArray;
@property (retain, nonatomic) BattleRival_RankSeasonInfo *rankSeasonInfo;
@property (copy, nonatomic) NSArray *userTagsContentSizeArray;
@property (copy, nonatomic) NSArray *roomTagsContentSizeArray;
@property (nonatomic) struct CGSize { double width; double height; } nameSize;
@property (nonatomic) struct CGSize { double width; double height; } userCountSize;
@property (nonatomic) unsigned long long inviteStatus;
@property (nonatomic) unsigned long long autoMatchInviteType;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSNumber *listNum;
@property (nonatomic) BOOL isSpecialRecommend;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) NSString *recommendReason;
@property (retain, nonatomic) BattleRival_InviteButton *inviteButton;
@property (nonatomic) BOOL showTips;
@property (copy, nonatomic) NSString *bookPKInfo;
@property (copy, nonatomic) NSString *bookPKButtonStr;
@property (copy, nonatomic) NSString *battleAttachedInfo;
@property (retain, nonatomic) HTSLiveImage *stageMedal;
@property (copy, nonatomic) NSString *disableButtonText;
@property (copy, nonatomic) NSString *inviteButtonText;
@property (retain, nonatomic) HTSLiveImage *inviteButtonImage;
@property (nonatomic) BOOL isSeasonCell;
@property (retain, nonatomic) IESLiveRivalExtraInfo *rivalInfo;
@property (nonatomic) unsigned long long sectionType;
@property (copy, nonatomic) id /* block */ onInviteRoom;

- (BOOL)isMultiLinker;
- (BOOL)isInBigParty;
- (void)mergeWithBattleRival:(id)a0 userTagSizeCache:(id)a1 roomTagSizeCache:(id)a2 nameSizeCache:(id)a3;
- (BOOL)canInvite;
- (id)listTypeForTrack;
- (id)trackParamsWithRow:(long long)a0;
- (void)doInviteWithErrorHandler:(id /* block */)a0;
- (id)sourceForTarck;
- (BOOL)acceptsInviting;
- (BOOL)isInMutliAudio;
- (void).cxx_destruct;
- (BOOL)isBusy;

@end
