@class HTSLiveUser, NSString, HTSLiveInviteRoomInfo, HTSLiveRoomBattleMode;

@interface HTSLiveCrossRoomLinkInviteContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *inviter;
@property (nonatomic) BOOL hasInviter;
@property (retain, nonatomic) HTSLiveInviteRoomInfo *roomInfo;
@property (nonatomic) BOOL hasRoomInfo;
@property (copy, nonatomic) NSString *inviteTips;
@property (nonatomic) int inviterRoomJoinStatus;
@property (retain, nonatomic) HTSLiveRoomBattleMode *roomBattleMode;
@property (nonatomic) BOOL hasRoomBattleMode;
@property (copy, nonatomic) NSString *introductionContent;
@property (nonatomic) int crossRoomKind;
@property (nonatomic) int scoreType;

+ (id)descriptor;

@end
