@class NSString, HTSLiveCommon;

@interface HTSLiveAnchorLinkmicBackstageInviteMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *toUserId;
@property (copy, nonatomic) NSString *toRoomId;
@property (nonatomic) int matchType;
@property (nonatomic) int inviteType;
@property (nonatomic) int scene;
@property (nonatomic) int bizType;
@property (nonatomic) int inviteSource;
@property (copy, nonatomic) NSString *inviteeFollowedUserIds;
@property (copy, nonatomic) NSString *toOpenId;
@property (copy, nonatomic) NSString *inviteeFollowedUserOpenIds;

+ (id)descriptor;

@end
